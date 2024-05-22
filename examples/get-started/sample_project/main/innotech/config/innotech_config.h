/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2021/11
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Device Config Info.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2021/11/24	    qiang.zhang		First release
*
*____________________________________________________________________________
*****************************************************************************/

#pragma once
#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
{
#endif

/* Exported macro -----------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/

typedef struct _innotech_config_t
{
    uint8_t flash_init[4];
    bool plug_power;
    bool lcd_power;
    uint8_t lcd_brightness;
} innotech_config_t;


/* Exported functions ------------------------------------------------------- */
uint8_t innotech_config_check(void);
void innotech_config_data_save(void);
void* innotech_config_get_handle(void);
void innotech_config_init(void);
void innotech_default_device_config(void);

#ifdef __cplusplus
}
#endif
