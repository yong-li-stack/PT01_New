/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Electric Energy Manage.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/02/28	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "innotech_meter.h"
#include "api_bridge.h"

#define GPIO_OUTPUT_IO_BL0937B_SEL    42//5
#define GPIO_OUTPUT_PIN_SEL  (GPIO_OUTPUT_IO_BL0937B_SEL)

#define GPIO_INPUT_IO_BL0937B_CF1     41//6     // SEL=0 current; SEL=1 voltage  
#define GPIO_INPUT_IO_BL0937B_CF      40//7     // POWER
#define GPIO_INPUT_PIN_SEL  (GPIO_INPUT_IO_BL0937B_CF1 | GPIO_INPUT_IO_BL0937B_CF)

static int cf_isr_cnt = 0;
static int cf1_isr_cnt = 0;

typedef struct _energy_manage_t{
    double current;
    double voltage;
    double power;
    double consumption;//Total power consumption
}energy_manage_t;

energy_manage_t energy;

double innotech_current_get(void)
{
    return energy.current;
}

double innotech_voltage_get(void)
{
    return energy.voltage;
}

double innotech_power_get(void)
{
    return energy.power;
}

double innotech_consumption_get(void)
{
    return energy.consumption;
}

static void IRAM_ATTR cf_isr_handler(void* arg)
{
    cf_isr_cnt++;
}

static void IRAM_ATTR cf1_isr_handler(void* arg)
{
    cf1_isr_cnt++;
}

static void meter_gpio_isr_init(void)
{
    innotech_gpio_mode_init(GPIO_OUTPUT_PIN_SEL, 2, 0, 0, 0);
    innotech_set_gpio_level(GPIO_OUTPUT_PIN_SEL, 0);

    innotech_gpio_mode_init(GPIO_INPUT_IO_BL0937B_CF, 1, 0, 0, 1);
    innotech_gpio_mode_init(GPIO_INPUT_IO_BL0937B_CF1, 1, 0, 0, 1);
    innotech_gpio_isr_service_init(0);
    innotech_gpio_isr_handler_init(GPIO_INPUT_IO_BL0937B_CF, cf_isr_handler,NULL);
    // innotech_gpio_isr_handler_init(GPIO_INPUT_IO_BL0937B_CF1, cf1_isr_handler,NULL);

}
float vp = 0;
static void device_bsp_timer_cb(void* tmr)
{
    static uint32_t bsp_timer_cnt = 0;        
        
    bsp_timer_cnt++;
    if(bsp_timer_cnt >= 100) //1S
    {
        bsp_timer_cnt = 0; 
        // printf("cf_isr_cnt: %d\n", cf_isr_cnt);
        // printf("cf1_isr_cnt: %d\n", cf1_isr_cnt);
        // voltage
        // energy.voltage = (double)(cf1_isr_cnt-1) * 1.1 / 15397 * 1200510 / 510;           
        // current
        // energy.current = (double)(cf1_isr_cnt-1) * 1.1 / 94638 / 0.5 * 1000;  
        // power
        vp = 94.5 / cf_isr_cnt;
        energy.power = 5.5 * cf_isr_cnt;
        energy.consumption = energy.power / (cf_isr_cnt * 3600000);

        // printf("vol: %f\n", energy.voltage);
        // printf("power: %f\n", energy.power);
        // printf("vp: %f\n", vp);
        // printf("i: %f\n", energy.current);
        cf_isr_cnt = 0;
        cf1_isr_cnt = 0;
    }

}

void innotech_meter_init(void)
{
    meter_gpio_isr_init();
    innotech_timmer_init(device_bsp_timer_cb);
}