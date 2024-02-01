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
#pragma once
#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
{
#endif

void innotech_button_init(void);
void innotech_button_process(void);

#ifdef __cplusplus
}
#endif
