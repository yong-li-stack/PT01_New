/******************** (C) COPYRIGHT 2021 INNOTECH **************************
* COMPANY:			INNOTECH
* DATE:				2023/12
* AUTHOR:			qiang.zhang
* IC:				ESP32S3
* DESCRIPTION:	    Lcd Control.
*____________________________________________________________________________
* REVISION  Date		    User            Description
* 1.0		2023/12/20	    qiang.zhang		First release
*
*____________________________________________________________________________

*****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#include "api_bridge.h"
#include "innotech_lcd.h"

#include "driver/i2c.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_io_additions.h"
#include "esp_io_expander_tca9554.h"

#include "esp_lcd_st7701.h"

#define TEST_LCD_H_RES              (480)
#define TEST_LCD_V_RES              (480)
#define TEST_LCD_BIT_PER_PIXEL      (18)
#define TEST_RGB_BIT_PER_PIXEL      (16)
#define TEST_RGB_DATA_WIDTH         (16)

#define TEST_LCD_IO_RGB_DISP        (GPIO_NUM_NC)
#define TEST_LCD_IO_RGB_VSYNC       (GPIO_NUM_17)
#define TEST_LCD_IO_RGB_HSYNC       (GPIO_NUM_0)
#define TEST_LCD_IO_RGB_DE          (GPIO_NUM_45)
#define TEST_LCD_IO_RGB_PCLK        (GPIO_NUM_18)
#define TEST_LCD_IO_RGB_DATA0       (GPIO_NUM_4) //R3
#define TEST_LCD_IO_RGB_DATA1       (GPIO_NUM_13) //R4
#define TEST_LCD_IO_RGB_DATA2       (GPIO_NUM_1) //R5
#define TEST_LCD_IO_RGB_DATA3       (GPIO_NUM_12) //R6
#define TEST_LCD_IO_RGB_DATA4       (GPIO_NUM_2) //R7
#define TEST_LCD_IO_RGB_DATA5       (GPIO_NUM_11) //G2
#define TEST_LCD_IO_RGB_DATA6       (GPIO_NUM_42) //G3
#define TEST_LCD_IO_RGB_DATA7       (GPIO_NUM_10) //G4
#define TEST_LCD_IO_RGB_DATA8       (GPIO_NUM_41) //G5
#define TEST_LCD_IO_RGB_DATA9       (GPIO_NUM_9) //G6
#define TEST_LCD_IO_RGB_DATA10      (GPIO_NUM_40) //G7
#define TEST_LCD_IO_RGB_DATA11      (GPIO_NUM_46) //B3
#define TEST_LCD_IO_RGB_DATA12      (GPIO_NUM_39) //B4
#define TEST_LCD_IO_RGB_DATA13      (GPIO_NUM_3) //B5
#define TEST_LCD_IO_RGB_DATA14      (GPIO_NUM_38)  //B6
#define TEST_LCD_IO_RGB_DATA15      (GPIO_NUM_8) //B7

#define TEST_LCD_IO_RST             (GPIO_NUM_6)

// #define TEST_EXPANDER_I2C_HOST      (0)
// #define TEST_EXPANDER_I2C_ADDR      (ESP_IO_EXPANDER_I2C_TCA9554_ADDRESS_000)
// #define TEST_EXPANDER_IO_I2C_SCL    (GPIO_NUM_18)
// #define TEST_EXPANDER_IO_I2C_SDA    (GPIO_NUM_8)

#define TEST_DELAY_TIME_MS          (3000)

static char *TAG = "st7701_lcd";

static void test_draw_bitmap(esp_lcd_panel_handle_t panel_handle)
{
    uint16_t row_line = TEST_LCD_V_RES / TEST_RGB_BIT_PER_PIXEL;
    uint8_t byte_per_pixel = TEST_RGB_BIT_PER_PIXEL / 8;
    uint8_t *color = (uint8_t *)heap_caps_calloc(1, row_line * TEST_LCD_H_RES * byte_per_pixel, MALLOC_CAP_DMA);
    assert(color);

    for (int j = 0; j < TEST_RGB_BIT_PER_PIXEL; j++) {
        for (int i = 0; i < row_line * TEST_LCD_H_RES; i++) {
            for (int k = 0; k < byte_per_pixel; k++) {
                color[i * byte_per_pixel + k] = (BIT(j) >> (k * 8)) & 0xff;
            }
        }
        ESP_ERROR_CHECK(esp_lcd_panel_draw_bitmap(panel_handle, 0, j * row_line, TEST_LCD_H_RES, (j + 1) * row_line, color));
    }
    free(color);
}

static const st7701_lcd_init_cmd_t vendor_specific_init_default[] = {
//  {cmd, { data }, data_size, delay_ms}
    {0xFF, (uint8_t []){0x77, 0x01, 0x00, 0x00, 0x13}, 5, 0},
    {0xEF, (uint8_t []){0x08}, 1, 0},
    {0xFF, (uint8_t []){0x77, 0x01, 0x00, 0x00, 0x10}, 5, 0},
    {0xC0, (uint8_t []){0x3B, 0x00}, 2, 0},
    {0xC1, (uint8_t []){0x12, 0x0A}, 2, 0},
    {0xC2, (uint8_t []){0x07, 0x03}, 2, 0},
    {0xCC, (uint8_t []){0x10}, 1, 0},
    {0xB0, (uint8_t []){0x00, 0x05, 0x0C, 0x12, 0x1A, 0x0C, 0x07, 0x09, 0x08, 0x1C, 0x05, 0x12, 0x0F, 0x0E, 0x12, 0x14}, 16, 0},
    {0xB1, (uint8_t []){0x00, 0x05, 0x0C, 0x10, 0x14, 0x08, 0x08, 0x09, 0x09, 0x1F, 0x0A, 0x17, 0x13, 0x14, 0x1A, 0x1D}, 16, 0},
    {0xFF, (uint8_t []){0x77, 0x01, 0x00, 0x00, 0x11}, 5, 0},
    {0xB0, (uint8_t []){0x6D}, 1, 0},
    {0xB1, (uint8_t []){0x28}, 1, 0},
    {0xB2, (uint8_t []){0x01}, 1, 0},
    {0xB3, (uint8_t []){0x80}, 1, 0},
    {0xB5, (uint8_t []){0x4E}, 1, 0},
    {0xB7, (uint8_t []){0x85}, 1, 0},
    {0xB8, (uint8_t []){0x20}, 1, 0},
    {0xC1, (uint8_t []){0x78}, 1, 0},
    {0xC2, (uint8_t []){0x78}, 1, 0},
    {0xD0, (uint8_t []){0x88}, 1, 0},   //100ms感觉没有问题
    {0xE0, (uint8_t []){0x00, 0x00, 0x02}, 3, 0},
    {0xE1, (uint8_t []){0x07, 0x00, 0x09, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x33, 0x33}, 11, 0},
    {0xE2, (uint8_t []){0x11, 0x11, 0x33, 0x33, 0xF6, 0x00, 0xF6, 0x00, 0xF6, 0x00, 0xF6, 0x00, 0x00}, 13, 0},
    {0xE3, (uint8_t []){0x00, 0x00, 0x11, 0x11}, 4, 0},
    {0xE4, (uint8_t []){0x44, 0x44}, 2, 0},
    {0xE5, (uint8_t []){0x0F, 0xF3, 0x3D, 0xFF, 0x11, 0xF5, 0x3D, 0xFF, 0x0B, 0xEF, 0x3D, 0xFF, 0x0D, 0xF1, 0x3D, 0xFF}, 16, 0},
    {0xE6, (uint8_t []){0x00, 0x00, 0x11, 0x11}, 4, 0},
    {0xE7, (uint8_t []){0x44, 0x44}, 2, 0},
    {0xE8, (uint8_t []){0x0E, 0xF2, 0x3D, 0xFF, 0x10, 0xF4, 0x3D, 0xFF, 0x0A, 0xEE, 0x3D, 0xFF, 0x0C, 0xF0, 0x3D, 0xFF}, 16, 0},
    {0xE9, (uint8_t []){0x36, 0x00}, 2, 0},
    {0xEB, (uint8_t []){0x00, 0x01, 0xE4, 0xE4, 0x44, 0xAA, 0x10}, 7, 0},
    {0xED, (uint8_t []){0xFF, 0x45, 0x67, 0xFA, 0x01, 0x2B, 0xCF, 0xFF, 0xFF, 0xFC, 0xB2, 0x10, 0xAF, 0x76, 0x54, 0xFF}, 16, 0},
    {0xFF, (uint8_t []){0x77, 0x01, 0x00, 0x00, 0x00}, 5, 0},
    {0x36, (uint8_t []){0x00}, 1, 0},
    {0x3a, (uint8_t []){0x50}, 1, 0},
    {0x11, (uint8_t []){0x00}, 0, 120},
    {0x29, (uint8_t []){0x00}, 0, 0},
};

void innotech_lcd_process(void)
{ 

}

void innotech_lcd_init(void)
{
    innotech_gpio_mode_init(1, 3, 0, 1, 0);
    innotech_set_gpio_level(1, 1);
    ESP_LOGI(TAG, "Install 3-wire SPI panel IO");
    spi_line_config_t line_config = {
        .cs_io_type = IO_TYPE_GPIO,
        .cs_gpio_num = 47,
        .scl_io_type = IO_TYPE_GPIO,
        .scl_gpio_num = 5,
        .sda_io_type = IO_TYPE_GPIO,
        .sda_gpio_num = 48,
        .io_expander = NULL,
    };
    esp_lcd_panel_io_3wire_spi_config_t io_config = ST7701_PANEL_IO_3WIRE_SPI_CONFIG(line_config, 0);
    esp_lcd_panel_io_handle_t io_handle = NULL;
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_3wire_spi(&io_config, &io_handle));

    ESP_LOGI(TAG, "Install ST7701 panel driver");
    esp_lcd_rgb_panel_config_t rgb_config = {
        .clk_src = LCD_CLK_SRC_DEFAULT,
        .psram_trans_align = 64,
        .data_width = TEST_RGB_DATA_WIDTH,
        .bits_per_pixel = TEST_RGB_BIT_PER_PIXEL,
        .de_gpio_num = TEST_LCD_IO_RGB_DE,
        .pclk_gpio_num = TEST_LCD_IO_RGB_PCLK,
        .vsync_gpio_num = TEST_LCD_IO_RGB_VSYNC,
        .hsync_gpio_num = TEST_LCD_IO_RGB_HSYNC,
        .disp_gpio_num = TEST_LCD_IO_RGB_DISP,
        .data_gpio_nums = {
            TEST_LCD_IO_RGB_DATA0,
            TEST_LCD_IO_RGB_DATA1,
            TEST_LCD_IO_RGB_DATA2,
            TEST_LCD_IO_RGB_DATA3,
            TEST_LCD_IO_RGB_DATA4,
            TEST_LCD_IO_RGB_DATA5,
            TEST_LCD_IO_RGB_DATA6,
            TEST_LCD_IO_RGB_DATA7,
            TEST_LCD_IO_RGB_DATA8,
            TEST_LCD_IO_RGB_DATA9,
            TEST_LCD_IO_RGB_DATA10,
            TEST_LCD_IO_RGB_DATA11,
            TEST_LCD_IO_RGB_DATA12,
            TEST_LCD_IO_RGB_DATA13,
            TEST_LCD_IO_RGB_DATA14,
            TEST_LCD_IO_RGB_DATA15,
        },
        .timings = ST7701_480_480_PANEL_60HZ_RGB_TIMING(),
        .flags.fb_in_psram = 1,
    };
    st7701_vendor_config_t vendor_config = {
        .rgb_config = &rgb_config,
        .init_cmds = vendor_specific_init_default,
        .init_cmds_size = sizeof(vendor_specific_init_default) / sizeof(st7701_lcd_init_cmd_t),
        .flags = {
            .auto_del_panel_io = 0,
        },
    };
    const esp_lcd_panel_dev_config_t panel_config = {
        .reset_gpio_num = TEST_LCD_IO_RST,
        .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_RGB,
        .bits_per_pixel = TEST_LCD_BIT_PER_PIXEL,
        .vendor_config = &vendor_config,
    };
    esp_lcd_panel_handle_t panel_handle = NULL;
    ESP_ERROR_CHECK(esp_lcd_new_panel_st7701(io_handle, &panel_config, &panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_reset(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_init(panel_handle));

    test_draw_bitmap(panel_handle);
    // vTaskDelay(pdMS_TO_TICKS(TEST_DELAY_TIME_MS));

    // ESP_ERROR_CHECK(esp_lcd_panel_io_del(io_handle));
    // ESP_ERROR_CHECK(esp_lcd_panel_del(panel_handle));
}

