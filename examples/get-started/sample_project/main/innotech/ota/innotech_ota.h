/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/01
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    OTA HANDLE.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/04/07	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

/* Exported macro -----------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void innotech_ota_start(char *iot_json);

#ifdef __cplusplus
}
#endif
