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
#include "driver/gpio.h"
#include "innotech_button.h"
#include "innotech_meter.h"
#include "innotech_lcd.h"
#include "api_bridge.h"


#define FACTORY_SSID "gnpro*GB3Z*"
#define TEST_Buzzer            (GPIO_NUM_8)
double fix_num = 0;
static char Buzzer_flag = 0;
bool factory_flag = false;
static uint8_t fix_flag = 0;

extern void esp_restart(void);

uint8_t innotech_fix_flag_get(void)
{
    return fix_flag;
}

void innotech_factory_reset(void)
{
    innotech_default_device_config();
    innotech_wifi_config_reset();        
    esp_restart();
}

void innotech_factory_init(void)
{
    uint8_t tick = 0;

    innotech_netif_init();
    
    const gpio_config_t Buzzer_cfg = {
        // .intr_type = GPIO_INTR_POSEDGE,
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = BIT64(TEST_Buzzer),
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
    };
    gpio_config(&Buzzer_cfg);
    for(int i = 0; i < 2; i++)
    {
        if(innotech_wifi_scan((uint8_t*)FACTORY_SSID))
        {
            factory_flag = true;
            innotech_relay_factory_init();
            innotech_button_init();
            innotech_meter_init();
            innotech_lcd_pre_init();
            break;
        }
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
    //innotech_lcd_init();

    while(factory_flag)
    {
        innotech_button_process();
        innotech_meter_process();

        if(fix_flag == 0)
        {
            if(++tick > 100)
            {
                tick = 0;
                fix_num = (double)200 / fix_power_factory();
                if(fix_num != 0)
                {
                    fix_flag = 1;
                    innotech_flash_write("fix_num", (char *)&fix_num, sizeof(double));
                    printf("fix_num = %f\n", fix_num);
                }
            }
            
        }
        
        if((fix_power_factory() * fix_num) >= 400)
        {
            gpio_set_level(TEST_Buzzer, 1);
            vTaskDelay(500);
            gpio_set_level(TEST_Buzzer, 0);
            vTaskDelay(500);
        }
        vTaskDelay(20 / portTICK_PERIOD_MS);

    }
    
}

