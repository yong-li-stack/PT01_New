/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2024/01
* AUTHOR:			qiang.zhang
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2024/01/24	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <mbedtls/sha256.h>
#include <mbedtls/aes.h>
#include "esp_rom_md5.h"
#include "innotech_utils.h"

void hex_array_to_string(unsigned char* hexArray, int length, unsigned char* output) 
{
    for (int i = 0; i < length; i++) 
    {
        output[i] = (char)hexArray[i]; 
    }
    output[length] = '\0'; 
    //printf("output: %s length: %d\r\n", output, strlen((char *)output));
}

void hex_string_to_array(const char *hex_string, unsigned char *hex_array, size_t array_length) 
{
    size_t str_length = strlen(hex_string);
    if ((str_length % 2) != 0 || (str_length / 2) != array_length) 
    {
        printf("Error: Invalid input length\n");
        return;
    }

    for (size_t i = 0; i < str_length; i += 2) 
    {
        char hex_byte[3];
        hex_byte[0] = hex_string[i];
        hex_byte[1] = hex_string[i + 1];
        hex_byte[2] = '\0';

        hex_array[i / 2] = (unsigned char)strtol(hex_byte, NULL, 16);
    }
}

void sha256_encrypt(unsigned char *input, size_t len, unsigned char *output)
{
    mbedtls_sha256_context context;

    mbedtls_sha256_init(&context);
    mbedtls_sha256_starts(&context, 0);//0 --- SHA256,  1 --- SHA244
    mbedtls_sha256_update(&context, input, len);
    mbedtls_sha256_finish(&context, output);
    mbedtls_sha256_free(&context);

    
}

void aes128_cbc_encrypt(unsigned char *key, unsigned char *iv, unsigned char *input, size_t len, unsigned char *output)
{
    mbedtls_aes_context aes_Key;
    unsigned char iv_copy[16]={0};

    memcpy((char *)iv_copy, (char *)iv, 16);

    mbedtls_aes_init(&aes_Key);
    mbedtls_aes_setkey_enc(&aes_Key, key, 128);
    mbedtls_aes_crypt_cbc(&aes_Key, MBEDTLS_AES_ENCRYPT, len, iv_copy, input, output);
    mbedtls_aes_free(&aes_Key);
}

void aes128_cbc_decrypt(unsigned char *key, unsigned char *iv, unsigned char *input, size_t len, unsigned char *output)
{
    mbedtls_aes_context aes_Key;
    unsigned char iv_copy[16]={0};

    memcpy((char *)iv_copy, (char *)iv, 16);
    
    mbedtls_aes_init(&aes_Key);
    mbedtls_aes_setkey_dec(&aes_Key, key, 128);
    mbedtls_aes_crypt_cbc(&aes_Key, MBEDTLS_AES_DECRYPT, len, iv_copy, input, output);
    mbedtls_aes_free(&aes_Key);
}

void md5_compute(unsigned char *input, size_t len, unsigned char *output)
{   
    md5_context_t md5_ctx;
    unsigned char digest[33];

    esp_rom_md5_init(&md5_ctx);
    esp_rom_md5_update(&md5_ctx, input, len);
    esp_rom_md5_final(digest, &md5_ctx);

    for (int i = 0; i < 16; ++i) 
    {
        sprintf((char *)&output[i * 2], "%02x", (unsigned int)digest[i]);
    }
}

void convert_to_lower(char *str, char* output) 
{
    for (int i = 0; i < strlen(str); i++) 
    {
        output[i] = tolower(str[i]);
    }
}