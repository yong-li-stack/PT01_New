/******************** (C) COPYRIGHT 2023 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/05
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device button Handle.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/05/16	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include "innotech_button.h"
#include "innotech_relay.h"
#include "innotech_config.h"

//#include "innotech_factory.h"
#include "api_bridge.h"

#define BTN_GPIO_NUM          45

void innotech_button_process(void)
{
    static uint32_t key_count = 0;
    innotech_config_t *innotech_config = (innotech_config_t *)innotech_config_get_handle();
    uint8_t key_state = innotech_read_gpio_level(BTN_GPIO_NUM);

    if(key_state == 0)
    {
        key_count++;
    }
    else if(key_count >= 5 && key_count < 20)
    {
        key_count = 0;
        if(innotech_config->power_switch)
        {
            innotech_config->power_switch = 0;
        }
        else
        {
            innotech_config->power_switch = 1;
        }
        printf("switch: %d\r\n", innotech_config->power_switch);
        innotech_set_relay_status(innotech_config->power_switch);
    }
    else if(key_count >= 500)
    {
        key_count = 0;
        //device_factory_reset();
        //innotech_factroy_led_state_set(0);
    }
    else
    {
        key_count = 0;
    }

    if(key_count >= 500)
    {
        //innotech_factroy_led_state_set(1);
    }
}

void innotech_button_init(void)
{
    innotech_gpio_mode_init(BTN_GPIO_NUM, 1, 0, 0);
}