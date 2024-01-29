/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/01
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    WiFi Connection.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/01/20	    qiang.zhang		First release
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
void wifi_init_sta(uint8_t *wifi_ssid, uint8_t *wifi_password);

#ifdef __cplusplus
}
#endif
