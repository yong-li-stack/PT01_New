// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project
#include <stdio.h>
#include "ui.h"
#include "ui_helpers.h"
#include "innotech_wifi.h"
#include "innotech_lcd.h"
#include "api_bridge.h"
#include "innotech_config.h"
#include "innotech_button.h"
#include "innotech_ble.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label46;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Label5;


// SCREEN: ui_Screen4
void ui_Screen4_screen_init(void);
lv_obj_t * ui_Screen4;
lv_obj_t * ui_Image1;


// SCREEN: ui_Screen5
void ui_Screen5_screen_init(void);
lv_obj_t * ui_Screen5;
lv_obj_t * ui_Image14;
lv_obj_t * ui_Image15;
lv_obj_t * ui_Image16;
lv_obj_t * ui_Image17;
lv_obj_t * ui_Image52;


// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
lv_obj_t * ui_Screen3;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Image11;
lv_obj_t * ui_Image12;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Image13;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Label31;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Label35;
lv_obj_t * ui_Label76;
lv_obj_t * ui_Label108;
lv_obj_t * ui_Label111;
lv_obj_t * ui_Label112;
lv_obj_t * ui_Label113;
lv_obj_t * ui_Image32;
lv_obj_t * ui_Label94;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Label48;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label194;
lv_obj_t * ui_Image31;
lv_obj_t * ui_Image33;


// SCREEN: ui_Screen6
void ui_Screen6_screen_init(void);
lv_obj_t * ui_Screen6;
lv_obj_t * ui_Image18;
lv_obj_t * ui_Image19;
lv_obj_t * ui_Image20;
lv_obj_t * ui_Image50;
lv_obj_t * ui_Label12;


// SCREEN: ui_Screen13
void ui_Screen13_screen_init(void);
lv_obj_t * ui_Screen13;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Image51;


// SCREEN: ui_Screen7
void ui_Screen7_screen_init(void);
lv_obj_t * ui_Screen7;
lv_obj_t * ui_Image21;
lv_obj_t * ui_Label1;


// SCREEN: ui_Screen8
void ui_Screen8_screen_init(void);
lv_obj_t * ui_Screen8;
lv_obj_t * ui_Image22;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Image23;
lv_obj_t * ui_Image24;


// SCREEN: ui_Screen9
void ui_Screen9_screen_init(void);
lv_obj_t * ui_Screen9;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Label36;
lv_obj_t * ui_Label38;
lv_obj_t * ui_Label39;
lv_obj_t * ui_Image25;
lv_obj_t * ui_Image26;
lv_obj_t * ui_Label40;
lv_obj_t * ui_Label41;
lv_obj_t * ui_Label42;
lv_obj_t * ui_Label43;
lv_obj_t * ui_Label44;
lv_obj_t * ui_Image27;
lv_obj_t * ui_Label50;
lv_obj_t * ui_Label51;
lv_obj_t * ui_Label52;
lv_obj_t * ui_Label53;
lv_obj_t * ui_Label54;
lv_obj_t * ui_Label55;
lv_obj_t * ui_Label56;
lv_obj_t * ui_Label57;
lv_obj_t * ui_Label58;
lv_obj_t * ui_Label59;
lv_obj_t * ui_Label60;
lv_obj_t * ui_Label61;
lv_obj_t * ui_Label62;
lv_obj_t * ui_Label63;
lv_obj_t * ui_Label64;
lv_obj_t * ui_Image28;
lv_obj_t * ui_Label45;
lv_obj_t * ui_Container1;
lv_obj_t * ui_Image29;
lv_obj_t * ui_Label37;
lv_obj_t * ui_Image30;


// SCREEN: ui_Screen11
void ui_Screen11_screen_init(void);
lv_obj_t * ui_Screen11;
lv_obj_t * ui_Label96;
lv_obj_t * ui_Label49;
lv_obj_t * ui_Label65;
lv_obj_t * ui_Label97;
lv_obj_t * ui_Label100;
lv_obj_t * ui_Label101;
lv_obj_t * ui_Label102;
lv_obj_t * ui_Label103;
lv_obj_t * ui_Label104;
lv_obj_t * ui_Label105;
lv_obj_t * ui_Label106;
lv_obj_t * ui_Label107;
lv_obj_t * ui_Label109;
lv_obj_t * ui_Label110;
lv_obj_t * ui_Label114;
lv_obj_t * ui_Label115;
lv_obj_t * ui_Label116;
lv_obj_t * ui_Bar1;
lv_obj_t * ui_Bar2;
lv_obj_t * ui_Bar4;
lv_obj_t * ui_Bar5;
lv_obj_t * ui_Bar3;
lv_obj_t * ui_Label47;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_[48] = {&ui_img_1_png, &ui_img_10_png, &ui_img_11_png, &ui_img_12_png, &ui_img_2_png, &ui_img_13_png, &ui_img_3_png, &ui_img_14_png, &ui_img_4_png, &ui_img_15_png, &ui_img_16_png, &ui_img_6_png, &ui_img_17_png, &ui_img_7_png, &ui_img_18_png, &ui_img_8_png, &ui_img_19_png, &ui_img_20_png, &ui_img_21_png, &ui_img_22_png, &ui_img_23_png, &ui_img_24_png, &ui_img_25_png, &ui_img_26_png, &ui_img_27_png, &ui_img_28_png, &ui_img_29_png, &ui_img_30_png, &ui_img_31_png, &ui_img_313_png, &ui_img_318_png, &ui_img_32_png, &ui_img_33_png, &ui_img_34_png, &ui_img_35_png, &ui_img_36_png, &ui_img_37_png, &ui_img_38_png, &ui_img_39_png, &ui_img_40_png, &ui_img_41_png, &ui_img_42_png, &ui_img_43_png, &ui_img_44_png, &ui_img_45_png, &ui_img_46_png, &ui_img_47_png, &ui_img_9_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
static uint32_t last_blink_time = 1;
///////////////////// FUNCTIONS ////////////////////
void lvgl_blink_callback(void)
{
   
    if((innotech_wifi_config_flag_get() == WIFI_CONFIG_SUC) || (last_blink_time == 3))
    {
        lv_disp_load_scr(ui_Screen3);//展示时间的界面
    }else//正常配网
    {
        if(last_blink_time == 1)
        {
            lv_disp_load_scr(ui_Screen1);
        }
        if(innotech_pre_wifi() == 1)
        {
            lv_disp_load_scr(ui_Screen2);
        }
        if(innotech_wifi_state_get() == 1)
        {
            lv_disp_load_scr(ui_Screen6);
            last_blink_time = 3;
        }
        if(innotech_wifi_state_get() == 2)
        {
            lv_disp_load_scr(ui_Screen5);
            last_blink_time = 1;
        }
    }
    if(innotech_factory_flag_get() == 1)
    {
        lv_disp_load_scr(ui_Screen13);
    }
}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen4_screen_init();
    ui_Screen5_screen_init();
    ui_Screen3_screen_init();
    ui_Screen6_screen_init();
    ui_Screen7_screen_init();
    ui_Screen8_screen_init();
    ui_Screen9_screen_init();
    ui_Screen13_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    
    lv_disp_load_scr(ui_Screen4);
    
    lv_timer_create(lvgl_blink_callback, 500, NULL);
}
