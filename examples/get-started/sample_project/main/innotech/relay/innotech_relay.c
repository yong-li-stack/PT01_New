/******************** (C) COPYRIGHT 2023 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/05
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Relay Handle.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/05/16	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "innotech_relay.h"
#include "api_bridge.h"
#include "innotech_config.h"

#define     ON             1
#define     OFF            0

#define		GPIO_OUT_RELAY_ON_PIN  	    38
#define		GPIO_OUT_RELAY_OFF_PIN  	39

void innotech_set_relay_status(uint8_t state)
{
    int gpio_num = GPIO_OUT_RELAY_OFF_PIN;

    if(state == ON)
    {
        gpio_num = GPIO_OUT_RELAY_ON_PIN;
    }
    else if(state == OFF)	
    {
        gpio_num = GPIO_OUT_RELAY_OFF_PIN;
    }

    innotech_hold_gpio_level(gpio_num, 0);
    innotech_set_gpio_level(gpio_num, ON);
    innotech_hold_gpio_level(gpio_num, 1);

    vTaskDelay(50 / portTICK_PERIOD_MS);

    innotech_hold_gpio_level(gpio_num, 0);
    innotech_set_gpio_level(gpio_num, OFF);
    innotech_hold_gpio_level(gpio_num, 1);   
}

/*8void innotech_relay_state_toggle(void)
{
    int gpio_num = GPIO_OUT_RELAY_OFF_PIN;

    if(device_state == ON)
    {
        gpio_num = GPIO_OUT_RELAY_ON_PIN;
    }
    else if(device_state == OFF)	
    {
        gpio_num = GPIO_OUT_RELAY_OFF_PIN;
    }

    innotech_hold_gpio_level(gpio_num, 0);
    innotech_set_gpio_level(gpio_num, ON);
    innotech_hold_gpio_level(gpio_num, 1);

    vTaskDelay(50 / portTICK_PERIOD_MS);

    innotech_hold_gpio_level(gpio_num, 0);
    innotech_set_gpio_level(gpio_num, OFF);
    innotech_hold_gpio_level(gpio_num, 1);
}*/

void innotech_relay_init(void)
{
    innotech_gpio_mode_init(GPIO_OUT_RELAY_ON_PIN, 2, 0, 0, 0);
    innotech_gpio_mode_init(GPIO_OUT_RELAY_OFF_PIN, 2, 0, 0, 0);

    innotech_set_gpio_level(GPIO_OUT_RELAY_ON_PIN, OFF);
    innotech_set_gpio_level(GPIO_OUT_RELAY_OFF_PIN, OFF);    
}

