/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/12
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Lcd Control.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/12/20	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

/* Exported macro -----------------------------------------------------------*/
#define LED_MAX_LUM         100
/* Exported constants --------------------------------------------------------*/


/* Exported functions ------------------------------------------------------- */
void innotech_lcd_init(void);
void innotech_lcd_process(void);
void innotech_lcd_pre_init(void);
bool example_lvgl_lock(int timeout_ms);
void example_lvgl_unlock(void);

#ifdef __cplusplus
}
#endif
