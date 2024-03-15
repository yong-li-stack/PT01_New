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

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

/* Exported macro -----------------------------------------------------------*/
#define LED_MAX_LUM         100
/* Exported constants --------------------------------------------------------*/


/* Exported functions ------------------------------------------------------- */
void hex_array_to_string(unsigned char *hexArray, int length, unsigned char *output);
void sha256_encrypt(unsigned char *input, size_t len, unsigned char *output);
void aes128_cbc_encrypt(unsigned char *key, unsigned char *iv, unsigned char *input, size_t len, unsigned char *output);
void aes128_cbc_decrypt(unsigned char *key, unsigned char *iv, unsigned char *input, size_t len, unsigned char *output);
void md5_compute(unsigned char *input, size_t len, unsigned char *output);

#ifdef __cplusplus
}
#endif
