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
#pragma once
#ifdef __cplusplus
extern "C"
{
#endif

void innotech_meter_init(void);
double innotech_current_get(void);
double innotech_voltage_get(void);
double innotech_power_get(void);
double innotech_consumption_get(void);

#ifdef __cplusplus
}
#endif

