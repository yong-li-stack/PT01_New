/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Network Weather Get.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/03/06	    qiang.zhang		First release
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
typedef struct _location_t{
    int city_id;
    double latitude;
    double longitude;
}location_t;

typedef enum {
    air_item_pm2p5  = 0x00,
    air_item_aqi,
    air_item_level,
    air_item_pm10,
    air_item_no2,
    air_item_so2,
    air_item_co,
} ui_air_item_t;

typedef struct {
    char *describe;
    char *temp_range;
    char *icon_code;
} weather_daily_info_t;

typedef struct {
    char *temp;
} weather_hourly_info_t;

typedef struct {
    char temp;
    char icon_code;
    char humid;
    char *describe;
} weather_info_t;

typedef struct {
    char *aqi;
    char *level;
    char *co;
    char *no2;
    char *o3;
    char *pm2p5;
    char *pm10;
    char *so2;
} air_info_t;

/* Exported functions ------------------------------------------------------- */
void innotech_location_set(location_t location);
void innotech_weather_init(void);

#ifdef __cplusplus
}
#endif

