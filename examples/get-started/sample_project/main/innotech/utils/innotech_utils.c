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
#include <string.h>
#include <mbedtls/sha256.h>
#include <mbedtls/aes.h>
#include "innotech_utils.h"

void hex_array_to_string(unsigned char* hexArray, int length, unsigned char* output) 
{
    for (int i = 0; i < length; i++) 
    {
        sprintf((char *)output + (i * 2), "%02x", hexArray[i]);
    }
    output[length * 2] = '\0';
}

void sha256_encrypt(unsigned char *input, size_t len, unsigned char *output)
{
    mbedtls_sha256_context context;
    mbedtls_sha256_init(&context);
    mbedtls_sha256_starts(&context, false);
    mbedtls_sha256_update(&context, input, len);
    mbedtls_sha256_finish(&context, output);
    mbedtls_sha256_free(&context);
}

void aes128_cbc_encrypt(unsigned char *key, unsigned char *iv, unsigned char *input, size_t len, unsigned char *output)
{
    mbedtls_aes_context aesKey;
    mbedtls_aes_setkey_enc(&aesKey, key, 128);
    mbedtls_aes_crypt_cbc(&aesKey, MBEDTLS_AES_ENCRYPT, len, iv, input, output);
    mbedtls_aes_free(&aesKey);
}

