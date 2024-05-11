// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"
#include "rtc.h"
#include "innotech_rtc.h"
#include "innotech_meter.h"
#include "innotech_weather.h"
#include "innotech_config.h"
#include "innotech_wifi.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
void show_weather(int weather_chat)
{
    if(1 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_36_png);
    }
    if(2 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_37_png);
    }
    if(3 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_38_png);
    }
    if(4 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_39_png);
    }
    if(5 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_40_png);
    }
    if(6 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_23_png);
    }
    if(7 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_26_png);
    }
    if(8 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_22_png);
    }
    if(9 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_31_png);
    }
    if(10 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_35_png);
    }
    if(11 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_32_png);
    }
    if(12 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_30_png);
    }
    if(13 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_33_png);
    }
    if(14 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_29_png);
    }
    if(15 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_28_png);
    }
    if(16 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_34_png);
    }
    if(17 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_24_png);
    }
    if(18 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_27_png);
    }
    if(19 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_25_png);
    }
    if(20 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_43_png);
    }
    if(21 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_20_png);
    }
    if(22 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_19_png);
    }
    if(23 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_18_png);
    }
    if(24 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_42_png);
    }
    if(25 == weather_chat)
    {
        lv_img_set_src(ui_Image32, &ui_img_41_png);
    }

}

void show_time(void)
{
    char time;
    
    //show time
    struct tm time_info = innotech_time_get();
    //show time hour
    if(time_info.tm_hour/10)
    {
        itoa(time_info.tm_hour/10, &time, 10);
        lv_label_set_text(ui_Label20, &time);
    }else 
    {
        lv_label_set_text(ui_Label20, "0");
    }

    itoa(time_info.tm_hour%10, &time, 10);
    // printf("hour:%d last-hour:%d\n",time_info.tm_hour,time_info.tm_hour%10);
    lv_label_set_text(ui_Label21, &time);

    //show time minu
    if(time_info.tm_min/10)
    {
        itoa(time_info.tm_min/10, &time, 10);
        lv_label_set_text(ui_Label22, &time);
    }else 
    {
        lv_label_set_text(ui_Label22, "0");
    }

    itoa(time_info.tm_min%10, &time, 10);
    lv_label_set_text(ui_Label23, &time);

    /*Display the date and week*/
    //show week
    if(time_info.tm_wday == 1)
    {
        lv_label_set_text(ui_Label10, "一");
    }else if(time_info.tm_wday == 2)
    {
        lv_label_set_text(ui_Label10, "二");
    }else if(time_info.tm_wday == 3)
    {
        lv_label_set_text(ui_Label10, "三");
    }else if(time_info.tm_wday == 4)
    {
        lv_label_set_text(ui_Label10, "四");
    }else if(time_info.tm_wday == 5)
    {
        lv_label_set_text(ui_Label10, "五");
    }else if(time_info.tm_wday == 6)
    {
        lv_label_set_text(ui_Label10, "六");
    }else if(time_info.tm_wday == 0)
    {
        lv_label_set_text(ui_Label10, "日");
    }
    //show mother
    
    if((time_info.tm_mon+1)/10)
    {
        itoa((time_info.tm_mon+1)/10, &time, 10);
        lv_label_set_text(ui_Label2, &time);
        itoa((time_info.tm_mon+1)%10, &time, 10);
        lv_label_set_text(ui_Label46, &time);
        lv_obj_set_x(ui_Label46, -204);
        lv_obj_set_x(ui_Image31, -182);
        lv_obj_set_x(ui_Label4, -160);
        if(time_info.tm_mday/10)
        {
            itoa(time_info.tm_mday/10, &time, 10);
            lv_label_set_text(ui_Label4, &time);
            itoa(time_info.tm_mday%10, &time, 10);
            lv_label_set_text(ui_Label8, &time);
            lv_obj_set_x(ui_Label9, -91);
            lv_obj_set_x(ui_Label10, -56);
            lv_obj_set_x(ui_Label8, -141);
        }else
        {
            itoa(time_info.tm_mday, &time, 10);
            lv_label_set_text(ui_Label4, &time);
            lv_label_set_text(ui_Label8, " ");
            lv_obj_set_x(ui_Label9, -110);
            lv_obj_set_x(ui_Label10, -75);
        }
    }else
    {
        lv_label_set_text(ui_Label46, " ");
        // lv_obj_set_x(ui_Label46, 48);//maybe behind after number
        itoa(time_info.tm_mon+1, &time, 10);
        lv_label_set_text(ui_Label2, &time);
        lv_obj_set_x(ui_Image31, -204);
        if(time_info.tm_mday/10)
        {
            itoa(time_info.tm_mday/10, &time, 10);
            lv_label_set_text(ui_Label4, &time);
            itoa(time_info.tm_mday%10, &time, 10);
            lv_label_set_text(ui_Label8, &time);
            lv_obj_set_x(ui_Label9, -110);
            lv_obj_set_x(ui_Label10, -75);
            lv_obj_set_x(ui_Label4, -182);
            lv_obj_set_x(ui_Label8, -161);
        }else
        {
            itoa(time_info.tm_mday, &time, 10);
            lv_label_set_text(ui_Label4, &time);
            lv_label_set_text(ui_Label8, " ");
            lv_obj_set_x(ui_Label4, -182);
            lv_obj_set_x(ui_Label9, -131);
            lv_obj_set_x(ui_Label10, -96);
        }
    }
}

static uint8_t consumption_site_num = 0;
static int consumption_site[5][8] = 
{
    {0 ,14 ,28 ,52 ,72 ,90 ,106,-55},
    {8 ,30 ,45 ,69 ,89 ,107 ,123,-55},
    {0 ,30 ,45 ,69 ,89 ,107 ,123,-74},
    {0 ,40 ,52 ,76 ,96 ,114 ,130,-81},
    {-4 ,45 ,59 ,83 ,103 ,121 ,137,-96}
};
void show_consumption_format(void)
{
    lv_obj_set_x(ui_Label28, consumption_site[consumption_site_num-1][0]);
    lv_obj_set_x(ui_Label34, consumption_site[consumption_site_num-1][1]);
    lv_obj_set_x(ui_Label35, consumption_site[consumption_site_num-1][2]);
    lv_obj_set_x(ui_Label29, consumption_site[consumption_site_num-1][3]);
    lv_obj_set_x(ui_Label30, consumption_site[consumption_site_num-1][4]);
    lv_obj_set_x(ui_Label31, consumption_site[consumption_site_num-1][5]);
    lv_obj_set_x(ui_Label32, consumption_site[consumption_site_num-1][6]);
    lv_obj_set_x(ui_Label27, consumption_site[consumption_site_num-1][7]);
}

static int power_site[4] = {-16,-16,-25,-23};
static int power_flag_site[4] = {23,44,57,82};
void show_power()
{
     //show power
    char power_num;
    char consumption_num;
    double cosumption = (double)innotech_consumption_get();
    innotech_config_t *innotech_config = (innotech_config_t *)innotech_config_get_handle();

    int power = (int)innotech_power_get();
    double current = innotech_current_get();
    int vol = (int)innotech_voltage_get();
    static uint8_t show_high_power_flag = 0;
    static uint8_t show_Overpower_flag = 0;
    static uint8_t show_normal_power_flag = 1;

    if(innotech_config->line_diameter == 1.5)
    {
        if(vol <= 250)
        {
            if(current >= 12.8 && current < 14.4)
            {
                //Display high power
                show_high_power_flag = 1;
            }else if(current >= 14.4)
            {
                //Display Overpower
                show_Overpower_flag = 1;
            }else if(current < 12.8)
            {
                show_normal_power_flag = 1;
            }
        }else
        {
            if(power > 3200 && power <= 3600)
            {
                show_high_power_flag = 1;
            }else if(power > 3600)
            {
                show_Overpower_flag = 1;
            }else if(power < 3200)
            {
                show_normal_power_flag = 1;
            }
        }
        
    }else if(innotech_config->line_diameter == 4)
    {
        if(vol <= 250)
        {
            if(current >= 25.6 && current < 28.8)
            {
                //Display high power
                show_high_power_flag = 1;
            }else if(current >= 28.8)
            {
                //Display Overpower
                show_Overpower_flag = 1;
            }else if(current < 25.6)
            {
                show_normal_power_flag = 1;
            }
        }else
        {
            if(power >= 6400 && power <= 7200)
            {
                show_high_power_flag = 1;
            }else if(power > 7200)
            {
                show_Overpower_flag = 1;
            }else if(power < 6400)
            {
                show_normal_power_flag = 1;
            }
        }
    }else if(innotech_config->line_diameter == 2.5)
    {
        if(vol <= 250)
        {
            if(current >= 20.0 && current < 22.5)
            {
                //Display high power
                show_high_power_flag = 1;
            }else if(current >= 22.5)
            {
                //Display Overpower
                show_Overpower_flag = 1;
            }else if(current < 20.0)
            {
                show_normal_power_flag = 1;
            }
        }else
        {
            if(power > 5000 && power <= 5625)
                {
                    show_high_power_flag = 1;
                }else if(power > 5625)
                {
                    show_Overpower_flag = 1;
                }else if(power < 5000)
                {
                show_normal_power_flag = 1;
            }
        }
    }
    if(innotech_get_meter_protect() == 1)
    {
        lv_label_set_text(ui_Label94, " ");
        lv_label_set_text(ui_Label26, " ");
        lv_label_set_text(ui_Label111, " ");
        lv_label_set_text(ui_protect, "保护模式");
        lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_HIDDEN);
    }else if(innotech_get_meter_protect() == 0) 
    {
        lv_label_set_text(ui_protect, " ");
        lv_label_set_text(ui_Label26, "W");
        lv_obj_add_flag(ui_Panel3, LV_OBJ_FLAG_HIDDEN);

        if(power >= 1000)
        {
            itoa(power, &power_num, 10);
            lv_label_set_text(ui_Label111, &power_num);
            lv_obj_set_x(ui_Label111, power_site[3]);
            lv_obj_set_x(ui_Label26, power_flag_site[3]);
        }else if(power >= 100)
        {
            itoa(power, &power_num, 10);
            lv_label_set_text(ui_Label111, &power_num);
            lv_obj_set_x(ui_Label111, power_site[2]);
            lv_obj_set_x(ui_Label26, power_flag_site[2]);
        }else if(power >= 10)
        {
            itoa(power, &power_num, 10);
            lv_label_set_text(ui_Label111, &power_num);
            lv_obj_set_x(ui_Label111, power_site[1]);
            lv_obj_set_x(ui_Label26, power_flag_site[1]);
        }else if(power >= 0)
        {
            itoa(power, &power_num, 10);
            lv_label_set_text(ui_Label111, &power_num);
            lv_obj_set_x(ui_Label111, power_site[0]);
            lv_obj_set_x(ui_Label26, power_flag_site[0]);
        }
        
        //show kw.h
        float count = innotech_consumption_get();
        int count_int = (int)(count * 10);
            itoa((count_int % 10), &consumption_num, 10);
            lv_label_set_text(ui_Label35, &consumption_num);
        itoa((count_int / 10), &consumption_num, 10);
        lv_label_set_text(ui_Label28, &consumption_num);
                //If adding a number moves the position of a number back
        if((count_int / 100 > 0) && (count_int / 100 < 10))
        {
            //Add a number
            consumption_site_num = 2;
        }else if((count_int / 1000 > 0) && (count_int / 1000 < 10))
        {
            //Add a number
            consumption_site_num = 3;
        }else if((count_int / 10000 > 0) && (count_int / 10000 < 10))
        {
            //Add a number
            consumption_site_num = 4;
        }else if((count_int / 100000 > 0) && (count_int / 100000 < 10))
        {
            //Add a number
            consumption_site_num = 5;
        }else
        {
            //normal
            consumption_site_num = 1;
        }
        show_consumption_format();
    }
    if(innotech_get_disconnet_flag() == 1)
    {
        lv_label_set_text(ui_Label94, "请检查网络");
        lv_obj_set_style_text_color(ui_Label94, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
    }else if((show_normal_power_flag == 1) || (innotech_get_meter_protect() == 1) || (innotech_get_disconnet_flag() == 0))
    {
        lv_label_set_text(ui_Label94, " ");
    }else if(show_Overpower_flag == 1)
    {
        lv_label_set_text(ui_Label94, "超功率");
    }else if(show_high_power_flag == 1)
    {
        lv_label_set_text(ui_Label94, "高功率");
        }
    if(show_high_power_flag == 1)
    {
        //Font and background display in yellow
        lv_obj_set_style_text_color(ui_Label111, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(ui_Label94, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_img_set_src(ui_Image13, &ui_img_45_png);
        show_high_power_flag = 0;
    }else if(show_Overpower_flag == 1)
    {
        //Font and background display in red
        lv_obj_set_style_text_color(ui_Label111, lv_color_hex(0xE33539), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0xE33539), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(ui_Label94, lv_color_hex(0xE33539), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_img_set_src(ui_Image13, &ui_img_44_png);
        show_Overpower_flag = 0;
    }else if(show_normal_power_flag == 1)
    {
        lv_obj_set_style_text_color(ui_Label111, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_img_set_src(ui_Image13, &ui_img_10_png);
        show_normal_power_flag = 0;
    }
    
}

// static uint8_t humi_flag[2] = {-146,-165};
// static int humi_num_site[2] = {-177,-187};
void show_temp_humi()
{
    char temp_humi;
    weather_t weather_info = innotech_weather_info_get();
    // printf("weather_info.temp_min = %d\n",weather_info.temp_min);
    //show temp
    show_weather(weather_info.icon_code);
    if(weather_info.temp_min / 10)
    {
        lv_obj_set_x(ui_Image33, -143);
        lv_obj_set_x(ui_Label11, -175);
        lv_obj_set_x(ui_Label14, -112);
        lv_obj_set_x(ui_Label108, -88);
    }else
    {
        lv_obj_set_x(ui_Label11, -187);
        lv_obj_set_x(ui_Image33, -165);
        if(weather_info.temp_max / 10)
        {
            lv_obj_set_x(ui_Label14, -135);
            lv_obj_set_x(ui_Label108,-111);
        }else
        {
            lv_obj_set_x(ui_Label14, -143);
            lv_obj_set_x(ui_Label108,-125);
        }
    }
    itoa(weather_info.temp_max, &temp_humi, 10);
    lv_label_set_text(ui_Label14, &temp_humi);
    itoa(weather_info.temp_min, &temp_humi, 10);
    lv_label_set_text(ui_Label11, &temp_humi);
    

    //show homi
    if((weather_info.humid / 10) == 0)
    {
        lv_obj_set_x(ui_Label17, -187);
        lv_obj_set_x(ui_Label19, -166);
    }else
    {
        lv_obj_set_x(ui_Label17, -177);
        lv_obj_set_x(ui_Label19, -146);
    }
    itoa(weather_info.humid, &temp_humi, 10);
    lv_label_set_text(ui_Label17, &temp_humi);
    
}

void animation_blink_callback()
{
    
    show_time();
    show_power();
    show_temp_humi();

}

void colon_blink_callback()
{
    //display colon
    static uint8_t colon_blink_time = 0;
    if(colon_blink_time%2){
        lv_obj_clear_flag(ui_Label24, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(ui_Label24, LV_OBJ_FLAG_HIDDEN);
    }
    colon_blink_time++;
}

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen3, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -225);
    lv_obj_set_y(ui_Label2, -214);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "2");
    lv_obj_set_style_text_font(ui_Label2, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -172);
    lv_obj_set_y(ui_Label4, -214);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "2");
    lv_obj_set_style_text_font(ui_Label4, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -149);
    lv_obj_set_y(ui_Label8, -214);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "8");
    lv_obj_set_style_text_font(ui_Label8, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label46 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label46, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label46, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label46, 48);
    lv_obj_set_y(ui_Label46, -214);
    lv_obj_set_align(ui_Label46, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label46, " ");
    lv_obj_set_style_text_font(ui_Label46, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -104);
    lv_obj_set_y(ui_Label9, -214);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "周");
    lv_obj_set_style_text_font(ui_Label9, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -66);
    lv_obj_set_y(ui_Label10, -214);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "三");
    lv_obj_set_style_text_font(ui_Label10, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image11 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image11, &ui_img_11_png);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 17
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 27
    lv_obj_set_x(ui_Image11, -226);
    lv_obj_set_y(ui_Image11, -171);
    lv_obj_set_align(ui_Image11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image12 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image12, &ui_img_12_png);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_Image12, -226);
    lv_obj_set_y(ui_Image12, -134);
    lv_obj_set_align(ui_Image12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label11 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -183);
    lv_obj_set_y(ui_Label11, -171);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "12");
    lv_obj_set_style_text_font(ui_Label11, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -124);
    lv_obj_set_y(ui_Label14, -171);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "20");
    lv_obj_set_style_text_font(ui_Label14, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "");

    ui_Label17 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, -179);
    lv_obj_set_y(ui_Label17, -132);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "65");
    lv_obj_set_style_text_font(ui_Label17, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, -149);
    lv_obj_set_y(ui_Label19, -133);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "%");
    lv_obj_set_style_text_font(ui_Label19, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label20 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, -152);
    lv_obj_set_y(ui_Label20, 6);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "1");
    lv_obj_set_style_text_font(ui_Label20, &ui_font_B432, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label21, -67);
    lv_obj_set_y(ui_Label21, 6);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "1");
    lv_obj_set_style_text_font(ui_Label21, &ui_font_B432, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label22, 77);
    lv_obj_set_y(ui_Label22, 13);
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "0");
    lv_obj_set_style_text_font(ui_Label22, &ui_font_B432, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label23, 168);
    lv_obj_set_y(ui_Label23, 10);
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "4");
    lv_obj_set_style_text_font(ui_Label23, &ui_font_B432, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label24 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label24, 30);
    lv_obj_set_y(ui_Label24, -9);
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, ":");
    lv_obj_set_style_text_font(ui_Label24, &ui_font_B432, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image13 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image13, &ui_img_10_png);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 480
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 159
    lv_obj_set_x(ui_Image13, 1);
    lv_obj_set_y(ui_Image13, 111);
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label25 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label25, -122);
    lv_obj_set_y(ui_Label25, 154);
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, " ");
    lv_obj_set_style_text_font(ui_Label25, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label26 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, 23);
    lv_obj_set_y(ui_Label26, 166);
    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label26, "W");
    lv_obj_set_style_text_font(ui_Label26, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label28, 0);
    lv_obj_set_y(ui_Label28, 217);
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "0");
    lv_obj_set_style_text_font(ui_Label28, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 52);
    lv_obj_set_y(ui_Label29, 217);
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "k");
    lv_obj_set_style_text_font(ui_Label29, &ui_font_R81, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label30 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label30, 72);
    lv_obj_set_y(ui_Label30, 218);
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "W");
    lv_obj_set_style_text_font(ui_Label30, &ui_font_R81, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label31 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label31, 90);
    lv_obj_set_y(ui_Label31, 207);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, ".");
    lv_obj_set_style_text_font(ui_Label31, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label32 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label32, 106);
    lv_obj_set_y(ui_Label32, 218);
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "h");
    lv_obj_set_style_text_font(ui_Label32, &ui_font_R81, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label34 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label34, 14);
    lv_obj_set_y(ui_Label34, 214);
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, ".");
    lv_obj_set_style_text_font(ui_Label34, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label35 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label35, 28);
    lv_obj_set_y(ui_Label35, 217);
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "0");
    lv_obj_set_style_text_font(ui_Label35, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label76 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label76, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label76, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label76, -7);
    lv_obj_set_y(ui_Label76, -114);
    lv_obj_set_align(ui_Label76, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label76, "");

    ui_Label108 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label108, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label108, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label108, -97);
    lv_obj_set_y(ui_Label108, -171);
    lv_obj_set_align(ui_Label108, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label108, "°");
    lv_obj_set_style_text_font(ui_Label108, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label111 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label111, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label111, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label111, -16);
    lv_obj_set_y(ui_Label111, 156);
    lv_obj_set_align(ui_Label111, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label111, "0");
    lv_obj_set_style_text_font(ui_Label111, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_protect = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_protect, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_protect, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_protect, 6);
    lv_obj_set_y(ui_protect, 156);
    lv_obj_set_align(ui_protect, LV_ALIGN_CENTER);
    lv_label_set_text(ui_protect, " ");
    lv_obj_set_style_text_color(ui_protect, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_protect, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label112 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label112, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label112, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label112, -50);
    lv_obj_set_y(ui_Label112, 154);
    lv_obj_set_align(ui_Label112, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label112, " ");
    lv_obj_set_style_text_font(ui_Label112, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label113 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label113, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label113, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label113, -90);
    lv_obj_set_y(ui_Label113, 155);
    lv_obj_set_align(ui_Label113, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label113, " ");
    lv_obj_set_style_text_font(ui_Label113, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image32 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image32, &ui_img_37_png);
    lv_obj_set_width(ui_Image32, LV_SIZE_CONTENT);   /// 96
    lv_obj_set_height(ui_Image32, LV_SIZE_CONTENT);    /// 96
    lv_obj_set_x(ui_Image32, 171);
    lv_obj_set_y(ui_Image32, -176);
    lv_obj_set_align(ui_Image32, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image32, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image32, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label94 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label94, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label94, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label94, 0);
    lv_obj_set_y(ui_Label94, 95);
    lv_obj_set_align(ui_Label94, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label94, " ");
    lv_obj_set_style_text_color(ui_Label94, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label94, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label94, &ui_font_hanzi, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label27, -55);
    lv_obj_set_y(ui_Label27, 219);
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "用电量");
    lv_obj_set_style_text_font(ui_Label27, &ui_font_R81, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image31 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image31, &ui_img_46_png);
    lv_obj_set_width(ui_Image31, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_Image31, LV_SIZE_CONTENT);    /// 26
    lv_obj_set_x(ui_Image31, -198);
    lv_obj_set_y(ui_Image31, -214);
    lv_obj_set_align(ui_Image31, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image31, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image31, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image33 = lv_img_create(ui_Screen3);
    lv_img_set_src(ui_Image33, &ui_img_47_png);
    lv_obj_set_width(ui_Image33, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_Image33, LV_SIZE_CONTENT);    /// 27
    lv_obj_set_x(ui_Image33, -155);
    lv_obj_set_y(ui_Image33, -170);
    lv_obj_set_align(ui_Image33, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image33, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image33, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel3 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_Panel3, 223);
    lv_obj_set_height(ui_Panel3, 34);
    lv_obj_set_x(ui_Panel3, 7);
    lv_obj_set_y(ui_Panel3, 213);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label48 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label48, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label48, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label48, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label48, "请检查后重启");//请检查后重启
    lv_obj_set_style_text_color(ui_Label48, lv_color_hex(0xD59B00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label48, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label48, &ui_font_hanzi, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_timer_create(animation_blink_callback, 500, NULL);
    lv_timer_create(colon_blink_callback, 500, NULL);
}
