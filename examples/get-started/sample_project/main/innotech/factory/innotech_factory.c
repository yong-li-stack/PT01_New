/******************** (C) COPYRIGHT 2024 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/02
* AUTHOR:			qiang.zhang
* IC:				ESP32C3
* DESCRIPTION:	    Device Factory Handle.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/02/29	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/
#include "innotech_wifi.h"
#include "innotech_config.h"
#include "innotech_factory.h"

extern void esp_restart(void);
void innotech_factory_reset(void)
{
    innotech_default_device_config();
    innotech_wifi_config_reset();        
    esp_restart();
}

void innotech_factory_init(void)
{

}

