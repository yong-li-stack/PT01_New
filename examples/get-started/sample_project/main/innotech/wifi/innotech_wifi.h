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
typedef struct
{
    uint8_t ssid_len;
	uint8_t ssid[32];
    uint8_t pwd_len;
	uint8_t password[64];
} wifi_param_t;

typedef void (*callback)(int);

/* Exported functions ------------------------------------------------------- */
void innotech_wifi_state_report(callback function);
void wifi_init_sta(wifi_param_t wifi);

#ifdef __cplusplus
}
#endif
