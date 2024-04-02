/*******************************************************************************
 * Size: 30 px
 * Bpp: 8
 * Opts: --bpp 8 --size 30 --font D:\Users\Desktop\assets\OPPOSans-R.ttf -o D:\Users\Desktop\assets\ui_font_R108.c --format lvgl -r 0x20 -r 0x2D --symbols 1234567890/°%.W --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_R108
#define UI_FONT_R108 1
#endif

#if UI_FONT_R108

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0025 "%" */
    0x0, 0x0, 0xe, 0x6c, 0x9d, 0x95, 0x4f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x26, 0xe2, 0xff, 0xff, 0xff, 0xff, 0xb2, 0x6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
    0xfc, 0xcb, 0x1, 0x0, 0x0, 0x0, 0x5, 0xd5,
    0xfc, 0x69, 0xc, 0x1b, 0xa2, 0xff, 0x8b, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xfe,
    0x39, 0x0, 0x0, 0x0, 0x0, 0x59, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x3, 0xd9, 0xf8, 0x12, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x55, 0xff, 0xa3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xa4, 0xff, 0x2a, 0x0,
    0x0, 0x0, 0x0, 0x77, 0xff, 0x56, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xe1, 0xf3, 0x1a, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcc, 0xfd, 0x4, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0x79, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd8, 0xee, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3b, 0xff, 0x8c, 0x0, 0x0, 0x0, 0x1e,
    0xf6, 0xdd, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xcc, 0xfd, 0x4, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0x7f, 0x0, 0x0, 0x0, 0xa9, 0xff,
    0x4f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa5, 0xff, 0x2a, 0x0, 0x0, 0x0, 0x0, 0x76,
    0xff, 0x57, 0x0, 0x0, 0x3e, 0xff, 0xbb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5a,
    0xff, 0x8e, 0x0, 0x0, 0x0, 0x2, 0xd8, 0xf8,
    0x13, 0x0, 0x2, 0xd0, 0xfb, 0x2b, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xd7,
    0xfb, 0x67, 0xb, 0x1a, 0xa0, 0xff, 0x8e, 0x0,
    0x0, 0x68, 0xff, 0x91, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28, 0xe3,
    0xff, 0xff, 0xff, 0xff, 0xb5, 0x7, 0x0, 0x11,
    0xeb, 0xeb, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0x6e,
    0x9e, 0x96, 0x51, 0x1, 0x0, 0x0, 0x92, 0xff,
    0x67, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2b, 0xfb, 0xcf, 0x2,
    0x0, 0x2, 0x6d, 0xd5, 0xf8, 0xe3, 0x8f, 0xe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbc, 0xff, 0x3e, 0x0, 0x0,
    0x9b, 0xff, 0xe0, 0xa8, 0xcb, 0xff, 0xcd, 0xa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x51, 0xff, 0xa8, 0x0, 0x0, 0x49, 0xff,
    0xb8, 0x7, 0x0, 0x0, 0x7c, 0xff, 0x86, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8,
    0xde, 0xf6, 0x1d, 0x0, 0x0, 0xb0, 0xff, 0x2f,
    0x0, 0x0, 0x0, 0x5, 0xe5, 0xed, 0x3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7b, 0xff,
    0x7f, 0x0, 0x0, 0x0, 0xeb, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9a, 0xff, 0x2d, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1b, 0xf4, 0xe1, 0x9,
    0x0, 0x0, 0x4, 0xff, 0xc5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7e, 0xff, 0x47, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa5, 0xff, 0x55, 0x0, 0x0,
    0x0, 0x4, 0xff, 0xc4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7d, 0xff, 0x48, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3b, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xeb, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x99, 0xff, 0x2e, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xcd, 0xfc, 0x2e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb1, 0xff, 0x2d, 0x0, 0x0, 0x0, 0x4, 0xe4,
    0xef, 0x4, 0x0, 0x0, 0x0, 0x0, 0x64, 0xff,
    0x96, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4a,
    0xff, 0xb6, 0x6, 0x0, 0x0, 0x79, 0xff, 0x8b,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xe9, 0xee, 0x13,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9e,
    0xff, 0xdf, 0xa7, 0xca, 0xff, 0xd1, 0xc, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0xac, 0x5a, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x70,
    0xd7, 0xf9, 0xe5, 0x91, 0x10, 0x0, 0x0,

    /* U+002D "-" */
    0x37, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xbc,
    0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8,

    /* U+002E "." */
    0x0, 0x17, 0x11, 0x0, 0x55, 0xfd, 0xf7, 0x35,
    0x96, 0xff, 0xff, 0x71, 0x3e, 0xe9, 0xdd, 0x24,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbc,
    0xff, 0x5f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xf2, 0xff, 0x26, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2e, 0xff, 0xec, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x66, 0xff, 0xb4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0x7b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd7, 0xff, 0x42, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x11, 0xfe, 0xfc, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x48, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x81, 0xff, 0x97,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb9,
    0xff, 0x5e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xf0, 0xff, 0x25, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2a, 0xff, 0xeb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x63, 0xff, 0xb3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9b, 0xff,
    0x7a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd4, 0xff, 0x42, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xfd, 0xfc, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x45, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0xff, 0x97,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb6,
    0xff, 0x5e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xed, 0xff, 0x25, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x27, 0xff, 0xeb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x60, 0xff, 0xb3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x98, 0xff,
    0x7a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd1, 0xff, 0x41, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xfc, 0xfc, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x42, 0xff, 0xcf, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7a, 0xff, 0x96,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb3,
    0xff, 0x5d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xea, 0xff, 0x24, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x24, 0xff, 0xeb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x0, 0x13, 0x78, 0xcb, 0xec,
    0xf5, 0xd8, 0x96, 0x2e, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3e, 0xe6, 0xff, 0xff, 0xf4,
    0xeb, 0xff, 0xff, 0xfb, 0x75, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2b, 0xf3, 0xff, 0xae, 0x2e, 0x0,
    0x0, 0x15, 0x7f, 0xfb, 0xff, 0x6a, 0x0, 0x0,
    0x0, 0x1, 0xd0, 0xff, 0x98, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4e, 0xfe, 0xfa, 0x22, 0x0,
    0x0, 0x55, 0xff, 0xdd, 0x8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9a, 0xff, 0xa0, 0x0,
    0x0, 0xb8, 0xff, 0x6e, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x24, 0xfe, 0xf7, 0xb,
    0xd, 0xf9, 0xff, 0x1a, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0x51,
    0x3f, 0xff, 0xda, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8e, 0xff, 0x8a,
    0x68, 0xff, 0xb2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x67, 0xff, 0xb2,
    0x89, 0xff, 0x91, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x46, 0xff, 0xd4,
    0x97, 0xff, 0x82, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x37, 0xff, 0xe1,
    0xa2, 0xff, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2d, 0xff, 0xed,
    0xa2, 0xff, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0xff, 0xed,
    0x97, 0xff, 0x82, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x37, 0xff, 0xe1,
    0x89, 0xff, 0x91, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0xff, 0xd4,
    0x68, 0xff, 0xb1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x66, 0xff, 0xb2,
    0x3f, 0xff, 0xd9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8d, 0xff, 0x8a,
    0xd, 0xf9, 0xff, 0x19, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xce, 0xff, 0x52,
    0x0, 0xb9, 0xff, 0x6c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x22, 0xfd, 0xf7, 0xb,
    0x0, 0x57, 0xff, 0xda, 0x6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x95, 0xff, 0xa1, 0x0,
    0x0, 0x2, 0xd2, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x47, 0xfd, 0xfb, 0x24, 0x0,
    0x0, 0x0, 0x2d, 0xf4, 0xff, 0xa6, 0x25, 0x0,
    0x0, 0xf, 0x76, 0xf9, 0xff, 0x6d, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x40, 0xe7, 0xff, 0xff, 0xeb,
    0xe3, 0xfc, 0xff, 0xfb, 0x79, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x14, 0x7a, 0xcc, 0xee,
    0xf5, 0xda, 0x98, 0x2f, 0x0, 0x0, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x0, 0x2d, 0xc1, 0xff, 0x60,
    0x0, 0x0, 0xf, 0x90, 0xfc, 0xff, 0xff, 0x60,
    0x1, 0x5f, 0xe8, 0xff, 0xf5, 0xeb, 0xff, 0x60,
    0x8e, 0xff, 0xff, 0xa9, 0x1d, 0xbc, 0xff, 0x60,
    0xa5, 0xd2, 0x40, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x35, 0x3, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x60,

    /* U+0032 "2" */
    0x0, 0x0, 0x0, 0x30, 0x96, 0xd5, 0xf4, 0xf6,
    0xd9, 0xa2, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x8f, 0xfe, 0xff, 0xff, 0xf5, 0xe8, 0xfc,
    0xff, 0xff, 0xa2, 0xb, 0x0, 0x0, 0x0, 0x96,
    0xff, 0xf4, 0x85, 0x1d, 0x0, 0x0, 0xc, 0x5d,
    0xe5, 0xff, 0xb7, 0x1, 0x0, 0x3a, 0xff, 0xf4,
    0x3b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1b,
    0xe5, 0xff, 0x6b, 0x0, 0x6b, 0xfe, 0x76, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x56,
    0xff, 0xd9, 0x0, 0x0, 0x39, 0xe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xf5,
    0xff, 0x27, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd3, 0xff,
    0x46, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd4, 0xff, 0x4a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xf4, 0xff, 0x2b, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x50, 0xff, 0xde, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xd3, 0xff, 0x75, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8c,
    0xff, 0xd8, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6a, 0xff, 0xf4,
    0x2e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x60, 0xfe, 0xfc, 0x4f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x57, 0xfd, 0xfe, 0x5d, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4e,
    0xfb, 0xff, 0x68, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0xf8, 0xff,
    0x72, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3d, 0xf5, 0xff, 0x7e, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x36, 0xf2, 0xff, 0x89, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
    0xee, 0xff, 0x94, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x28, 0xe9, 0xff,
    0x9f, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x22, 0xe4, 0xff, 0xa9, 0x3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xdd, 0xff, 0xff, 0xe8, 0xe4, 0xe4,
    0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0xe4,
    0x5c, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x68,

    /* U+0033 "3" */
    0x0, 0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x44, 0x0, 0x0,
    0x86, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8,
    0xe8, 0xf4, 0xff, 0xfa, 0x2a, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xe5, 0xfe, 0x58, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0xd7, 0xff,
    0x6d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xc6, 0xff, 0x84, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xb2, 0xff, 0x9b, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9c, 0xff, 0xaf, 0x3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x83, 0xff,
    0xc0, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x68, 0xff, 0xd0, 0xf,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x51, 0xfd, 0xff, 0xe9, 0xe5, 0xc8,
    0x91, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3d, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x91, 0x6, 0x0, 0x0, 0x0, 0x0, 0x71,
    0xfe, 0x96, 0x32, 0xa, 0xa, 0x2b, 0x7b, 0xee,
    0xff, 0xaf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x31,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0xe4,
    0xff, 0x67, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x49, 0xff,
    0xdb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe1, 0xff,
    0x35, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xad, 0xff, 0x59,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9d, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb3, 0xff, 0x5a, 0x0, 0x39,
    0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xe7, 0xff, 0x34, 0x67, 0xfe, 0x81,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x59, 0xff, 0xd7, 0x0, 0x33, 0xfe, 0xf8, 0x47,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28, 0xed,
    0xff, 0x5f, 0x0, 0x0, 0x91, 0xff, 0xf8, 0x80,
    0x1a, 0x0, 0x0, 0x11, 0x70, 0xf1, 0xff, 0xa4,
    0x0, 0x0, 0x0, 0x3, 0x8d, 0xfd, 0xff, 0xff,
    0xeb, 0xeb, 0xff, 0xff, 0xff, 0x8c, 0x4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2e, 0x96, 0xd7, 0xf7,
    0xf4, 0xd5, 0x98, 0x2f, 0x0, 0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2a, 0xf9, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xc8, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x74, 0xff, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x25, 0xf6, 0xff, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xc1, 0xff, 0xa9, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6b,
    0xff, 0xbd, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf3,
    0xf5, 0x22, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xba, 0xff,
    0x70, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x62, 0xff, 0xc7,
    0x2, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1a, 0xef, 0xf8, 0x29,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb1, 0xff, 0x7b, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5a, 0xff, 0xcf, 0x4, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x15, 0xeb, 0xfb, 0x31, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa9, 0xff, 0x86, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x50, 0xff, 0xd7, 0x7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x11, 0xe7, 0xfd, 0x3a, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xfb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe8, 0xff, 0xf8, 0xe0, 0xe0, 0xce,
    0xa8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x44, 0xff, 0xc4, 0x0, 0x0, 0x0,

    /* U+0035 "5" */
    0x0, 0x0, 0x5e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x74, 0x0, 0x0,
    0x0, 0x7b, 0xff, 0xf5, 0xe8, 0xe8, 0xe8, 0xe8,
    0xe8, 0xe8, 0xe8, 0xe8, 0x69, 0x0, 0x0, 0x0,
    0x97, 0xff, 0x7e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb3,
    0xff, 0x61, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0x44, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xeb, 0xff, 0x27,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xa, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x23, 0xff, 0xee, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x40, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5c, 0xff, 0xb4, 0x1f, 0x8e, 0xcb, 0xd7, 0xba,
    0x87, 0x22, 0x0, 0x0, 0x0, 0x0, 0x0, 0x78,
    0xff, 0xe7, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x8c, 0x4, 0x0, 0x0, 0x0, 0x94, 0xff,
    0xff, 0xa9, 0x3e, 0x11, 0xc, 0x32, 0x8f, 0xfa,
    0xff, 0xb2, 0x1, 0x0, 0x0, 0x80, 0xf1, 0x7a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x36, 0xef,
    0xff, 0x73, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x53, 0xff,
    0xeb, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xda, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9a, 0xff, 0x78,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x83, 0xff, 0x90, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x99, 0xff, 0x79, 0x0, 0x28,
    0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd3, 0xff, 0x53, 0x5e, 0xfa, 0x6a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x44, 0xff, 0xee, 0x8, 0x3e, 0xff, 0xee, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x21, 0xe4,
    0xff, 0x7d, 0x0, 0x0, 0x9d, 0xff, 0xef, 0x7c,
    0x19, 0x0, 0x0, 0x12, 0x6f, 0xef, 0xff, 0xbd,
    0x2, 0x0, 0x0, 0x5, 0x93, 0xfe, 0xff, 0xff,
    0xf4, 0xec, 0xff, 0xff, 0xff, 0x9d, 0x9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x31, 0x97, 0xd7, 0xf7,
    0xf4, 0xd6, 0x9c, 0x36, 0x0, 0x0, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x25, 0xf5, 0xfe, 0x45, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xc6, 0xff, 0x8b, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x79,
    0xff, 0xcc, 0x6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0xf9,
    0xf4, 0x26, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xd1, 0xff,
    0x61, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x86, 0xff, 0xa8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x37, 0xfc, 0xe0, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xd6, 0xfd, 0x3d, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7d, 0xff, 0x86, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1b, 0xf6, 0xdb, 0x30, 0x8f, 0xc7,
    0xd3, 0xb8, 0x86, 0x21, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x99, 0xff, 0xcc, 0xfd, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x82, 0x1, 0x0, 0x0,
    0x0, 0x17, 0xf8, 0xff, 0xff, 0xb0, 0x41, 0xe,
    0x8, 0x2c, 0x85, 0xf7, 0xff, 0x98, 0x0, 0x0,
    0x0, 0x6a, 0xff, 0xff, 0x7b, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x37, 0xf4, 0xff, 0x4d, 0x0,
    0x0, 0xb5, 0xff, 0xbc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6d, 0xff, 0xc3, 0x0,
    0x0, 0xec, 0xff, 0x4d, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xf6, 0xff, 0x1c,
    0x6, 0xff, 0xff, 0x12, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc7, 0xff, 0x41,
    0x15, 0xff, 0xff, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb5, 0xff, 0x58,
    0x3, 0xfb, 0xff, 0xe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc3, 0xff, 0x44,
    0x0, 0xdc, 0xff, 0x41, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xf3, 0xff, 0x20,
    0x0, 0x88, 0xff, 0xa7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x61, 0xff, 0xc8, 0x0,
    0x0, 0x22, 0xf5, 0xff, 0x5a, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x27, 0xee, 0xff, 0x54, 0x0,
    0x0, 0x0, 0x65, 0xff, 0xfd, 0x8f, 0x21, 0x0,
    0x0, 0xf, 0x68, 0xed, 0xff, 0x9e, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x60, 0xf7, 0xff, 0xff, 0xee,
    0xe7, 0xfc, 0xff, 0xff, 0x8c, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1d, 0x81, 0xcd, 0xed,
    0xf4, 0xd6, 0x9a, 0x31, 0x0, 0x0, 0x0, 0x0,

    /* U+0037 "7" */
    0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x44, 0xe4,
    0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8,
    0xe8, 0xe8, 0xe8, 0xfe, 0xff, 0x32, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x24, 0xfe, 0xd8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x87, 0xff, 0x79, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xe6,
    0xfd, 0x1b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4d, 0xff, 0xb9,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb1, 0xff, 0x5a, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x18, 0xfb, 0xf0, 0x9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x78, 0xff, 0x9a, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xda, 0xff, 0x3a, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0xff,
    0xd9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa2, 0xff, 0x7a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xf6, 0xfd, 0x1c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x69, 0xff, 0xba, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xcc, 0xff, 0x5a, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xf1, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x93, 0xff,
    0x9b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xee, 0xff, 0x3b,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5a, 0xff, 0xda, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbd, 0xff, 0x7b, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x21, 0xfe, 0xfd, 0x1d, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x84,
    0xff, 0xbb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xe4, 0xff,
    0x5b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4a, 0xff, 0xf1, 0x9,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x0, 0x0, 0xc, 0x70, 0xc8, 0xec,
    0xf5, 0xd7, 0x8e, 0x24, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2d, 0xdb, 0xff, 0xfd, 0xd7,
    0xd0, 0xf4, 0xff, 0xf5, 0x5e, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x14, 0xe2, 0xff, 0xa1, 0x17, 0x0,
    0x0, 0x7, 0x70, 0xf9, 0xfc, 0x45, 0x0, 0x0,
    0x0, 0x0, 0x88, 0xff, 0xad, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x64, 0xff, 0xd2, 0x0, 0x0,
    0x0, 0x0, 0xe0, 0xff, 0x2e, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xe2, 0xff, 0x2b, 0x0,
    0x0, 0x5, 0xfd, 0xfb, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb1, 0xff, 0x4f, 0x0,
    0x0, 0x2, 0xf8, 0xfd, 0x3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb6, 0xff, 0x45, 0x0,
    0x0, 0x0, 0xcb, 0xff, 0x3e, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xec, 0xfb, 0x18, 0x0,
    0x0, 0x0, 0x5d, 0xff, 0xc8, 0x7, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x87, 0xff, 0xa3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa2, 0xff, 0xcc, 0x4a, 0xe,
    0x7, 0x31, 0xa3, 0xff, 0xd6, 0x11, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x71, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xa6, 0x12, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x43, 0xce, 0xff, 0xf4, 0xcd,
    0xc7, 0xe7, 0xff, 0xe9, 0x6c, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x58, 0xfc, 0xec, 0x5d, 0x6, 0x0,
    0x0, 0x0, 0x3a, 0xcb, 0xff, 0x97, 0x0, 0x0,
    0x0, 0x34, 0xfb, 0xee, 0x26, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xc4, 0xff, 0x73, 0x0,
    0x0, 0xb3, 0xff, 0x6a, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x26, 0xfd, 0xee, 0x8,
    0x7, 0xf9, 0xfd, 0x12, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc9, 0xff, 0x44,
    0x24, 0xff, 0xe9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa2, 0xff, 0x67,
    0x1c, 0xff, 0xea, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa3, 0xff, 0x5f,
    0x2, 0xfa, 0xfe, 0x15, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcc, 0xff, 0x3f,
    0x0, 0xb2, 0xff, 0x74, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2d, 0xfe, 0xeb, 0x7,
    0x0, 0x42, 0xff, 0xf3, 0x31, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0xcf, 0xff, 0x81, 0x0,
    0x0, 0x0, 0x8a, 0xff, 0xf3, 0x70, 0xf, 0x0,
    0x0, 0x4, 0x4c, 0xd8, 0xff, 0xc5, 0x5, 0x0,
    0x0, 0x0, 0x2, 0x7a, 0xfb, 0xff, 0xfc, 0xdd,
    0xd6, 0xf3, 0xff, 0xff, 0xa9, 0xf, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x26, 0x89, 0xd0, 0xed,
    0xf5, 0xd9, 0xa2, 0x3f, 0x0, 0x0, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x0, 0x0, 0x16, 0x78, 0xca, 0xea,
    0xf4, 0xd7, 0x9e, 0x36, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x52, 0xf1, 0xff, 0xff, 0xf7,
    0xf0, 0xff, 0xff, 0xff, 0x93, 0x5, 0x0, 0x0,
    0x0, 0x0, 0x57, 0xff, 0xff, 0x9a, 0x2b, 0x0,
    0x0, 0x13, 0x6c, 0xee, 0xff, 0xa5, 0x0, 0x0,
    0x0, 0x1d, 0xf2, 0xff, 0x65, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x28, 0xed, 0xff, 0x56, 0x0,
    0x0, 0x85, 0xff, 0xad, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xc8, 0x0,
    0x0, 0xdc, 0xff, 0x43, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xf2, 0xff, 0x1e,
    0x3, 0xfc, 0xff, 0xe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc3, 0xff, 0x41,
    0x14, 0xff, 0xff, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb2, 0xff, 0x58,
    0x3, 0xfb, 0xff, 0x11, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc6, 0xff, 0x48,
    0x0, 0xda, 0xff, 0x49, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xf6, 0xff, 0x2f,
    0x0, 0x84, 0xff, 0xb4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6e, 0xff, 0xf1, 0x5,
    0x0, 0x1d, 0xf1, 0xff, 0x71, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x38, 0xf5, 0xff, 0xa9, 0x0,
    0x0, 0x0, 0x59, 0xfe, 0xff, 0xaa, 0x3f, 0xe,
    0x7, 0x2a, 0x84, 0xf7, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0xf1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0xfd, 0xd8, 0x2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0x6e, 0xb3, 0xd2,
    0xd4, 0xab, 0x52, 0x98, 0xff, 0x55, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3c, 0xfd, 0xc1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xdc, 0xf9, 0x2b, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x59, 0xff, 0xcd, 0x5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22,
    0xf1, 0xf9, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xc9,
    0xff, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x89, 0xff,
    0xc6, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0xfe, 0xf6,
    0x26, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x16, 0xe8, 0xff, 0x6e,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0057 "W" */
    0x10, 0xfc, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd4, 0xff,
    0x93, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x79, 0xff, 0xb5, 0x0, 0xc8,
    0xff, 0x82, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1c, 0xff, 0xff, 0xd9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbc, 0xff, 0x6f, 0x0, 0x83, 0xff, 0xc4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x63, 0xff, 0xff, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf6,
    0xff, 0x29, 0x0, 0x3d, 0xff, 0xfa, 0xb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xab,
    0xff, 0xd2, 0xff, 0x67, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x41, 0xff, 0xe2, 0x0,
    0x0, 0x5, 0xf3, 0xff, 0x47, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xf1, 0x54,
    0xff, 0xae, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x83, 0xff, 0x9d, 0x0, 0x0, 0x0,
    0xb3, 0xff, 0x89, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3a, 0xff, 0xaf, 0xd, 0xfa, 0xf1,
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc5, 0xff, 0x57, 0x0, 0x0, 0x0, 0x6d, 0xff,
    0xcb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x81, 0xff, 0x67, 0x0, 0xc1, 0xff, 0x3c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xfb, 0xfd,
    0x13, 0x0, 0x0, 0x0, 0x28, 0xff, 0xfc, 0xf,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc9, 0xff,
    0x20, 0x0, 0x7a, 0xff, 0x83, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4a, 0xff, 0xcb, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe2, 0xff, 0x4e, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x12, 0xfd, 0xd8, 0x0, 0x0,
    0x32, 0xff, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8c, 0xff, 0x85, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9d, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x58, 0xff, 0x91, 0x0, 0x0, 0x1, 0xe9,
    0xfd, 0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x58,
    0xff, 0xd2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0x49, 0x0, 0x0, 0x0, 0xa3, 0xff, 0x58,
    0x0, 0x0, 0x0, 0x0, 0x12, 0xfe, 0xf3, 0x5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0xfe, 0xfe,
    0x15, 0x0, 0x0, 0x0, 0x0, 0xe6, 0xf8, 0xa,
    0x0, 0x0, 0x0, 0x5c, 0xff, 0x9f, 0x0, 0x0,
    0x0, 0x0, 0x53, 0xff, 0xb3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcd, 0xff, 0x56, 0x0,
    0x0, 0x0, 0x2e, 0xff, 0xba, 0x0, 0x0, 0x0,
    0x0, 0x16, 0xfe, 0xe5, 0x0, 0x0, 0x0, 0x0,
    0x96, 0xff, 0x6d, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x88, 0xff, 0x97, 0x0, 0x0, 0x0,
    0x76, 0xff, 0x73, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xcd, 0xff, 0x2d, 0x0, 0x0, 0x0, 0xd8, 0xff,
    0x27, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x43, 0xff, 0xd9, 0x0, 0x0, 0x0, 0xbd, 0xff,
    0x2b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x86, 0xff,
    0x74, 0x0, 0x0, 0x1a, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf6,
    0xff, 0x1b, 0x0, 0xb, 0xf9, 0xe3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xba, 0x0,
    0x0, 0x5d, 0xff, 0x9b, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb8, 0xff, 0x5d,
    0x0, 0x4c, 0xff, 0x9c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xf2, 0xf7, 0x9, 0x0, 0x9f,
    0xff, 0x55, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x73, 0xff, 0x9e, 0x0, 0x94,
    0xff, 0x54, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb0, 0xff, 0x48, 0x0, 0xe1, 0xfd, 0x11,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2d, 0xff, 0xdf, 0x0, 0xdc, 0xfc, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x69,
    0xff, 0x8f, 0x24, 0xff, 0xc9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe7, 0xff, 0x45, 0xff, 0xc5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x21, 0xff, 0xd6,
    0x66, 0xff, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa3, 0xff,
    0xcd, 0xff, 0x7e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xda, 0xff, 0xc5, 0xff,
    0x3d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5d, 0xff, 0xff, 0xff,
    0x36, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x93, 0xff, 0xff, 0xf2, 0x4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x19, 0xff, 0xff, 0xec, 0x2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4b, 0xff, 0xff, 0xb1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd3, 0xff, 0xa7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xf8,
    0xff, 0x6b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+00B0 "°" */
    0x0, 0x0, 0x18, 0x8c, 0xdc, 0xf7, 0xe0, 0x9a,
    0x24, 0x0, 0x0, 0x0, 0x32, 0xe7, 0xff, 0xd0,
    0xae, 0xc9, 0xfd, 0xf2, 0x49, 0x0, 0xc, 0xdf,
    0xf2, 0x49, 0x0, 0x0, 0x0, 0x33, 0xe4, 0xf0,
    0x1e, 0x68, 0xff, 0x66, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3e, 0xff, 0x8b, 0xad, 0xfc, 0xa, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xdc, 0xd0, 0xc4,
    0xec, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc1, 0xe8, 0xad, 0xfb, 0xa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdc, 0xd0, 0x69, 0xff, 0x65,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0xff, 0x8c,
    0xd, 0xe0, 0xf2, 0x48, 0x0, 0x0, 0x0, 0x33,
    0xe4, 0xf1, 0x1f, 0x0, 0x33, 0xe9, 0xff, 0xd0,
    0xad, 0xc7, 0xfd, 0xf4, 0x4b, 0x0, 0x0, 0x0,
    0x1a, 0x90, 0xdd, 0xf7, 0xe1, 0x9d, 0x26, 0x0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 141, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 392, .box_w = 23, .box_h = 25, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 575, .adv_w = 170, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 591, .adv_w = 125, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 607, .adv_w = 163, .box_w = 10, .box_h = 30, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 907, .adv_w = 293, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1291, .adv_w = 195, .box_w = 8, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1483, .adv_w = 293, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1843, .adv_w = 293, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2203, .adv_w = 293, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2587, .adv_w = 293, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2947, .adv_w = 293, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3331, .adv_w = 293, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3691, .adv_w = 293, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4075, .adv_w = 293, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4459, .adv_w = 490, .box_w = 30, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5179, .adv_w = 210, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 14}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x5, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12,
    0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x37,
    0x90
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 145, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 17, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    16, 1
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -14
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 1,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 8,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_R108 = {
#else
lv_font_t ui_font_R108 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_R108*/

