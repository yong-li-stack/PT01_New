// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen8_screen_init(void)
{
    ui_Screen8 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image22 = lv_img_create(ui_Screen8);
    lv_img_set_src(ui_Image22, &ui_img_14_png);
    lv_obj_set_width(ui_Image22, LV_SIZE_CONTENT);   /// 254
    lv_obj_set_height(ui_Image22, LV_SIZE_CONTENT);    /// 71
    lv_obj_set_x(ui_Image22, 0);
    lv_obj_set_y(ui_Image22, -70);
    lv_obj_set_align(ui_Image22, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image22, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image22, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label13 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 16);
    lv_obj_set_y(ui_Label13, 220);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "正在升级 . . .");
    lv_obj_set_style_text_font(ui_Label13, &ui_font_hanzi, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image23 = lv_img_create(ui_Screen8);
    lv_img_set_src(ui_Image23, &ui_img_7_png);
    lv_obj_set_width(ui_Image23, LV_SIZE_CONTENT);   /// 90
    lv_obj_set_height(ui_Image23, LV_SIZE_CONTENT);    /// 9
    lv_obj_set_x(ui_Image23, -132);
    lv_obj_set_y(ui_Image23, 7);
    lv_obj_set_align(ui_Image23, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image23, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image23, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image24 = lv_img_create(ui_Screen8);
    lv_img_set_src(ui_Image24, &ui_img_6_png);
    lv_obj_set_width(ui_Image24, LV_SIZE_CONTENT);   /// 357
    lv_obj_set_height(ui_Image24, LV_SIZE_CONTENT);    /// 9
    lv_obj_set_x(ui_Image24, -2);
    lv_obj_set_y(ui_Image24, 7);
    lv_obj_set_align(ui_Image24, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image24, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image24, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
