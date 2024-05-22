/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2021/08
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Device Service Handle.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2021/08/29	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "innotech_device.h"
#include "innotech_lcd.h"
//#include "innotech_factory.h"
//#include "innotech_relay.h"
//#include "innotech_button.h"
#include "api_bridge.h"
#include "innotech_config.h"

static uint16_t time_tick = 0;


void innotech_update_save_tick(void)
{
    time_tick = 0;
}

void innotech_device_service_start(void)
{
    
}

void innotech_device_service_handle(void *args)
{
    while(1)
    {
        innotech_lcd_process();
        //innotech_button_process();

        if(++time_tick >= 500)
        {
            time_tick = 0;
            //innotech_relay_state_save();
        }
        vTaskDelay(20 / portTICK_PERIOD_MS);
    }    
}

void innotech_device_service_init(void)
{    
    if(xTaskCreate(&innotech_device_service_handle, "device_service_handle", 2560, NULL, 23, NULL) != pdTRUE)
    {
        //ESP_LOGI(TAG, "create device process task failed!!!");
    }
}

void innotech_device_init(void)
{
    //innotech_factory_init();
    innotech_lcd_init();
    //innotech_relay_init();
    //innotech_button_init();
    innotech_config_init();
	innotech_device_service_init();
    innotech_device_service_start();
}