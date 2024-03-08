/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Network Weather Get.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/03/06	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "api_bridge.h"
#include "zlib.h"
#include "zutil.h"
#include "inftrees.h"
#include "inflate.h"
#include "innotech_weather.h"
#include "esp_http_client.h"
#include "lwip/err.h"
#include "lwip/sys.h"
#include "esp_crt_bundle.h"
#include "cJSON.h"

#define TAG "INNOTECH_WEATHER"

#define _OPTION_                        "location=101020100&gzip=n&lang=zh"
#define _OPTION_MULTI                   "location=%d&lang=en"

#define _KEY_VALUE_                     "REQUEST_KEY"
#define _KEY_                           "key=" _KEY_VALUE_
/**
 * @brief See more at https://dev.qweather.com/docs/api/
 *
 */
#define WEATHER_SERVER      "devapi.qweather.com"
#define WEB_URL_NOW         "https://" WEATHER_SERVER "/v7/weather/now?" _OPTION_MULTI "&" _KEY_
#define WEB_URL_AIR         "https://" WEATHER_SERVER "/v7/air/now?"     _OPTION_ "&" _KEY_

#define MAX_HTTP_RECV_BUFFER            (1024)

static weather_t weather_info;
static uint8_t location_flag = 0;
static location_t device;

void innotech_location_set(location_t location)
{
    device.city_id = location.city_id;
    device.latitude = location.latitude;
    device.longitude = location.longitude;
    location_flag = 1;
    printf("city_id: %d latitude: %f longitude:%f\r\n", device.city_id, device.latitude, device.longitude);
}

weather_t innotech_weather_info_get(void)
{
    return weather_info;
}

static int network_gzip_decompress(void *in_buf, size_t in_size, void *out_buf, size_t *out_size, size_t out_buf_size)
{
    int err = 0;
    z_stream d_stream = {0}; /* decompression stream */
    d_stream.zalloc = NULL;
    d_stream.zfree = NULL;
    d_stream.opaque = NULL;
    d_stream.next_in  = in_buf;
    d_stream.avail_in = 0;
    d_stream.next_out = out_buf;

    if ((err = inflateInit2(&d_stream, 47)) != Z_OK) {
        return err;
    }
    while (d_stream.total_out < out_buf_size - 1 && d_stream.total_in < in_size) {
        d_stream.avail_in = d_stream.avail_out = 1;
        if ((err = inflate(&d_stream, Z_NO_FLUSH)) == Z_STREAM_END) {
            break;
        }
        if (err != Z_OK) {
            return err;
        }
    }

    if ((err = inflateEnd(&d_stream)) != Z_OK) {
        return err;
    }

    *out_size = d_stream.total_out;
    ((char *)out_buf)[*out_size] = '\0';

    return Z_OK;
}

static esp_err_t app_weather_parse_now(char *buffer)
{
    cJSON *json = cJSON_Parse(buffer);
    cJSON *json_now = NULL;

    if (NULL != json) {
        json_now = cJSON_GetObjectItem(json, "now");
        if (NULL != json_now) {
            cJSON *item_temp_max = cJSON_GetObjectItem(json_now, "tempMax");
            cJSON *item_temp_min = cJSON_GetObjectItem(json_now, "tempMin");
            cJSON *item_icon = cJSON_GetObjectItem(json_now, "iconDay");
            cJSON *item_humidity = cJSON_GetObjectItem(json_now, "humidity");

            weather_info.temp_max = item_temp_max->valueint;
            weather_info.temp_min = item_temp_min->valueint;
            weather_info.icon_code = item_icon->valueint;
            weather_info.humid = item_humidity->valueint;
            ESP_LOGI(TAG, "Temp : %d/%d", weather_info.temp_max, weather_info.temp_min);
            ESP_LOGI(TAG, "Icon : [%d]", weather_info.icon_code);
            ESP_LOGI(TAG, "Humid: [%d]", weather_info.humid);
        } else {
            ESP_LOGE(TAG, "Error parsing object - [%s] - [%d]", __FILE__, __LINE__);
            return ESP_FAIL;
        }
        cJSON_Delete(json);
    } else {
        ESP_LOGE(TAG, "Error parsing object - [%s] - [%d]", __FILE__, __LINE__);
        return ESP_FAIL;
    }

    return ESP_OK;
}

esp_err_t response_handler(esp_http_client_event_t *evt)
{
    static char *data[512] = {0};
    static int data_len = 0;

    switch (evt->event_id) {
    case HTTP_EVENT_ERROR:
        printf("HTTP_EVENT_ERROR\n");
        break;

    case HTTP_EVENT_ON_CONNECTED:
        data_len = 0;
        printf("HTTP_EVENT_ON_CONNECTED\n");
        break;

    case HTTP_EVENT_HEADER_SENT:
        printf("HTTP_EVENT_HEADER_SENT\n");
        break;

    case HTTP_EVENT_ON_HEADER:
        if (evt->data_len) {
            printf("HTTP_EVENT_ON_HEADER\n");
            printf("%.*s", evt->data_len, (char *)evt->user_data);
        }
        break;

    case HTTP_EVENT_ON_DATA:
        printf("HTTP_EVENT_ON_DATA (%d +)%d\n", data_len, evt->data_len);
        memcpy(data + data_len, (char *)evt->data, evt->data_len);
        data_len += evt->data_len;
        data[data_len] = '\0';
        break;

    case HTTP_EVENT_ON_FINISH:
        size_t out_size = 0;
        device.city_id = (int)evt->user_data;
        size_t decode_maxlen = data_len*2;
        char decode_out[1024] = {0};
        network_gzip_decompress(data, data_len, decode_out, &out_size, decode_maxlen);
        printf("HTTP_EVENT_ON_FINISH, out_size:%d, %s\n", out_size, decode_out);
        app_weather_parse_now(decode_out);

        break;

    case HTTP_EVENT_DISCONNECTED:
        printf("HTTP_EVENT_DISCONNECTED\n");
        break;

    default:
        break;
    }

    return ESP_OK;
}

esp_err_t app_weather_request(void)
{
    char url_request[128] = {0};

    //sprintf(url_request, "https://devapi.qweather.com/v7/weather/now?location=%.2f,%.2f&lang=en&key=82cb41e828d14f4399a12ba5b485ce52", device.longitude, device.latitude);
    sprintf(url_request, "https://api.qweather.com/v7/weather/3d?location=%.2f,%.2f&lang=en&key=82cb41e828d14f4399a12ba5b485ce52", device.longitude, device.latitude);
    ESP_LOGI(TAG, "url_request:%s %d\r\n", url_request, strlen(url_request)+1);

    esp_http_client_config_t config = {
        .url = url_request,
        .method = HTTP_METHOD_GET,
        .event_handler = response_handler,
        .buffer_size = MAX_HTTP_RECV_BUFFER,
        .timeout_ms = 5000,
        .user_data = (void *)device.city_id,
        .crt_bundle_attach = esp_crt_bundle_attach,
    };
    // Set the headers
    esp_http_client_handle_t client = esp_http_client_init(&config);
    esp_http_client_set_header(client, "Content-Type", "application/json");
    esp_http_client_set_header(client, "Host", WEATHER_SERVER);
    esp_http_client_set_header(client, "User-Agent", "Innotech");
    esp_http_client_set_header(client, "Accept-Encoding", "deflate");
    esp_http_client_set_header(client, "Cache-Control", "no-cache");
    esp_http_client_set_header(client, "Accept", "*/*");

    // Send the request
    esp_err_t err = esp_http_client_perform(client);
    if (err != ESP_OK) {
       ESP_LOGW(TAG, "HTTP POST request failed: %s\n", esp_err_to_name(err));
    }

    esp_http_client_cleanup(client);

    return ESP_OK;
}

void innotech_weather_check_handle(void *args)
{
    while(1)
    {
        if(location_flag == 1)
        {
            location_flag = 0;
            app_weather_request();
        }
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void innotech_weather_init(void)
{
    if(xTaskCreate(&innotech_weather_check_handle, "weather_check_handle", 1024 * 8, NULL, 23, NULL) != pdTRUE)
    {
        //ESP_LOGI(TAG, "create device process task failed!!!");
    }
}