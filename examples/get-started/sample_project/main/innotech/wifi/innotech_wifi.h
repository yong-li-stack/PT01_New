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

typedef enum _ENUM_WIFI_CONFIG_{
    WIFI_CONFIG_FAIL  = 0x0,
    WIFI_CONFIG_SUC   = 0x1
}ENUM_WIFI_CONFIG;
typedef struct
{
    uint8_t flag;
    uint8_t ssid_len;
	uint8_t ssid[33];
    uint8_t pwd_len;
	uint8_t password[65];
} wifi_param_t;

typedef struct _mqtt_topic_t{
    char subtopic[64];
    char pubtopic[64];
}mqtt_topic_t;

typedef void (*callback)(int);

/* Exported functions ------------------------------------------------------- */
void innotech_wifi_state_report(callback function);
uint8_t innotech_wifi_config_flag_get(void);
uint8_t innotech_wifi_state_get(void);
void wifi_init_sta(wifi_param_t wifi);
void innotech_wifi_init(void);

#ifdef __cplusplus
}
#endif
