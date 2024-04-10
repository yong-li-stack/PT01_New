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
#define TEST_Buzzer            (GPIO_NUM_3)
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
    
    for(int i = 0; i < 2; i++)
    {
        if(innotech_wifi_scan((uint8_t*)FACTORY_SSID))
        {
            factory_flag = true;
            innotech_relay_factory_init();
            innotech_button_init();
            innotech_meter_init();
            innotech_lcd_pre_init();
            innotech_buzzer_pwm_init();
            
            break;
        }
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
    
    while(factory_flag)
    {
        innotech_button_process();
        innotech_meter_process();

        if(fix_flag == 0)
        {
            if(++tick > 100 && fix_power_factory() != 0)
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
            innotech_buzzer_pwm_write(4095);
            vTaskDelay(500 / portTICK_PERIOD_MS);
            innotech_buzzer_pwm_write(0);
            vTaskDelay(500 / portTICK_PERIOD_MS);
        }
        vTaskDelay(20 / portTICK_PERIOD_MS);
        
    }
    
}

