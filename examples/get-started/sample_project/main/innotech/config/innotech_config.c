/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2021/11
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Device Config Info.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/01/04	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#include <stdio.h>
#include <string.h>
#include "innotech_config.h"
#include "api_bridge.h"

typedef struct _base_config_t
{
    uint8_t flash_init[4];
    bool power_switch;
    bool lcd_switch;
    bool brightness_switch;
    uint8_t lcd_brightness;
    bool memory;
    double line_diameter;
} base_config_t;

const uint8_t config_init_check[4] = {0x04, 0x01, 0x24, 0x20};
static innotech_config_t innotech_config;
static base_config_t base_config;
static innotech_timer_t timer[5];
static innotech_count_down_t sleep[3];

void innotech_config_copy(void)
{
    innotech_config.power_switch      = base_config.power_switch;
    innotech_config.lcd_switch        = base_config.lcd_switch;
    innotech_config.brightness_switch = base_config.brightness_switch;
    innotech_config.lcd_brightness    = base_config.lcd_brightness;
    innotech_config.line_diameter     = base_config.line_diameter;
    innotech_config.memory            = base_config.memory;

    memcpy(innotech_config.timer, timer, sizeof(innotech_timer_t)*5);

    memcpy(innotech_config.sleep, sleep, sizeof(innotech_count_down_t)*3);
}

void innotech_base_copy(void)
{
    base_config.power_switch      = innotech_config.power_switch;
    base_config.lcd_switch        = innotech_config.lcd_switch;
    base_config.brightness_switch = innotech_config.brightness_switch;
    base_config.lcd_brightness    = innotech_config.lcd_brightness;
    base_config.line_diameter     = innotech_config.line_diameter;
    base_config.memory            = innotech_config.memory;
}

void innotech_config_check(void)
{
    uint8_t copy_flag = 0;
    
    if (base_config.power_switch      != innotech_config.power_switch ||
        base_config.lcd_switch        != innotech_config.lcd_switch ||
        base_config.brightness_switch != innotech_config.brightness_switch ||
        base_config.lcd_brightness    != innotech_config.lcd_brightness ||
        base_config.line_diameter     != innotech_config.line_diameter ||
        base_config.memory            != innotech_config.memory )
    {
        innotech_base_copy();
        innotech_flash_write("innotech", (char *)&base_config, sizeof(base_config_t));

    }

    for(int i = 0; i < 5; i++)
    {
        if(memcmp(&(timer[i]), &(innotech_config.timer[i]), sizeof(innotech_timer_t)) == 0)
        {
            // printf("------------------------------------\n");
            memcpy(&(timer[i]), &(innotech_config.timer[i]), sizeof(innotech_timer_t));
            copy_flag = 1;
        }
    }
    
    if(copy_flag == 1)
    {
        innotech_flash_write("timer", (char *)timer, sizeof(innotech_timer_t)*5);
    }

    for(int i = 0; i < 3; i++)
    {
        if(memcmp(sleep, innotech_config.sleep, sizeof(innotech_count_down_t)*3) == 0)
        {
            // printf("66666666666666666666666666666666666666666\n");
            memcpy(&(sleep[i]), &(innotech_config.sleep[i]), sizeof(innotech_count_down_t));
            copy_flag = 2;
        }
    }

    if(copy_flag == 2)
    {
        innotech_flash_write("sleep", (char *)sleep, sizeof(innotech_count_down_t));
    }

}

void innotech_config_printf(void)
{
    uint8_t i = 0;

    printf("/*****************************************************************************\r\n");
    printf("*____________________________________________________________________________\r\n");
    printf("flash_init: %d %d %d %d\r\n", innotech_config.flash_init[0], innotech_config.flash_init[1], innotech_config.flash_init[2], innotech_config.flash_init[3]);
    printf("power_switch: %d\r\n", innotech_config.power_switch);
    printf("lcd_switch: %d\r\n", innotech_config.lcd_switch);
    printf("brightness_switch: %d\r\n", innotech_config.brightness_switch);
    printf("lcd_brightness: %d\r\n", innotech_config.lcd_brightness);
    for(i = 0; i < 5; i++)
    {
        printf("timer[%d].schedule_id: %s\r\n", i, innotech_config.timer[i].schedule_id);
        printf("timer[%d].enable: %d\r\n", i, innotech_config.timer[i].enable);
        printf("timer[%d].is_valid: %d\r\n", i, innotech_config.timer[i].is_valid);
        printf("timer[%d].onoff: %d\r\n", i, innotech_config.timer[i].onoff);
        printf("timer[%d].time: %s\r\n", i, innotech_config.timer[i].time);
        printf("timer[%d].repeat: %s\r\n", i, innotech_config.timer[i].repeat);
    }

    for(i = 0; i < 3; i++)
    {
        printf("sleep[%d].schedule_id: %s\r\n", i, innotech_config.sleep[i].schedule_id);
        printf("sleep[%d].time_left: %ld\r\n", i, innotech_config.sleep[i].time_left);
        printf("sleep[%d].onoff: %d\r\n", i, innotech_config.sleep[i].onoff);
        printf("sleep[%d].timestamp: %sd\r\n", i, innotech_config.sleep[i].timestamp);
        printf("sleep[%d].is_running: %d\r\n", i, innotech_config.sleep[i].is_running);
    }
    printf("memory: %d\r\n", innotech_config.memory);
    printf("*____________________________________________________________________________\r\n");
    printf("*****************************************************************************/\r\n");
}


void innotech_default_device_config(void)
{   
    memset(&base_config, 0, sizeof(base_config_t));
    memcpy(base_config.flash_init, config_init_check, 4);
    base_config.power_switch      = true;
    base_config.lcd_switch        = true;
    base_config.brightness_switch = true;
    base_config.lcd_brightness    = 100;
    base_config.line_diameter     = 0;
    base_config.memory            = false;

	innotech_flash_write("innotech", (char *)&base_config, sizeof(base_config_t));
}

void* innotech_config_get_handle(void)
{
    return (void*)&innotech_config;
}

void innotech_config_init(void)
{
    uint8_t* p_flash = (uint8_t*)innotech_config.flash_init;
    uint8_t* p_flag = (uint8_t*)config_init_check;
    uint8_t i = 0;

    innotech_flash_init();
    
    memset(&base_config, 0, sizeof(base_config_t));
    innotech_flash_read("innotech", (char *)&base_config, sizeof(base_config_t));

    for(i = 0; i < 5; i++)
    {
        memset(timer[i].schedule_id, 0, 50);
        timer[i].enable = 0;
        timer[i].is_valid = 0;
        timer[i].onoff = 0;
        memset(timer[i].time, 0, 256);
        memset(timer[i].repeat, 0, 256);
    }
    innotech_flash_read("timer", (char *)timer, sizeof(innotech_timer_t)*5);

    for(i = 0; i < 3; i++)
    {
        memset(sleep[i].schedule_id, 0, 50);
        sleep[i].time_left = 0;  
        sleep[i].onoff = 0;
        memset(sleep[i].timestamp, 0, 64);
        sleep[i].is_running = 0;
    }
    innotech_flash_read("sleep", (char *)sleep, sizeof(innotech_count_down_t)*3);

    for(i = 0; i < 4; i++)
    {
        if (p_flash[i] != p_flag[i])
        {
            innotech_default_device_config();
            break;
        }
    }
    innotech_config_copy();
    // innotech_config_printf();
}


