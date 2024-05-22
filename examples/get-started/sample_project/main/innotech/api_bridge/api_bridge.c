/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/12
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    API Control File.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/12/20	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <driver/i2c.h>
#include "esp_system.h"
#include "api_bridge.h"
#include "nvs_flash.h"
#include "nvs.h"

static const char *TAG = "api_bridge";

static nvs_handle_t handle;

#define I2C_MASTER_NUM 0            /*!< I2C port number for master dev */
#define I2C_MASTER_TX_BUF_DISABLE 0 /*!< I2C master do not need buffer */
#define I2C_MASTER_RX_BUF_DISABLE 0 /*!< I2C master do not need buffer */
#define I2C_MASTER_FREQ_HZ 100000   /*!< I2C master clock frequency */
#define I2C_MASTER_SCL_IO 14         /*!< gpio number for I2C master clock */
#define I2C_MASTER_SDA_IO 15         /*!< gpio number for I2C master data  */
#define ACK_CHECK_EN 0x1            /*!< I2C master will check ack from slave*/

esp_err_t innotech_led_i2c_init(void)
{
    int i2c_master_port = I2C_MASTER_NUM;
    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = I2C_MASTER_SDA_IO,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_io_num = I2C_MASTER_SCL_IO,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = I2C_MASTER_FREQ_HZ,
        // .clk_flags = 0,          /*!< Optional, you can use I2C_SCLK_SRC_FLAG_* flags to choose i2c source clock here. */
    };
    esp_err_t err = i2c_param_config(i2c_master_port, &conf);
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "i2c driver config failed");
        return err;
    }
    return i2c_driver_install(i2c_master_port, conf.mode, I2C_MASTER_RX_BUF_DISABLE, I2C_MASTER_TX_BUF_DISABLE, 0);
}

esp_err_t innotech_led_i2c_write(uint8_t* data, int len)
{
    esp_err_t err = ESP_OK;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    int i = 0;

    i2c_master_start(cmd);
    for (i = 0; i < len; i++)
    {
        i2c_master_write_byte(cmd, data[i], ACK_CHECK_EN);
    }
    i2c_master_stop(cmd);
    err = i2c_master_cmd_begin(I2C_MASTER_NUM, cmd, 1);
    i2c_cmd_link_delete(cmd);

    return err;
}

void innotech_flash_read(char *key,char *data,size_t data_size)
{
    esp_err_t err;
    //size_t data_size = INNOTECH_DATA_SIZE;

    err = nvs_open("storage", NVS_READWRITE, &handle);
    if(err != ESP_OK) 
    {
        ESP_LOGE(TAG, "Error (%s) opening NVS handle!\n", esp_err_to_name(err));
    } 
    else 
    {
        // Read 
        err = nvs_get_blob(handle, key, data, &data_size);
        switch (err) {
            case ESP_OK:
                //printf("Restart counter = %d\n", restart_counter);
                break;
            case ESP_ERR_NVS_NOT_FOUND:
                ESP_LOGE(TAG, "The value is not initialized yet!\n");
                break;
            default :
                ESP_LOGE(TAG, "Error (%s) reading!\n", esp_err_to_name(err));
        }
        // Close
        nvs_close(handle);
    }
}

void innotech_flash_write(char * key, char* data, size_t data_size)
{
    esp_err_t err;

    err = nvs_open("storage", NVS_READWRITE, &handle);
    if(err != ESP_OK) 
    {
        ESP_LOGE(TAG, "Error (%s) opening NVS handle!\n", esp_err_to_name(err));
    } 
    else 
    {
        // Write
        err = nvs_set_blob(handle, key, (const char*)data, data_size);
        //ESP_LOGE(TAG, "%s\n", (err != ESP_OK) ? "Write Failed!" : "Write Done");
        // Commit written value.
        // After setting any values, nvs_commit() must be called to ensure changes are written
        // to flash storage. Implementations may write to storage at other times,
        // but this is not guaranteed.
        //printf("Committing updates in NVS ... ");
        err = nvs_commit(handle);
        //ESP_LOGE(TAG, "%s\n", (err != ESP_OK) ? "Commit Failed!" : "Commit Done");
        // Close
        nvs_close(handle);
    }
}


void innotech_flash_init(void)
{
    // Initialize NVS
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) 
    {
        // NVS partition was truncated and needs to be erased
        // Retry nvs_flash_init
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);
}
