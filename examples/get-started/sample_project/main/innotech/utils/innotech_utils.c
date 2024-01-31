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
#include <mbedtls/sha256.h>
#include <mbedtls/aes.h>
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
    mbedtls_aes_crypt_cbc(&aes_Key, MBEDTLS_AES_DECRYPT, len, iv, input, output);
    mbedtls_aes_free(&aes_Key);
}