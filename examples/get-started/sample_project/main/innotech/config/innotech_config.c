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

#define INNOTECH_DATA_SIZE  16

const uint8_t config_init_check[4] = {0x04, 0x01, 0x24, 0x20};
static innotech_config_t innotech_config;
static innotech_config_t copy_config;

static uint8_t innotech_buf[INNOTECH_DATA_SIZE] = {0};

uint8_t innotech_config_check(void)
{
    uint8_t config_modify = 1;

    if(memcmp(&copy_config, &innotech_config, sizeof(innotech_config_t)) == 0)
    {
        config_modify = 0;
    }

    return config_modify;
}

void innotech_default_device_config(void)
{   
    uint8_t i = 0;

    memset(&innotech_config, 0, sizeof(innotech_config_t));
    memcpy(innotech_config.flash_init, config_init_check, 4);
    innotech_config.power_switch      = true;
    innotech_config.lcd_switch        = true;
    innotech_config.brightness_switch = true;
    innotech_config.lcd_brightness    = 100;

    for(i = 0; i < 5; i++)
    {
        memset(innotech_config.timer[i].schedule_id, 0, 50);
        innotech_config.timer[i].enable = 0;
        innotech_config.timer[i].is_valid = 0;
        innotech_config.timer[i].onoff = 0;
        memset(innotech_config.timer[i].time, 0, 256);
        memset(innotech_config.timer[i].repeat, 0, 256);
    }

    for(i = 0; i < 3; i++)
    {
        memset(innotech_config.sleep[i].schedule_id, 0, 50);
        innotech_config.sleep[i].time_left = 0;  
        innotech_config.sleep[i].onoff = 0;
        memset(innotech_config.sleep[i].timestamp, 0, 64);
        innotech_config.sleep[i].is_running = 0;
    }

    innotech_config.memory = false;

    memcpy(&copy_config, &innotech_config, sizeof(innotech_config_t));
	memcpy(innotech_buf, &innotech_config, sizeof(innotech_config_t));
	innotech_flash_write("innotech", (char *)innotech_buf, INNOTECH_DATA_SIZE);
}

void innotech_config_data_save(void)
{
    memcpy(&copy_config, &innotech_config, sizeof(innotech_config_t));
    memcpy(innotech_buf, &innotech_config, sizeof(innotech_config_t));
	innotech_flash_write("innotech", (char *)innotech_buf, INNOTECH_DATA_SIZE);
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
    
    memset(innotech_buf, 0, INNOTECH_DATA_SIZE);
    innotech_flash_read("innotech", (char *)innotech_buf, INNOTECH_DATA_SIZE);
    
    memset(&innotech_config, 0, sizeof(innotech_config_t));
    memcpy(&innotech_config, innotech_buf, sizeof(innotech_config_t));
    
    memset(&copy_config, 0, sizeof(innotech_config_t));
    memcpy(&copy_config, &innotech_config, sizeof(innotech_config_t));

    for(i = 0; i < 4; i++)
    {
        if (p_flash[i] != p_flag[i])
        {
            innotech_default_device_config();
            break;
        }
    }
}


