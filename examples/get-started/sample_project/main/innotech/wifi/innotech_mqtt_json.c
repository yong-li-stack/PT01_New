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
#include <stdio.h>
#include <string.h>
#include "cJSON.h"
#include "esp_vfs.h"
#include "innotech_mqtt_json.h"
#include "innotech_config.h"

#if 0
//timer
static void mqtt_json_pack_timer(char *cmd, char *package_msg)
{
    cJSON *timer1 = NULL, *timer2 = NULL, *timer3 = NULL, *timer4 = NULL, *timer5 = NULL;

    if( (strncmp(cmd, "LocalTimer_1", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        timer1 = cJSON_CreateObject();
        cJSON_AddStringToObject(timer1, "ScheduleId", innotech_config->timer[0].schedule_id);
        cJSON_AddNumberToObject(timer1, "Enable", innotech_config->timer[0].enable);
        cJSON_AddNumberToObject(timer1, "IsValid", innotech_config->timer[0].is_valid);
        cJSON_AddStringToObject(timer1, "Timer",innotech_config->timer[0].time);
        cJSON_AddNumberToObject(timer1, "PowerSwitch", innotech_config->timer[0].onoff);
        cJSON_AddStringToObject(timer1, "Repeat", innotech_config->timer[0].repeat);
        cJSON_AddItemToObject(stateJSObject, "LocalTimer_1", timer1);
    }        
    if( (strncmp(cmd, "LocalTimer_2", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        timer2 = cJSON_CreateObject();
        cJSON_AddStringToObject(timer2, "ScheduleId", innotech_config->timer[1].schedule_id);
        cJSON_AddNumberToObject(timer2, "Enable", innotech_config->timer[1].enable);
        cJSON_AddNumberToObject(timer2, "IsValid", innotech_config->timer[1].is_valid);
        cJSON_AddStringToObject(timer2, "Timer",innotech_config->timer[1].time);
        cJSON_AddNumberToObject(timer2, "PowerSwitch", innotech_config->timer[1].onoff);
        cJSON_AddStringToObject(timer2, "Repeat", innotech_config->timer[1].repeat);
        cJSON_AddItemToObject(stateJSObject, "LocalTimer_2", timer2);
    } 
    if( (strncmp(cmd, "LocalTimer_3", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        timer3 = cJSON_CreateObject();
        cJSON_AddStringToObject(timer3, "ScheduleId", innotech_config->timer[2].schedule_id);
        cJSON_AddNumberToObject(timer3, "Enable", innotech_config->timer[2].enable);
        cJSON_AddNumberToObject(timer3, "IsValid", innotech_config->timer[2].is_valid);
        cJSON_AddStringToObject(timer3, "Timer",innotech_config->timer[2].time);
        cJSON_AddNumberToObject(timer3, "PowerSwitch", innotech_config->timer[2].onoff);
        cJSON_AddStringToObject(timer3, "Repeat", innotech_config->timer[2].repeat);
        cJSON_AddItemToObject(stateJSObject, "LocalTimer_3", timer3);
    }
    if( (strncmp(cmd, "LocalTimer_4", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        timer4 = cJSON_CreateObject();
        cJSON_AddStringToObject(timer4, "ScheduleId", innotech_config->timer[3].schedule_id);
        cJSON_AddNumberToObject(timer4, "Enable", innotech_config->timer[3].enable);
        cJSON_AddNumberToObject(timer4, "IsValid", innotech_config->timer[3].is_valid);
        cJSON_AddStringToObject(timer4, "Timer",innotech_config->timer[3].time);
        cJSON_AddNumberToObject(timer4, "PowerSwitch", innotech_config->timer[3].onoff);
        cJSON_AddStringToObject(timer4, "Repeat", innotech_config->timer[3].repeat);
        cJSON_AddItemToObject(stateJSObject, "LocalTimer_4", timer4);
    }
    if( (strncmp(cmd, "LocalTimer_5", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        timer5 = cJSON_CreateObject();
        cJSON_AddStringToObject(timer5, "ScheduleId", innotech_config->timer[4].schedule_id);
        cJSON_AddNumberToObject(timer5, "Enable", innotech_config->timer[4].enable);
        cJSON_AddNumberToObject(timer5, "IsValid", innotech_config->timer[4].is_valid);
        cJSON_AddStringToObject(timer5, "Timer",innotech_config->timer[4].time);
        cJSON_AddNumberToObject(timer5, "PowerSwitch", innotech_config->timer[4].onoff);
        cJSON_AddStringToObject(timer5, "Repeat", innotech_config->timer[4].repeat);
        cJSON_AddItemToObject(stateJSObject, "LocalTimer_5", timer5);
    }
}

//delayClose
static void mqtt_json_pack_count_down(char *cmd, char *package_msg)
{
    cJSON *count_down1 = NULL, *count_down2 = NULL, *count_down3 = NULL;

    if( (strncmp(cmd, "CountDown_1", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        count_down1 = cJSON_CreateObject();
        cJSON_AddStringToObject(count_down1, "ScheduleId", innotech_config->sleep[0].schedule_id);
        cJSON_AddNumberToObject(count_down1, "TimeLeft", innotech_config->sleep[0].time_left);
        cJSON_AddNumberToObject(count_down1, "PowerSwitch", innotech_config->sleep[0].onoff);
        cJSON_AddStringToObject(count_down1, "Timestamp",innotech_config->sleep[0].timestamp);
        cJSON_AddNumberToObject(count_down1, "IsRunning", innotech_config->sleep[0].is_running);
        cJSON_AddItemToObject(stateJSObject, "CountDown_1", count_down1);
    }
    if( (strncmp(cmd, "CountDown_2", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        count_down2 = cJSON_CreateObject();
        cJSON_AddStringToObject(count_down2, "ScheduleId", innotech_config->sleep[1].schedule_id);
        cJSON_AddNumberToObject(count_down2, "TimeLeft", innotech_config->sleep[1].time_left);
        cJSON_AddNumberToObject(count_down2, "PowerSwitch", innotech_config->sleep[1].onoff);
        cJSON_AddStringToObject(count_down2, "Timestamp",innotech_config->sleep[1].timestamp);
        cJSON_AddNumberToObject(count_down2, "IsRunning", innotech_config->sleep[1].is_running);
        cJSON_AddItemToObject(stateJSObject, "CountDown_2", count_down2);
    }
    if( (strncmp(cmd, "CountDown_3", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        count_down3 = cJSON_CreateObject();
        cJSON_AddStringToObject(count_down3, "ScheduleId", innotech_config->sleep[2].schedule_id);
        cJSON_AddNumberToObject(count_down3, "TimeLeft", innotech_config->sleep[2].time_left);
        cJSON_AddNumberToObject(count_down3, "PowerSwitch", innotech_config->sleep[2].onoff);
        cJSON_AddStringToObject(count_down3, "Timestamp",innotech_config->sleep[2].timestamp);
        cJSON_AddNumberToObject(count_down3, "IsRunning", innotech_config->sleep[2].is_running);
        cJSON_AddItemToObject(stateJSObject, "CountDown_3", count_down3);
    }  
}
#endif

int mqtt_json_last_will(char *result, char * timestamp, char *package_msg)
{
    if( (result == NULL) || (package_msg == NULL) )
    {
        printf("mqtt_json_last_will is null\n");
        return -1;
    }

    cJSON *IOTJSObjectmsg = NULL;
    cJSON *stateJSObject = NULL;
    cJSON *reportedObject = NULL;

    char *iot_jsonmsg = NULL;
    
    if((IOTJSObjectmsg = cJSON_CreateObject()) != NULL)
    {
		cJSON_AddItemToObject(IOTJSObjectmsg, "proType", cJSON_CreateNumber(2));			 
        cJSON_AddItemToObject(IOTJSObjectmsg, "state", stateJSObject = cJSON_CreateObject());   
        cJSON_AddItemToObject(stateJSObject, "reported", reportedObject = cJSON_CreateObject());
        cJSON_AddItemToObject(reportedObject, "connected", cJSON_CreateString(result));//select from device configure
        cJSON_AddItemToObject(reportedObject, "connectedTimestamp", cJSON_CreateString(timestamp));
        iot_jsonmsg = cJSON_PrintUnformatted(IOTJSObjectmsg);  
        
        sprintf(package_msg, "%s", iot_jsonmsg);
        printf("\n\nmsg:%s\n\n", package_msg);
        free((void *)iot_jsonmsg);
        cJSON_Delete(IOTJSObjectmsg);
    }
    return 0;
}

static int mqtt_json_state_pack(char *cmd, cJSON *stateJSObject)
{
    innotech_config_t *innotech_config = (innotech_config_t *)innotech_config_get_handle();

    if( (strncmp(cmd, "PowerSwitch", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0))
    {
        cJSON_AddItemToObject(stateJSObject, "PowerSwitch", cJSON_CreateNumber(innotech_config->power_switch));
    }
        
    if( (strncmp(cmd, "ScreenBrightValue", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "ScreenBrightValue", cJSON_CreateNumber(innotech_config->lcd_brightness));
    }
        
    if( (strncmp(cmd, "ScreenSwitch", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "ScreenSwitch", cJSON_CreateNumber(innotech_config->lcd_switch));
    }
        
    if( (strncmp(cmd, "AutoBrightnessSwitch", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "AutoBrightnessSwitch", cJSON_CreateNumber(innotech_config->brightness_switch));
    }
        
    if( (strncmp(cmd, "Memory", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "Memory", cJSON_CreateNumber(innotech_config->memory));
    }
    
    if( (strncmp(cmd, "RealTimeCurrent", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "RealTimeCurrent", cJSON_CreateNumber(0.00));
    }
    
    if( (strncmp(cmd, "RealTimeVoltage", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "RealTimeVoltage", cJSON_CreateNumber(219.60));
    }

    if( (strncmp(cmd, "RealTimePower", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "RealTimePower", cJSON_CreateNumber(0.0));
    }

    if( (strncmp(cmd, "TotalConsumption", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "TotalConsumption", cJSON_CreateNumber(0.0));
    }

    if( (strncmp(cmd, "LineDiameter", strlen(cmd)) == 0) || (strncmp(cmd, "status", strlen(cmd)) == 0) )
    {
        cJSON_AddItemToObject(stateJSObject, "LineDiameter", cJSON_CreateNumber(0.0));
    }
    return 0;
}

static int mqtt_json_sys_pack(char *cmd, cJSON *sysJSObject)
{
    cJSON_AddItemToObject(sysJSObject, "ack", cJSON_CreateNumber(1));
    return 0;
}

///////////////msg body////////////////
int mqtt_json_pack(data_permission_e perm_data, char *cmd, char *tranid, char *package_msg)
{
	cJSON *IOTJSObject = NULL, *stateJSObject = NULL, *sysJSObject = NULL;
	char *iot_json = NULL;

	//pack msg
	if((IOTJSObject = cJSON_CreateObject()) != NULL)
	{
		cJSON_AddItemToObject(IOTJSObject, "id", cJSON_CreateNumber(26));   		 
		cJSON_AddItemToObject(IOTJSObject, "version", cJSON_CreateString("1.0"));		  

		if( (strncmp(cmd, "PowerSwitch", strlen(cmd)) == 0) ||\
			(strncmp(cmd, "ScreenBrightValue", strlen(cmd)) == 0))
		{
			cJSON_AddItemToObject(IOTJSObject, "params", stateJSObject = cJSON_CreateObject());
			mqtt_json_state_pack(cmd, stateJSObject);
		}
		else if(strncmp(cmd, "status", strlen(cmd)) == 0)
		{
			cJSON_AddItemToObject(IOTJSObject, "params", stateJSObject = cJSON_CreateObject());
            cJSON_AddItemToObject(IOTJSObject, "sys", sysJSObject = cJSON_CreateObject());
			mqtt_json_state_pack(cmd, stateJSObject);
            mqtt_json_sys_pack(cmd, sysJSObject);
		}
		iot_json = cJSON_PrintUnformatted(IOTJSObject);  
		sprintf(package_msg, "%s", iot_json);
		printf("pack:%s\n", package_msg);
		free((void *)iot_json);
		cJSON_Delete(IOTJSObject);
	}
    
    return 0;
}

static void mqtt_json_unpack_params(cJSON *paramsObject)
{
    if(paramsObject == NULL)
    {
        printf("unpack_params null\n");
        return;
    }
    cJSON *data_Object;
    innotech_config_t *innotech_config = (innotech_config_t *)innotech_config_get_handle();

    if( (data_Object = cJSON_GetObjectItem(paramsObject, "PowerSwitch")) != NULL )
    {
        innotech_config->power_switch = data_Object->valueint;
        printf("power_switch=%d\r\n", innotech_config->power_switch);
    }
    else if( (data_Object = cJSON_GetObjectItem(paramsObject, "ScreenSwitch")) != NULL )
    {
        innotech_config->lcd_switch = data_Object->valueint;
        printf("lcd_switch=%d\r\n", innotech_config->lcd_switch);
    }
    else if( (data_Object = cJSON_GetObjectItem(paramsObject, "ScreenBrightValue")) != NULL )
    {
        innotech_config->lcd_brightness = data_Object->valueint;
        printf("lcd_brightness=%d\r\n", innotech_config->lcd_brightness);
    }
    else if( (data_Object = cJSON_GetObjectItem(paramsObject, "AutoBrightnessSwitch")) != NULL )
    {
        innotech_config->brightness_switch = data_Object->valueint;
        printf("brightness_switch=%d\r\n", innotech_config->brightness_switch);
    }
    else if( (data_Object = cJSON_GetObjectItem(paramsObject, "LineDiameter")) != NULL )
    {
        innotech_config->line_diameter = data_Object->valueint;
        printf("line_diameter=%d\r\n", innotech_config->line_diameter);
    }
    else if( (data_Object = cJSON_GetObjectItem(paramsObject, "Memory")) != NULL )
    {
        innotech_config->memory = data_Object->valueint;
        printf("memory=%d\r\n", innotech_config->memory);
    }
}

//return -1:fail,0 app read device's status,1 app set device
data_permission_e mqtt_json_unpack(char *iot_json, char *method, char *id, char *version)
{
    if(iot_json == NULL || method == NULL || id == NULL || version == NULL)
    {
        printf("mqtt_json_unpack input error\n");
    }

    data_permission_e ret = PERM_INVALID;
    cJSON *IOTJSObject, *idObject, *methodObject, *versionObject, *paramsObject;

    if((IOTJSObject = cJSON_Parse(iot_json)) != NULL)
    {

        if( (idObject = cJSON_GetObjectItem(IOTJSObject, "id")) != NULL )
        {
            memcpy((void *)id, (void *)idObject->valuestring, strlen(idObject->valuestring)+1);
            printf("DATA=%d %s\r\n", strlen(idObject->valuestring)+1, id);
        }
        else
        {
            printf("mqtt_json_unpack no id\r\n");
        }

        if( (methodObject = cJSON_GetObjectItem(IOTJSObject, "method")) != NULL )
        {
            memcpy((void *)method, (void *)methodObject->valuestring, strlen(methodObject->valuestring)+1);
            printf("DATA=%d %s\r\n", strlen(methodObject->valuestring)+1, method);
        }
        else
        {
            printf("mqtt_json_unpack no method\r\n");
        }

        if( (versionObject = cJSON_GetObjectItem(IOTJSObject, "version")) != NULL )
        {
            memcpy((void *)version, (void *)versionObject->valuestring, strlen(versionObject->valuestring)+1);
            printf("DATA=%d %s\r\n", strlen(versionObject->valuestring)+1, version);
        }
        else
        {
            printf("mqtt_json_unpack no version\r\n");
        }

        if( (paramsObject= cJSON_GetObjectItem(IOTJSObject, "params")) != NULL )
        {
            mqtt_json_unpack_params(paramsObject);
            printf("mqtt_json_unpack params\r\n");
            //cJSON_Delete(paramsObject);
            ret = PERM_WRITE;
        }
        else
        {
            printf("mqtt_json_unpack no data\r\n");
        }

        cJSON_Delete(IOTJSObject);
    }
    return ret;
}

