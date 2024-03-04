/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/01
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Mqtt JSON Protocol.
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

typedef enum _data_permission_e{
    PERM_INVALID=-1,        
    PERM_READ=0,
    PERM_WRITE=1,
}data_permission_e;

data_permission_e mqtt_json_unpack(char *iot_json, char *get_cmd, char *method, char *id, char *version);
void mqtt_json_pack_reply(char *id, char *version, char *package_msg);
int mqtt_json_pack(char *cmd, char *id, char *version, char *package_msg);
int mqtt_json_last_will(char *result, char * timestamp, char *package_msg);
int mqtt_json_location_get(char *id, char *package_msg);

#ifdef __cplusplus
}
#endif
