// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen12_screen_init(void)
{
    ui_Screen12 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image42 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image42, &ui_img_37_png);
    lv_obj_set_width(ui_Image42, LV_SIZE_CONTENT);   /// 96
    lv_obj_set_height(ui_Image42, LV_SIZE_CONTENT);    /// 96
    lv_obj_set_x(ui_Image42, -169);
    lv_obj_set_y(ui_Image42, -161);
    lv_obj_set_align(ui_Image42, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image42, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image42, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image43 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image43, &ui_img_38_png);
    lv_obj_set_width(ui_Image43, LV_SIZE_CONTENT);   /// 143
    lv_obj_set_height(ui_Image43, LV_SIZE_CONTENT);    /// 88
    lv_obj_set_x(ui_Image43, -3);
    lv_obj_set_y(ui_Image43, -159);
    lv_obj_set_align(ui_Image43, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image43, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image43, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image44 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image44, &ui_img_39_png);
    lv_obj_set_width(ui_Image44, LV_SIZE_CONTENT);   /// 143
    lv_obj_set_height(ui_Image44, LV_SIZE_CONTENT);    /// 88
    lv_obj_set_x(ui_Image44, 152);
    lv_obj_set_y(ui_Image44, -155);
    lv_obj_set_align(ui_Image44, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image44, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image44, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image45 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image45, &ui_img_40_png);
    lv_obj_set_width(ui_Image45, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image45, LV_SIZE_CONTENT);    /// 85
    lv_obj_set_x(ui_Image45, -165);
    lv_obj_set_y(ui_Image45, -39);
    lv_obj_set_align(ui_Image45, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image45, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image45, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image46 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image46, &ui_img_41_png);
    lv_obj_set_width(ui_Image46, LV_SIZE_CONTENT);   /// 104
    lv_obj_set_height(ui_Image46, LV_SIZE_CONTENT);    /// 120
    lv_obj_set_x(ui_Image46, 3);
    lv_obj_set_y(ui_Image46, -18);
    lv_obj_set_align(ui_Image46, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image46, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image46, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image47 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image47, &ui_img_42_png);
    lv_obj_set_width(ui_Image47, LV_SIZE_CONTENT);   /// 112
    lv_obj_set_height(ui_Image47, LV_SIZE_CONTENT);    /// 96
    lv_obj_set_x(ui_Image47, 158);
    lv_obj_set_y(ui_Image47, -9);
    lv_obj_set_align(ui_Image47, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image47, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image47, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image48 = lv_img_create(ui_Screen12);
    lv_img_set_src(ui_Image48, &ui_img_43_png);
    lv_obj_set_width(ui_Image48, LV_SIZE_CONTENT);   /// 112
    lv_obj_set_height(ui_Image48, LV_SIZE_CONTENT);    /// 112
    lv_obj_set_x(ui_Image48, -142);
    lv_obj_set_y(ui_Image48, 123);
    lv_obj_set_align(ui_Image48, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image48, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image48, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
