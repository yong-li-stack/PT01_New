// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen11_screen_init(void)
{
    ui_Screen11 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image33 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image33, &ui_img_28_png);
    lv_obj_set_width(ui_Image33, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image33, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image33, -168);
    lv_obj_set_y(ui_Image33, -169);
    lv_obj_set_align(ui_Image33, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image33, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image33, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image34 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image34, &ui_img_29_png);
    lv_obj_set_width(ui_Image34, LV_SIZE_CONTENT);   /// 127
    lv_obj_set_height(ui_Image34, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image34, 0);
    lv_obj_set_y(ui_Image34, -164);
    lv_obj_set_align(ui_Image34, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image34, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image34, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image35 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image35, &ui_img_30_png);
    lv_obj_set_width(ui_Image35, LV_SIZE_CONTENT);   /// 127
    lv_obj_set_height(ui_Image35, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image35, 158);
    lv_obj_set_y(ui_Image35, -156);
    lv_obj_set_align(ui_Image35, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image35, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image35, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image36 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image36, &ui_img_31_png);
    lv_obj_set_width(ui_Image36, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image36, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image36, -166);
    lv_obj_set_y(ui_Image36, -3);
    lv_obj_set_align(ui_Image36, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image36, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image36, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image37 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image37, &ui_img_32_png);
    lv_obj_set_width(ui_Image37, LV_SIZE_CONTENT);   /// 135
    lv_obj_set_height(ui_Image37, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_align(ui_Image37, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image37, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image37, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image38 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image38, &ui_img_33_png);
    lv_obj_set_width(ui_Image38, LV_SIZE_CONTENT);   /// 135
    lv_obj_set_height(ui_Image38, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image38, 153);
    lv_obj_set_y(ui_Image38, 9);
    lv_obj_set_align(ui_Image38, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image38, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image38, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image39 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image39, &ui_img_34_png);
    lv_obj_set_width(ui_Image39, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image39, LV_SIZE_CONTENT);    /// 103
    lv_obj_set_x(ui_Image39, -154);
    lv_obj_set_y(ui_Image39, 145);
    lv_obj_set_align(ui_Image39, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image39, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image39, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image40 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image40, &ui_img_35_png);
    lv_obj_set_width(ui_Image40, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image40, LV_SIZE_CONTENT);    /// 105
    lv_obj_set_x(ui_Image40, 6);
    lv_obj_set_y(ui_Image40, 139);
    lv_obj_set_align(ui_Image40, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image40, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image40, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image41 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image41, &ui_img_36_png);
    lv_obj_set_width(ui_Image41, LV_SIZE_CONTENT);   /// 95
    lv_obj_set_height(ui_Image41, LV_SIZE_CONTENT);    /// 95
    lv_obj_set_x(ui_Image41, 141);
    lv_obj_set_y(ui_Image41, 140);
    lv_obj_set_align(ui_Image41, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image41, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image41, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}