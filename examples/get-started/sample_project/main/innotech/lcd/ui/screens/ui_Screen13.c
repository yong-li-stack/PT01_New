// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen13_screen_init(void)
{
    ui_Screen13 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image10 = lv_img_create(ui_Screen13);
    lv_img_set_src(ui_Image10, &ui_img_313_png);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);   /// 349
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);    /// 72
    lv_obj_set_x(ui_Image10, 0);
    lv_obj_set_y(ui_Image10, 212);
    lv_obj_set_align(ui_Image10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image51 = lv_img_create(ui_Screen13);
    lv_img_set_src(ui_Image51, &ui_img_14_png);
    lv_obj_set_width(ui_Image51, LV_SIZE_CONTENT);   /// 254
    lv_obj_set_height(ui_Image51, LV_SIZE_CONTENT);    /// 71
    lv_obj_set_x(ui_Image51, 0);
    lv_obj_set_y(ui_Image51, -70);
    lv_obj_set_align(ui_Image51, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image51, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image51, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
