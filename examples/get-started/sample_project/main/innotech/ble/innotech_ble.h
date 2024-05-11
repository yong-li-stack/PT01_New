/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/12
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    BLE communication.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/12/20	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

/* Exported macro -----------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
enum
{
    IDX_SVC,
    IDX_CHAR_A,
    IDX_CHAR_VAL_A,

    IDX_CHAR_B,
    IDX_CHAR_VAL_B,

    IDX_CHAR_C,
    IDX_CHAR_VAL_C,
    IDX_CHAR_CFG_C,

    IDX_CHAR_D,
    IDX_CHAR_VAL_D,

    IDX_CHAR_E,
    IDX_CHAR_VAL_E,
    IDX_CHAR_CFG_E,

    HRS_IDX_NB,
};
/* Exported functions ------------------------------------------------------- */
void innotech_ble_init(void);
uint8_t innotech_pre_wifi(void);
void innotech_ble_connect_timeout(void);

#ifdef __cplusplus
}
#endif
