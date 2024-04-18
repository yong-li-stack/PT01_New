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
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "esp_system.h"

#include "esp_timer.h"
#include "esp_log.h"
#include "innotech_meter.h"
#include "innotech_relay.h"
#include "innotech_config.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "innotech_factory.h"
#include "api_bridge.h"
#include "hal/gpio_ll.h"

#define ARRAY_SIZE 5
#define GPIO_OUTPUT_IO_BL0937B_SEL    42//5
#define GPIO_OUTPUT_PIN_SEL  (GPIO_OUTPUT_IO_BL0937B_SEL)

#define GPIO_INPUT_IO_BL0937B_CF1     41//6     // SEL=0 current; SEL=1 voltage  
#define GPIO_INPUT_IO_BL0937B_CF      40//7     // POWER
#define GPIO_INPUT_PIN_SEL  (GPIO_INPUT_IO_BL0937B_CF1 | GPIO_INPUT_IO_BL0937B_CF)



// static uint32_t bsp_timer_cnt = 0;    
// static double consumption = 0;

volatile DRAM_ATTR float _current_multiplier; // Unit: us/A
volatile DRAM_ATTR float _voltage_multiplier; // Unit: us/V
volatile DRAM_ATTR float _power_multiplier;   // Unit: us/W

volatile DRAM_ATTR uint64_t _last_cf_interrupt = 0;
volatile DRAM_ATTR uint64_t _last_cf1_interrupt = 0;
volatile DRAM_ATTR uint64_t _first_cf1_interrupt = 0;

DRAM_ATTR float _current_resistor = R_CURRENT;
DRAM_ATTR float _voltage_resistor = R_VOLTAGE_BL0;
DRAM_ATTR float _vref = V_REF_BL0;

DRAM_ATTR uint8_t _current_mode = 0;
volatile DRAM_ATTR uint8_t _mode;
static DRAM_ATTR uint8_t _setpin_io;

DRAM_ATTR uint32_t _pulse_timeout = PULSE_TIMEOUT;    //Unit: us
volatile DRAM_ATTR uint32_t _voltage_pulse_width = 0; //Unit: us
volatile DRAM_ATTR uint32_t _current_pulse_width = 0; //Unit: us
volatile DRAM_ATTR uint32_t _power_pulse_width = 0;   //Unit: us
volatile DRAM_ATTR uint32_t _pulse_count = 0;

DRAM_ATTR float _current = 0;
DRAM_ATTR float _voltage = 0;
DRAM_ATTR float _power = 0;
DRAM_ATTR float _consumption = 0;
DRAM_ATTR float consumption = 0;
    

static int mid_power = 0;
typedef struct _energy_manage_t{
    double current;
    double voltage;
    double power;
    double consumption;//Total power consumption
}energy_manage_t;

energy_manage_t energy;

static DRAM_ATTR int power_cnt_num[40] = {0};
static DRAM_ATTR int power_factory_num[40] = {0};
static DRAM_ATTR int vol_cnt_num[40] = {0};
static DRAM_ATTR int vol_factory_num[40] = {0};

void IRAM_ATTR reset_energe(void)
{
    _pulse_count = 0;
}

static void IRAM_ATTR bl0937_cf_isr_handler(void* arg)
{
    uint64_t now = esp_timer_get_time();
    _power_pulse_width = now - _last_cf_interrupt;
    _last_cf_interrupt = now;
    _pulse_count++;
}

static void IRAM_ATTR bl0937_cf1_isr_handler(void* arg)
{

    uint64_t now = esp_timer_get_time();
    if((now - _first_cf1_interrupt) > _pulse_timeout){
 
        uint32_t pulse_width;

        if(_last_cf1_interrupt == _first_cf1_interrupt){
            pulse_width = 0;
        }else{
            pulse_width = now - _last_cf1_interrupt;
        }

         if (_mode == _current_mode) {
            _current_pulse_width = pulse_width;
        } else {
            _voltage_pulse_width = pulse_width;
        }

        _mode = 1 - _mode;
        gpio_ll_set_level(&GPIO,_setpin_io , _mode);
        _first_cf1_interrupt = now;

    }
    _last_cf1_interrupt = now;
}

static void IRAM_ATTR _calculateDefaultMultipliers() {
 
    _power_multiplier =   (  50850000.0 * _vref * _vref * _voltage_resistor / _current_resistor / 48.0 / F_OSC_BL0) / 1.1371681416f;  //15102450
    _voltage_multiplier = ( 221380000.0 * _vref * _voltage_resistor /  2.0 / F_OSC_BL0) / 1.0474137931f; //221384120,171674
    _current_multiplier = ( 531500000.0 * _vref / _current_resistor / 24.0 / F_OSC_BL0) / 1.166666f; // 

}

void innotech_meter_init(void)
{

    _voltage_resistor = 1800;
    _current_resistor = 0.0005;
    _current_mode = 0;
    _vref = V_REF_BL0;
    _setpin_io = GPIO_OUTPUT_IO_BL0937B_SEL;

    gpio_intr_disable(GPIO_INPUT_IO_BL0937B_CF);
    gpio_intr_disable(GPIO_INPUT_IO_BL0937B_CF1);
     
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (1ULL << GPIO_OUTPUT_IO_BL0937B_SEL);
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);

    //interrupt of rising edge
    io_conf.intr_type = GPIO_INTR_POSEDGE;
    io_conf.pin_bit_mask = ((1ULL<<GPIO_INPUT_IO_BL0937B_CF1) | (1ULL<<GPIO_INPUT_IO_BL0937B_CF));
    io_conf.mode = GPIO_MODE_INPUT;
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    gpio_install_isr_service(ESP_INTR_FLAG_IRAM);
    gpio_isr_handler_add(GPIO_INPUT_IO_BL0937B_CF, bl0937_cf_isr_handler, NULL);
    gpio_isr_handler_add(GPIO_INPUT_IO_BL0937B_CF1, bl0937_cf1_isr_handler, NULL);

    _calculateDefaultMultipliers();
    _mode = _current_mode;
    innotech_flash_read("fix_vol_num", (char *)&fix_vol_num, sizeof(double));
    innotech_flash_read("fix_num", (char *)&fix_num, sizeof(double));
    innotech_buzzer_pwm_init();

    gpio_set_level(GPIO_OUTPUT_IO_BL0937B_SEL,_mode);

    gpio_intr_enable(GPIO_INPUT_IO_BL0937B_CF);
    gpio_intr_enable(GPIO_INPUT_IO_BL0937B_CF1);
}

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

void IRAM_ATTR bl0937_setMode(bl0937_mode_t mode) {
    _mode = (mode == MODE_CURRENT) ? _current_mode : 1 - _current_mode;
    gpio_set_level(_setpin_io, _mode);
    
    _last_cf1_interrupt = _first_cf1_interrupt = esp_timer_get_time();
   
}

bl0937_mode_t IRAM_ATTR bl0937_getMode() {
    return (_mode == _current_mode) ? MODE_CURRENT : MODE_VOLTAGE;
}

bl0937_mode_t IRAM_ATTR bl0937_toggleMode() {
    bl0937_mode_t new_mode = bl0937_getMode() == MODE_CURRENT ? MODE_VOLTAGE : MODE_CURRENT;
    bl0937_setMode(new_mode);
    return new_mode;
}

float IRAM_ATTR bl0937_getEnergy() {

    return _pulse_count * _power_multiplier / 1000000.;
}

void IRAM_ATTR bl0937_checkCFSignal() {
    if ((esp_timer_get_time() - _last_cf_interrupt) > _pulse_timeout) 
        _power_pulse_width = 0;
}

void IRAM_ATTR bl0937_checkCF1Signal() {
    if ((esp_timer_get_time() - _last_cf1_interrupt) > _pulse_timeout) {
        if (_mode == _current_mode) {
            _current_pulse_width = 0;
        } else {
            _voltage_pulse_width = 0;
        }
        bl0937_toggleMode();
    }
}

float IRAM_ATTR bl0937_getVoltage() {
    bl0937_checkCF1Signal();
    
    _voltage = (_voltage_pulse_width > 0) ? _voltage_multiplier / _voltage_pulse_width : 0;
    return _voltage;
}

void bl0937_multiplier_init()
{
    _calculateDefaultMultipliers();
}

void IRAM_ATTR bl0937_expectedVoltage(float value) {
    if (_voltage == 0) bl0937_getVoltage();
    if (_voltage > 0) _voltage_multiplier *= ((float) value / _voltage);
}

void IRAM_ATTR bl0937_expectedCurrent(float value) {
    if (_current == 0) bl0937_getCurrent();
    if (_current > 0) _current_multiplier *= (value / _current);
}

void IRAM_ATTR bl0937_expectedActivePower(float value) {
    if (_power == 0) bl0937_getActivePower();
    if (_power > 0) _power_multiplier *= ((float) value / _power);
}


float IRAM_ATTR bl0937_getActivePower() {

    bl0937_checkCFSignal();

    _power = (_power_pulse_width > 0) ? _power_multiplier / _power_pulse_width : 0;
    return _power;
}

float IRAM_ATTR bl0937_getCurrent() {

    // Power measurements are more sensitive to switch offs,
    // so we first check if power is 0 to set _current to 0 too

    bl0937_getActivePower();

    if (_power == 0) {
         _current_pulse_width = 0;

    } else {
         bl0937_checkCF1Signal();
    }
    _current = (_current_pulse_width > 0) ? _current_multiplier / _current_pulse_width  : 0;
    return _current;

}

int power_always_callback()
{
    int max_count = 0; 
    int max_num = power_cnt_num[0];
    int count = 0; 
    int i, j;
 
    for (i = 0; i < 40; i++) {
        count = 0;
        for (j = 0; j < 40; j++) {
            if (power_cnt_num[i] == power_cnt_num[j]) {
                count++; 
            }
        }
        if (count > max_count) {
            max_count = count;
            max_num = power_cnt_num[i];
        }
    }
    return max_num;
}

int power_factory_callback()
{
    int max_count = 0; 
    int max_num = power_factory_num[0]; 
    int count = 0;
    int i, j;
 
    for (i = 0; i < 40; i++) {
        count = 0;
        for (j = 0; j < 40; j++) {
            if (power_factory_num[i] == power_factory_num[j]) {
                count++; 
            }
        }
        if (count > max_count) {
            max_count = count;
            max_num = power_factory_num[i];
        }
    }
    return max_num;
}

int vol_factory_callback()
{
    int max_count = 0; 
    int max_num = vol_factory_num[0];
    int count = 0;
    int i, j;
 

    for (i = 0; i < 40; i++) {
        count = 0; 
        for (j = 0; j < 40; j++) {
            if (vol_factory_num[i] == vol_factory_num[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_num = vol_factory_num[i];
        }
    }
    return max_num;
}

int vol_always_callback()
{
    int max_count = 0; 
    int max_num = vol_cnt_num[0]; 
    int count = 0; 
    int i, j;
 
    for (i = 0; i < 40; i++) {
        count = 0; 
        for (j = 0; j < 40; j++) {
            if (vol_cnt_num[i] == vol_cnt_num[j]) {
                count++; 
            }
        }
        if (count > max_count) {
            max_count = count;
            max_num = vol_cnt_num[i];
        }
    }
    return max_num;
}

int fix_power_factory(void)
{
    static int power_factory_flag = 0;
    power_factory_num[power_factory_flag++] = (int)bl0937_getActivePower();
    int power_factory_max = power_factory_callback();
    power_factory_flag = power_factory_flag % 40;
    return power_factory_max;
}

int fix_vol_factory(void)
{
    static int vol_factory_flag = 0;
    int factory_vol_temp = (int)bl0937_getVoltage();
    // if(factory_vol_temp > 170 && factory_vol_temp < 190)
    // {
        vol_factory_num[vol_factory_flag++] = factory_vol_temp;
    // }
    int vol_factory_max = vol_factory_callback();
    vol_factory_flag = vol_factory_flag % 40;
    return vol_factory_max;
}

void innotech_meter_process(void)
{
    static int queue_cnt = 0;
    static int pre_vol = 0;
    static int power_flag = 0;
    static int vol_flag = 0;
    static int vol_temp = 0;

    if((queue_cnt % 10) == 0)
    {
        power_cnt_num[power_flag++] = (int)bl0937_getActivePower();
        vol_temp = (int)bl0937_getVoltage();
        vol_cnt_num[vol_flag++] = vol_temp;
        power_flag = power_flag % 40;
        vol_flag = vol_flag % 40;
    }
    if(queue_cnt == 50)
    {
        consumption += energy.power / 1000 / 3600;
        if(consumption >= 0.5)
        {
            energy.consumption += consumption;
            consumption = 0;
        }
        if(innotech_factory_get() == 1)
        {
            pre_vol = vol_always_callback() * 5.5;
            mid_power = (float)power_always_callback() * 6.5;
        }else
        {
            pre_vol = vol_always_callback() * fix_vol_num;
            mid_power = (float)power_always_callback() * fix_num;
        }
        
        // printf("fix_num    =========== %f   fix_vol_num == %f\n",fix_num,fix_vol_num);
        if(abs(pre_vol - energy.voltage) > 3 && pre_vol != 0)
        {
            energy.voltage = pre_vol;
        }
        if(abs(mid_power - energy.power) > 3)
        {
            energy.power = mid_power;
        }
        queue_cnt = 0;
        if(pre_vol != 0)
        {
            energy.current = energy.power / energy.voltage;
        }
        //printf("pre_vol = %f  energy.power== %f current_ = %f\n",energy.voltage,energy.power,energy.current);
    } 
    queue_cnt ++;
}

void buzzer_timer(int time_buzzer)
{
    for(int i = 0;i < time_buzzer;i++)
    {
        innotech_buzzer_pwm_write(4095);
        vTaskDelay(500 / portTICK_PERIOD_MS);
        innotech_buzzer_pwm_write(0);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}

void innotech_overload_buzzer(void)
{
    innotech_config_t *innotech_config_buzzer = (innotech_config_t *)innotech_config_get_handle();
    int power = (int)innotech_power_get();
    if(innotech_config_buzzer->line_diameter == 1.5)
    {
        //
        if(power > 4000 && power <= 4400)
        {
            buzzer_timer(12);
            innotech_set_relay_status(0);
        }else if(power > 4400 && power <= 4800)
        {
            buzzer_timer(6);
            innotech_set_relay_status(0);
        }else if(power > 4800)
        {
            buzzer_timer(3);
            innotech_set_relay_status(0);
        }
    }else if(innotech_config_buzzer->line_diameter == 2.5)
    {
        if(power > 6250 && power <= 6875)
        {
            buzzer_timer(12);
            innotech_set_relay_status(0);
        }else if(power > 6875 && power <= 7500)
        {
            buzzer_timer(6);
            innotech_set_relay_status(0);
        }else if(power > 7500)
        {
            buzzer_timer(3);
            innotech_set_relay_status(0);
        }
    }else if(innotech_config_buzzer->line_diameter == 4)
    {
        if(power > 8000 && power <= 8800)
        {
            buzzer_timer(12);
            innotech_set_relay_status(0);
        }else if(power > 8800 && power <= 9600)
        {
            buzzer_timer(6);
            innotech_set_relay_status(0);
        }else if(power > 9600)
        {
            buzzer_timer(3);
            innotech_set_relay_status(0);
        }
    }
}


// float IRAM_ATTR bl0937_getApparentPower() {
//     float current = bl0937_getCurrent();
//     float voltage = bl0937_getVoltage();
//     return voltage * current;
// }

// float IRAM_ATTR bl0937_getPowerFactor() {
//     float active = bl0937_getActivePower();
//     float apparent = bl0937_getApparentPower();
//     if (active > apparent) return 1;
//     if (apparent == 0) return 0;
//     return (float) active / apparent;
// }