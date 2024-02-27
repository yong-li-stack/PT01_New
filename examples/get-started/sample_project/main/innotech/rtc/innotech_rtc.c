/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Network Time Synchronization.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/02/27	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "api_bridge.h"
#include "innotech_wifi.h"
#include "innotech_rtc.h"

#define RTC_TAG "INNOTECH_RTC"

static void innotech_rtc_thread(void *arg)
{
    while(!innotech_wifi_state_get())  //must be wifi connected
    {
        ESP_LOGI(RTC_TAG, "RTC wait wifi connect!!!\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }

    time_t now;
    struct tm timeinfo;
    time(&now);
    localtime_r(&now, &timeinfo);
    // Set timezone to China Standard Time
    setenv("TZ", "CST-8", 1);
    tzset();
    // Is time set? If not, tm_year will be (1970 - 1900).
    if (timeinfo.tm_year < (2016 - 1900)) {
        ESP_LOGI(RTC_TAG, "Time is not set yet. Connecting to WiFi and getting time over NTP.");
        innotech_initialize_sntp();
        // update 'now' variable with current time
        time(&now);
    }
    // wait for time to be set
    while (innotech_get_sync_status()) 
    {
        ESP_LOGI(RTC_TAG, "Waiting for system time to be set...");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }

    while(1)
    {
        time(&now);
        localtime_r(&now, &timeinfo);
        //printf("[sync time]%d-%d-%d %d:%d:%d week:%d\n", timeinfo.tm_year+1900, timeinfo.tm_mon+1, 
        //    timeinfo.tm_mday, timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec, timeinfo.tm_wday);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

}

void innotech_rtc_init(void)
{
    if(xTaskCreate(innotech_rtc_thread, (char const *)"innotech_rtc_thread", 2560, NULL, 23, NULL) != pdPASS)
    {
        printf("\n\r[%s] Create RTC update task failed", __FUNCTION__);
    }   
}

