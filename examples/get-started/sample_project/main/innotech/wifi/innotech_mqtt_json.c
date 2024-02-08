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
#if 0
static void mqtt_json_unpack_data(cJSON *jsondata, char *get_data, int *get_data_len)
{
    if( (jsondata == NULL) || (get_data == NULL) || (get_data_len == NULL) )
    {
        Ihoment_printf(IHOMENT_WARNING, "unpack_data null\n");
        return;
    }
    cJSON *valObject;
    valObject = cJSON_GetObjectItem(jsondata, "val");
    memcpy((void *)get_data, (void *)&valObject->valueint, sizeof(valObject->valueint)); //cmd
    *get_data_len = sizeof(valObject->valueint);
    Ihoment_printf(IHOMENT_DEBUG, "unpack data %d, sizeof %d\n", *(int *)get_data, *get_data_len);
    return;
}

static void mqtt_json_unpack_type(cJSON *jsondata, char *get_data)
{
    if( (jsondata == NULL) || (get_data == NULL))
    {
        Ihoment_printf(IHOMENT_WARNING, "unpack_data null\n");
        return;
    }
    cJSON *valObject;
    valObject = cJSON_GetObjectItem(jsondata, "type");
	get_data[0] = valObject->valueint;
    Ihoment_printf(IHOMENT_DEBUG, "unpack type %d\n", *(int *)get_data);
    return;
}

//timer
static void mqtt_json_unpack_timer(cJSON *jsondata, char *get_data, int *get_data_len){
    if(jsondata == NULL || get_data == NULL || get_data_len == NULL){
        Ihoment_printf(IHOMENT_WARNING, "unpack_timer null\n");
        return;
    }
    int i;
    int is_group;
    cJSON *enObject,*timeroffObject,*timerObject,*GroupObject=NULL;
    mqtt_timer_array_t mqtt_timer_array;
    memset(&mqtt_timer_array,0x0,sizeof(mqtt_timer_array_t));
    //enable
    enObject = cJSON_GetObjectItem(jsondata, "enable");
    mqtt_timer_array.enable = enObject->valueint;

        //enable
    //timeroffset
    timeroffObject = cJSON_GetObjectItem(jsondata, "timeOffset");
    mqtt_timer_array.timeOffset = timeroffObject->valueint;

    //timer array
    timerObject = cJSON_GetObjectItem(jsondata, "time");
    int size = cJSON_GetArraySize(timerObject);
    if(size >MQTT_TIMER_MAX_COUNT){  //limit timer count
        Ihoment_printf(IHOMENT_WARNING, "timer limit to %d\n",MQTT_TIMER_MAX_COUNT);
        size=MQTT_TIMER_MAX_COUNT;
    }
    for(i = 0; i < size; i++){
        GroupObject = cJSON_GetObjectItem(jsondata, "group");
        if(GroupObject )
            mqtt_timer_array.extern_timer_array.extern_timer[i].group_index = GroupObject->valueint;
        else{        
            mqtt_timer_array.extern_timer_array.extern_timer[i].group_index = 0;
            Ihoment_printf(IHOMENT_ERROR,"no had is_group member\n");
        }
        cJSON *item = cJSON_GetArrayItem(timerObject, i);
        mqtt_timer_array.mqtt_timer[i].openHour = cJSON_GetObjectItem(item, "openHour")->valueint;
        mqtt_timer_array.mqtt_timer[i].openMin = cJSON_GetObjectItem(item, "openMin")->valueint;
        mqtt_timer_array.mqtt_timer[i].closeHour = cJSON_GetObjectItem(item, "closeHour")->valueint;
        mqtt_timer_array.mqtt_timer[i].closeMin = cJSON_GetObjectItem(item, "closeMin")->valueint;
        if(GroupObject){
            mqtt_timer_array.extern_timer_array.extern_timer[i].repeat = cJSON_GetObjectItem(item, "repeat")->valueint;
            mqtt_timer_array.extern_timer_array.extern_timer[i].enable = cJSON_GetObjectItem(item, "enable")->valueint;
        }else{
            mqtt_timer_array.extern_timer_array.extern_timer[i].repeat = 0;
            mqtt_timer_array.extern_timer_array.extern_timer[i].enable = 0;
        }
        mqtt_timer_array.mqtt_timer_count++;
        cJSON_Delete(item); 
    }
    memcpy((void *)get_data, (void *)&mqtt_timer_array, sizeof(mqtt_timer_array_t)); //cmd
    *get_data_len=sizeof(mqtt_timer_array_t);
    Ihoment_printf(IHOMENT_DEBUG, "unpack timer sizeof %d\n",*get_data_len);
    return;
}

//delayClose
static void mqtt_json_unpack_delayclose( cJSON *jsondata, char *get_data,int *get_data_len){
    if(jsondata == NULL || get_data == NULL || get_data_len == NULL){
        Ihoment_printf(IHOMENT_WARNING, "unpack_delayclose null\n");
        return;
    }
    cJSON *valObject;
    mqtt_delay_close_t mqtt_delay_close;
    mqtt_delay_close.enable= cJSON_GetObjectItem(jsondata, "enable")->valueint;
    mqtt_delay_close.minutes= cJSON_GetObjectItem(jsondata, "minutes")->valueint;
    mqtt_delay_close.leftminutes=mqtt_delay_close.minutes;
    memcpy((void *)get_data, (void *)&mqtt_delay_close, sizeof(mqtt_delay_close_t)); //cmd
    *get_data_len=sizeof(mqtt_delay_close_t);
    Ihoment_printf(IHOMENT_DEBUG, "unpack delayclose ,sizeof %d\n",*get_data_len);
    return;
}

//return -1:fail,0 app read device's status,1 app set device
data_permission_e mqtt_json_unpack(char *iot_json, char *get_cmd, char *get_app_topic, char *get_tranid, char *get_data, int *get_data_len)
{
    if( (iot_json == NULL) || (get_cmd == NULL) || (get_tranid == NULL) || (get_data == NULL) || (get_data_len == NULL) )
    {
        Ihoment_printf(IHOMENT_WARNING, "mqtt_json_unpack input error\n");
    }
    cJSON_Hooks memoryHook;
    memoryHook.malloc_fn = pvPortMalloc;
    memoryHook.free_fn = vPortFree;
    cJSON_InitHooks(&memoryHook);
    data_permission_e req_type=PERM_INVALID;

    cJSON *IOTJSObject, *msgObject, *cmdObject, *typeObject, *tranidObject, *dataObject, *topicObject;
    if((IOTJSObject = cJSON_Parse(iot_json)) != NULL) 
    {
        msgObject = cJSON_GetObjectItem(IOTJSObject, "msg");
        tranidObject= cJSON_GetObjectItem(msgObject, "transaction");
        topicObject = cJSON_GetObjectItem(msgObject, "accountTopic");
        cmdObject = cJSON_GetObjectItem(msgObject, "cmd");
        typeObject = cJSON_GetObjectItem(msgObject, "type");
        
        if(cmdObject && typeObject && tranidObject && msgObject) 
        {
            memcpy((void *)get_cmd, (void *)cmdObject->valuestring, strlen(cmdObject->valuestring)+1); //cmd
            memcpy((void *)get_tranid, (void *)tranidObject->valuestring, strlen(tranidObject->valuestring)+1); //tranid
            if(topicObject)
                memcpy((void *)get_app_topic, (void *)topicObject->valuestring, strlen(topicObject->valuestring)+1); //topic
            else
                memset((void *)get_app_topic, 0, 2);
            
            if(typeObject->valueint == 0)//no get data
            {      
                req_type = PERM_READ;
            }
            else if(typeObject->valueint == 1)//get data
            { 
                dataObject= cJSON_GetObjectItem(msgObject, "data");
                if(dataObject)
                {
                    req_type = PERM_WRITESTR;
                    //get data
                    if( (strncmp(get_cmd, "turn", strlen(get_cmd)) == 0) || \
                        (strncmp(get_cmd, "brightness", strlen(get_cmd)) == 0))
                    {
                        mqtt_json_unpack_data(dataObject, get_data, get_data_len);
                        req_type = PERM_WRITENUM;
                    }
                    else if( strncmp(get_cmd, "colorwc", strlen(get_cmd)) == 0 )
                    {
                        mqtt_json_unpack_colorwc(dataObject, get_data, get_data_len);
                    }
                    else if( strncmp(get_cmd, "ptReal", strlen(get_cmd)) == 0 )
                    {
                        mqtt_json_unpack_pt(dataObject, get_data,get_data_len);
                    }
					else if( strncmp(get_cmd, "dev_info", strlen(get_cmd)) == 0 )
                    {
                        mqtt_json_unpack_type(dataObject,get_data);
                    }
                }
            }
        }       
        cJSON_Delete(IOTJSObject);        
    }
    return req_type;
}
#endif
