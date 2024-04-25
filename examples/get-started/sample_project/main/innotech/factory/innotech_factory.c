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
#define ABS(a,b) (((a) > (b)) ? ((a) - (b)) : ((b) - (a)))
double fix_num = 0;
double fix_vol_num = 0;
static char Buzzer_flag = 0;
bool factory_flag = false;
 uint8_t fix_flag = 0;
static uint8_t power_tick = 0;
static uint8_t check_down = 0;
static uint8_t vol_tick = 0;
static uint8_t power_temp_tick = 0;
static uint8_t vol__temp_tick = 0;
static uint8_t vol_tick_array[5] = {0};
static uint8_t power_tick_array[5] = {0};
extern void esp_restart(void);

uint8_t innotech_fix_flag_get(void)
{
    return fix_flag;
}

bool innotech_factory_get(void)
{
    return factory_flag;
}

void innotech_factory_reset(void)
{
    innotech_default_device_config();
    innotech_wifi_config_reset();        
    esp_restart();
}

int power_tick_callback(void)
{
    int max_count = 0; 
    int max_num = power_tick_array[0];
    int count = 0;
    int i, j;
 

    for (i = 0; i < 5; i++) {
        count = 0; 
        for (j = 0; j < 5; j++) {
            if (power_tick_array[i] == power_tick_array[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_num = power_tick_array[i];
        }
    }
    return max_num;
}

int vol_tick_callback(void)
{
    int max_count = 0; 
    int max_num = vol_tick_array[0];
    int count = 0;
    int i, j;
 

    for (i = 0; i < 5; i++) {
        count = 0; 
        for (j = 0; j < 5; j++) {
            if (vol_tick_array[i] == vol_tick_array[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_num = vol_tick_array[i];
        }
    }
    return max_num;
}

void innotech_factory_init(void)
{
    uint8_t tick = 0;
    static uint8_t power_tick_flag = 0;
    static uint8_t vol_tick_flag = 0;
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
            printf("fix_num == %f fix_vol_num == %f\n",fix_num,fix_vol_num);
            if(fix_num && fix_vol_num)
            {
                check_down = 1;
            }
            break;
        }
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
    
    while(factory_flag)
    {
        innotech_button_process();
        innotech_meter_process();
        if(tick % 20 == 0)
        {
            power_tick_array[power_tick_flag++] = fix_power_factory();
            vol_tick_array[vol_tick_flag++] = fix_vol_factory();
            power_tick_flag %= 5;
            vol_tick_flag %= 5;
        }
        
        if(fix_flag == 0 )
        {
            if(++tick > 100)
            {
                tick = 0;
                power_tick = power_tick_callback();
                vol_tick = vol_tick_callback();
                printf("power_tick == %d vol_tick == %d\n",power_tick,vol_tick);//156   217
                if(check_down == 1)
                {
                    if(((ABS(power_tick,200 / fix_num) < 5)) && ((ABS(vol_tick,220 / fix_vol_num) < 5)))
                    {
                        fix_num = (double)200 / power_tick;
                        fix_vol_num = (double) 220 / vol_tick;
                        if(fix_num != 0 && fix_vol_num != 0)
                        {
                            fix_flag = 1;
                            innotech_flash_write("fix_vol_num", (char *)&fix_vol_num, sizeof(double));
                            innotech_flash_write("fix_num", (char *)&fix_num, sizeof(double));
                            printf("fix_num = %f fix_vol_num = %f\n", fix_num,fix_vol_num);
                        }
                    }
                }else
                {
                    fix_num = (double)200 / power_tick;
                    fix_vol_num = (double) 220 / vol_tick;
                    if(fix_num != 0 && fix_vol_num != 0)
                    {
                        fix_flag = 1;
                        innotech_flash_write("fix_vol_num", (char *)&fix_vol_num, sizeof(double));
                        innotech_flash_write("fix_num", (char *)&fix_num, sizeof(double));
                        printf("fix_num = %f fix_vol_num = %f\n", fix_num,fix_vol_num);
                    }
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

