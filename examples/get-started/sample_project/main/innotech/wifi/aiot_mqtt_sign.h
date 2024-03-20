/**
* @file re_sha.h  Interface to SHA (Secure Hash Standard) functions
*
* Copyright (C) 2010 Creytiv.com
*/

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

int aiotMqttSign(const char *productKey, const char *deviceName, const char *deviceSecret, char clientId[150], char username[65], char password[65]);

#ifdef __cplusplus
}
#endif
