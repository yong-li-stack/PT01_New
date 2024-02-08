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
    PERM_WRITENUM=1,
    PERM_WRITESTR=2
}data_permission_e;

typedef enum _mqtt_result_e{     
    RES_MQTT_FAIL = 0,
    RES_MQTT_SUC = 1
}mqtt_result_e;


#define MSG_BUF_LEN_SUB 600
#define MAX_SEND_BUF 2048

//data_permission_e mqtt_json_unpack(char *iot_json, char *get_cmd, char *get_app_topic, char *get_tranid,char *get_data,int *get_data_len);
int mqtt_json_pack(data_permission_e perm_data, char *cmd, char *tranid, char *package_msg);
int mqtt_json_last_will(char *result, char * timestamp, char *package_msg);

#ifdef __cplusplus
}
#endif
