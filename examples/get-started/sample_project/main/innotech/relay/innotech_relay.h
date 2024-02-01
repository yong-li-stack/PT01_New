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
#pragma once
#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
{
#endif

void innotech_relay_init(void);
void innotech_set_relay_status(uint8_t statu);
void innotech_relay_state_save(void);
uint8_t innotech_relay_state_get(void);
void innotech_relay_state_toggle(void);

#ifdef __cplusplus
}
#endif

