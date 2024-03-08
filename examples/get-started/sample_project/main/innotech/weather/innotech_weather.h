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

typedef struct _weather_t{
    char temp_max;
    char temp_min;
    char icon_code;
    char humid;
}weather_t;
/* Exported functions ------------------------------------------------------- */
void innotech_location_set(location_t location);
weather_t innotech_weather_info_get(void);
void innotech_weather_init(void);

#ifdef __cplusplus
}
#endif

