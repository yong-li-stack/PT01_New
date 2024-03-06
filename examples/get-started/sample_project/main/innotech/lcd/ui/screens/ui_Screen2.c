// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, -220);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "正在配网");
    lv_obj_set_style_text_font(ui_Label1, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image4, &ui_img_9_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 31
    lv_obj_set_x(ui_Image4, 0);
    lv_obj_set_y(ui_Image4, 220);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image5 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image5, &ui_img_15_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 148
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 115
    lv_obj_set_x(ui_Image5, 110);
    lv_obj_set_y(ui_Image5, 0);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image6 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image6, &ui_img_2_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 55
    lv_obj_set_x(ui_Image6, -54);
    lv_obj_set_y(ui_Image6, 0);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image7 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image7, &ui_img_3_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 55
    lv_obj_set_x(ui_Image7, -30);
    lv_obj_set_y(ui_Image7, 0);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image8 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image8, &ui_img_4_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 55
    lv_obj_set_x(ui_Image8, -8);
    lv_obj_set_y(ui_Image8, 0);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image9 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image9, &ui_img_1_png);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 144
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 234
    lv_obj_set_x(ui_Image9, -143);
    lv_obj_set_y(ui_Image9, -7);
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
