/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/12
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    API Control File.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/12/20	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#ifndef __API_BRIDGE_H
#define __API_BRIDGE_H

#include "esp_log.h"
#include <stdint.h>
#include <stdbool.h>
#include <esp_err.h>
/* Exported constants --------------------------------------------------------*/

/* Exported macro -----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
esp_err_t innotech_led_i2c_init(void);
esp_err_t innotech_led_i2c_write(uint8_t* data, int len);
void innotech_flash_read(char * key, char* data, size_t data_size);
void innotech_flash_write(char * key, char* data, size_t data_size);
void innotech_flash_init(void);

#endif

