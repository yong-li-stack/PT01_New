/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Factory Handle.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/02/29	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "innotech_wifi.h"
#include "innotech_config.h"
#include "innotech_factory.h"
#include "innotech_relay.h"
#include "innotech_button.h"
#include "innotech_meter.h"


#define FACTORY_SSID "gnpro*GB3Z*"

extern void esp_restart(void);
void innotech_factory_reset(void)
{
    innotech_default_device_config();
    innotech_wifi_config_reset();        
    esp_restart();
}

void innotech_factory_init(void)
{
    bool factory_flag = false;

    innotech_netif_init();

    for(int i = 0; i < 2; i++)
    {
        if(innotech_wifi_scan((uint8_t*)FACTORY_SSID))
        {
            factory_flag = true;
            innotech_relay_init();
            innotech_button_init();
            innotech_meter_init();
            break;
        }
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }

    while(factory_flag)
    {
        innotech_button_process();
        vTaskDelay(20 / portTICK_PERIOD_MS);
    }
    
}

