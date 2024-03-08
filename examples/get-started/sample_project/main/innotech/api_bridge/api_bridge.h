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
typedef void (*interrupt)(void *);
/* Exported functions ------------------------------------------------------- */
esp_err_t innotech_led_i2c_init(void);
esp_err_t innotech_led_i2c_write(uint8_t* data, int len);
void innotech_flash_read(char * key, char* data, size_t data_size);
void innotech_flash_write(char * key, char* data, size_t data_size);
void innotech_flash_init(void);

int innotech_read_gpio_level(int pin);
void innotech_set_gpio_level(int pin, uint32_t level);
void innotech_hold_gpio_level(int pin, uint8_t isEn);
void innotech_gpio_mode_init(int pin, uint8_t mode, uint8_t down, uint8_t up, uint8_t type);
void innotech_gpio_isr_service_init(int flag);
void innotech_gpio_isr_handler_init(int pin, interrupt handler,void *args);


void innotech_initialize_sntp(void);
uint8_t innotech_get_sync_status(void);

uint32_t innotech_get_heap_size(void);

void innotech_timmer_init(interrupt function);

uint8_t innotech_reset_reason_get(void);

#endif

