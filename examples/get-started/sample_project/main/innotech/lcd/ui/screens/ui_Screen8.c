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

    ui_Label47 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label47, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label47, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label47, -217);
    lv_obj_set_y(ui_Label47, -203);
    lv_obj_set_align(ui_Label47, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label47, "0");
    lv_obj_set_style_text_font(ui_Label47, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label48 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label48, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label48, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label48, -190);
    lv_obj_set_y(ui_Label48, -200);
    lv_obj_set_align(ui_Label48, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label48, "1");
    lv_obj_set_style_text_font(ui_Label48, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label49 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label49, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label49, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label49, -164);
    lv_obj_set_y(ui_Label49, -201);
    lv_obj_set_align(ui_Label49, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label49, "2");
    lv_obj_set_style_text_font(ui_Label49, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label50 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label50, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label50, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label50, -136);
    lv_obj_set_y(ui_Label50, -196);
    lv_obj_set_align(ui_Label50, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label50, "3");
    lv_obj_set_style_text_font(ui_Label50, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label51 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label51, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label51, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label51, -106);
    lv_obj_set_y(ui_Label51, -198);
    lv_obj_set_align(ui_Label51, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label51, "4");
    lv_obj_set_style_text_font(ui_Label51, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label52 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label52, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label52, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label52, -79);
    lv_obj_set_y(ui_Label52, -203);
    lv_obj_set_align(ui_Label52, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label52, "5");
    lv_obj_set_style_text_font(ui_Label52, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label53 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label53, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label53, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label53, -51);
    lv_obj_set_y(ui_Label53, -198);
    lv_obj_set_align(ui_Label53, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label53, "6");
    lv_obj_set_style_text_font(ui_Label53, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label54 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label54, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label54, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label54, -20);
    lv_obj_set_y(ui_Label54, -193);
    lv_obj_set_align(ui_Label54, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label54, "7");
    lv_obj_set_style_text_font(ui_Label54, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label55 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label55, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label55, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label55, 13);
    lv_obj_set_y(ui_Label55, -195);
    lv_obj_set_align(ui_Label55, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label55, "8");
    lv_obj_set_style_text_font(ui_Label55, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label56 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label56, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label56, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label56, 45);
    lv_obj_set_y(ui_Label56, -201);
    lv_obj_set_align(ui_Label56, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label56, "9");
    lv_obj_set_style_text_font(ui_Label56, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label57 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label57, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label57, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label57, 82);
    lv_obj_set_y(ui_Label57, -196);
    lv_obj_set_align(ui_Label57, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label57, "周");
    lv_obj_set_style_text_font(ui_Label57, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label58 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label58, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label58, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label58, 121);
    lv_obj_set_y(ui_Label58, -191);
    lv_obj_set_align(ui_Label58, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label58, "一");
    lv_obj_set_style_text_font(ui_Label58, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label59 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label59, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label59, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label59, 172);
    lv_obj_set_y(ui_Label59, -194);
    lv_obj_set_align(ui_Label59, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label59, "二");
    lv_obj_set_style_text_font(ui_Label59, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label60 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label60, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label60, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label60, 207);
    lv_obj_set_y(ui_Label60, -190);
    lv_obj_set_align(ui_Label60, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label60, "三");
    lv_obj_set_style_text_font(ui_Label60, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label61 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label61, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label61, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label61, -215);
    lv_obj_set_y(ui_Label61, -143);
    lv_obj_set_align(ui_Label61, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label61, "四");
    lv_obj_set_style_text_font(ui_Label61, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label62 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label62, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label62, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label62, -170);
    lv_obj_set_y(ui_Label62, -141);
    lv_obj_set_align(ui_Label62, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label62, "五");
    lv_obj_set_style_text_font(ui_Label62, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label63 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label63, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label63, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label63, -126);
    lv_obj_set_y(ui_Label63, -146);
    lv_obj_set_align(ui_Label63, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label63, "六");
    lv_obj_set_style_text_font(ui_Label63, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label65 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label65, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label65, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label65, -82);
    lv_obj_set_y(ui_Label65, -142);
    lv_obj_set_align(ui_Label65, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label65, "日");
    lv_obj_set_style_text_font(ui_Label65, &ui_font_B108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label64 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label64, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label64, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label64, -213);
    lv_obj_set_y(ui_Label64, -85);
    lv_obj_set_align(ui_Label64, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label64, "0");
    lv_obj_set_style_text_font(ui_Label64, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label66 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label66, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label66, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label66, -173);
    lv_obj_set_y(ui_Label66, -88);
    lv_obj_set_align(ui_Label66, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label66, "1");
    lv_obj_set_style_text_font(ui_Label66, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label67 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label67, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label67, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label67, -142);
    lv_obj_set_y(ui_Label67, -84);
    lv_obj_set_align(ui_Label67, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label67, "2");
    lv_obj_set_style_text_font(ui_Label67, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label69 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label69, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label69, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label69, -109);
    lv_obj_set_y(ui_Label69, -85);
    lv_obj_set_align(ui_Label69, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label69, "3");
    lv_obj_set_style_text_font(ui_Label69, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label70 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label70, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label70, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label70, -77);
    lv_obj_set_y(ui_Label70, -84);
    lv_obj_set_align(ui_Label70, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label70, "4");
    lv_obj_set_style_text_font(ui_Label70, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label71 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label71, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label71, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label71, -39);
    lv_obj_set_y(ui_Label71, -86);
    lv_obj_set_align(ui_Label71, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label71, "5");
    lv_obj_set_style_text_font(ui_Label71, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label72 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label72, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label72, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label72, -8);
    lv_obj_set_y(ui_Label72, -86);
    lv_obj_set_align(ui_Label72, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label72, "6");
    lv_obj_set_style_text_font(ui_Label72, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label73 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label73, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label73, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label73, 28);
    lv_obj_set_y(ui_Label73, -85);
    lv_obj_set_align(ui_Label73, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label73, "7");
    lv_obj_set_style_text_font(ui_Label73, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label74 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label74, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label74, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label74, 59);
    lv_obj_set_y(ui_Label74, -86);
    lv_obj_set_align(ui_Label74, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label74, "8");
    lv_obj_set_style_text_font(ui_Label74, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label75 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label75, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label75, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label75, 91);
    lv_obj_set_y(ui_Label75, -82);
    lv_obj_set_align(ui_Label75, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label75, "9");
    lv_obj_set_style_text_font(ui_Label75, &ui_font_R108, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label68 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label68, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label68, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label68, -209);
    lv_obj_set_y(ui_Label68, -16);
    lv_obj_set_align(ui_Label68, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label68, "0");
    lv_obj_set_style_text_font(ui_Label68, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label77 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label77, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label77, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label77, -209);
    lv_obj_set_y(ui_Label77, -16);
    lv_obj_set_align(ui_Label77, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label77, "0");
    lv_obj_set_style_text_font(ui_Label77, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label78 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label78, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label78, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label78, -161);
    lv_obj_set_y(ui_Label78, -15);
    lv_obj_set_align(ui_Label78, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label78, "1");
    lv_obj_set_style_text_font(ui_Label78, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label79 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label79, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label79, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label79, -114);
    lv_obj_set_y(ui_Label79, -17);
    lv_obj_set_align(ui_Label79, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label79, "2");
    lv_obj_set_style_text_font(ui_Label79, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label80 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label80, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label80, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label80, -65);
    lv_obj_set_y(ui_Label80, -13);
    lv_obj_set_align(ui_Label80, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label80, "3");
    lv_obj_set_style_text_font(ui_Label80, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label81 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label81, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label81, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label81, -15);
    lv_obj_set_y(ui_Label81, -19);
    lv_obj_set_align(ui_Label81, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label81, "4");
    lv_obj_set_style_text_font(ui_Label81, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label82 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label82, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label82, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label82, 33);
    lv_obj_set_y(ui_Label82, -17);
    lv_obj_set_align(ui_Label82, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label82, "5");
    lv_obj_set_style_text_font(ui_Label82, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label83 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label83, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label83, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label83, 86);
    lv_obj_set_y(ui_Label83, -19);
    lv_obj_set_align(ui_Label83, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label83, "6");
    lv_obj_set_style_text_font(ui_Label83, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label84 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label84, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label84, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label84, 139);
    lv_obj_set_y(ui_Label84, -18);
    lv_obj_set_align(ui_Label84, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label84, "7");
    lv_obj_set_style_text_font(ui_Label84, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label85 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label85, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label85, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label85, 193);
    lv_obj_set_y(ui_Label85, -21);
    lv_obj_set_align(ui_Label85, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label85, "8");
    lv_obj_set_style_text_font(ui_Label85, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label86 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label86, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label86, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label86, -212);
    lv_obj_set_y(ui_Label86, 76);
    lv_obj_set_align(ui_Label86, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label86, "9");
    lv_obj_set_style_text_font(ui_Label86, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label87 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label87, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label87, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label87, -158);
    lv_obj_set_y(ui_Label87, 77);
    lv_obj_set_align(ui_Label87, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label87, "0");
    lv_obj_set_style_text_color(ui_Label87, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label87, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label87, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label88 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label88, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label88, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label88, -104);
    lv_obj_set_y(ui_Label88, 77);
    lv_obj_set_align(ui_Label88, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label88, "1");
    lv_obj_set_style_text_color(ui_Label88, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label88, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label88, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label89 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label89, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label89, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label89, -51);
    lv_obj_set_y(ui_Label89, 78);
    lv_obj_set_align(ui_Label89, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label89, "2");
    lv_obj_set_style_text_color(ui_Label89, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label89, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label89, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label90 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label90, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label90, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label90, 0);
    lv_obj_set_y(ui_Label90, 77);
    lv_obj_set_align(ui_Label90, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label90, "3");
    lv_obj_set_style_text_color(ui_Label90, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label90, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label90, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label91 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label91, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label91, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label91, 50);
    lv_obj_set_y(ui_Label91, 73);
    lv_obj_set_align(ui_Label91, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label91, "4");
    lv_obj_set_style_text_color(ui_Label91, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label91, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label91, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label92 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label92, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label92, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label92, 99);
    lv_obj_set_y(ui_Label92, 75);
    lv_obj_set_align(ui_Label92, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label92, "5");
    lv_obj_set_style_text_color(ui_Label92, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label92, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label92, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label93 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label93, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label93, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label93, 147);
    lv_obj_set_y(ui_Label93, 76);
    lv_obj_set_align(ui_Label93, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label93, "6");
    lv_obj_set_style_text_color(ui_Label93, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label93, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label93, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label94 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label94, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label94, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label94, 204);
    lv_obj_set_y(ui_Label94, 73);
    lv_obj_set_align(ui_Label94, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label94, "7");
    lv_obj_set_style_text_color(ui_Label94, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label94, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label94, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label95 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label95, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label95, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label95, -210);
    lv_obj_set_y(ui_Label95, 163);
    lv_obj_set_align(ui_Label95, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label95, "8");
    lv_obj_set_style_text_color(ui_Label95, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label95, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label95, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label96 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label96, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label96, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label96, -158);
    lv_obj_set_y(ui_Label96, 77);
    lv_obj_set_align(ui_Label96, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label96, "0");
    lv_obj_set_style_text_color(ui_Label96, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label96, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label96, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label97 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label97, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label97, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label97, -153);
    lv_obj_set_y(ui_Label97, 162);
    lv_obj_set_align(ui_Label97, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label97, "9");
    lv_obj_set_style_text_color(ui_Label97, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label97, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label97, &ui_font_B216, LV_PART_MAIN | LV_STATE_DEFAULT);

}