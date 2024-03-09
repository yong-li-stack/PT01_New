/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Network Time Synchronization.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/02/27	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#pragma once
#ifdef __cplusplus
extern "C"
{
#endif
/* Exported macro -----------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void innotech_rtc_init(void);
struct tm innotech_time_get(void);
#ifdef __cplusplus
}
#endif

