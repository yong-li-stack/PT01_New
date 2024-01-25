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
#include <openssl/sha.h>
#include <openssl/aes.h>
#include "innotech_utils.h"

void hex_array_to_string(unsigned char* hexArray, int length, unsigned char* output) 
{
    for (int i = 0; i < length; i++) 
    {
        sprintf(output + (i * 2), "%02x", hexArray[i]);
    }
    output[length * 2] = '\0';
}

void sha256_encrypt(unsigned char *input, size_t len, unsigned char *output)
{
    SHA256_CTX context;
    SHA256_Init(&context);
    SHA256_Update(&context, input, len);
    SHA256_Final(output, &context);
}

void aes128_cbc_encrypt(unsigned char *key, cunsigned char *iv, unsigned char *input, size_t len, unsigned char *output)
{
    AES_KEY aesKey;
    AES_set_encrypt_key(key, 128, &aesKey);
    AES_cbc_encrypt(input, output, len, &aesKey, iv, AES_ENCRYPT);
}

