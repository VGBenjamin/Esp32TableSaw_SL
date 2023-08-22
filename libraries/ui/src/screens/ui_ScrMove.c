// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Esp32TableSaw_SL

#include "../ui.h"

void ui_ScrMove_screen_init(void)
{
    ui_ScrMove = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrMove, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel2 = lv_obj_create(ui_ScrMove);
    lv_obj_set_height(ui_Panel2, 40);
    lv_obj_set_width(ui_Panel2, lv_pct(100));
    lv_obj_set_align(ui_Panel2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x2A2929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPosition = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_lblPosition, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPosition, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblPosition, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPosition, "0");
    lv_obj_set_style_text_color(ui_lblPosition, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPosition, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_ScrMove);
    lv_obj_set_height(ui_Panel5, 280);
    lv_obj_set_width(ui_Panel5, lv_pct(100));
    lv_obj_set_align(ui_Panel5, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_Panel5, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_Panel5, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x2A2929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn1 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn1, lv_pct(22));
    lv_obj_set_height(ui_Btn1, lv_pct(16));
    lv_obj_set_align(ui_Btn1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn1, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Btn1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "1");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn2 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn2, lv_pct(22));
    lv_obj_set_height(ui_Btn2, lv_pct(16));
    lv_obj_set_align(ui_Btn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn2, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Btn2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "2");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn3 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn3, lv_pct(22));
    lv_obj_set_height(ui_Btn3, lv_pct(16));
    lv_obj_set_align(ui_Btn3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn3, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Btn3);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "3");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnDel = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_BtnDel, lv_pct(22));
    lv_obj_set_height(ui_BtnDel, lv_pct(16));
    lv_obj_set_align(ui_BtnDel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnDel, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnDel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnDel, lv_color_hex(0xCA0C18), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnDel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_BtnDel);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "DEL");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn4 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn4, lv_pct(22));
    lv_obj_set_height(ui_Btn4, lv_pct(16));
    lv_obj_set_align(ui_Btn4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn4, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Btn4);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "4");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn5 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn5, lv_pct(22));
    lv_obj_set_height(ui_Btn5, lv_pct(16));
    lv_obj_set_align(ui_Btn5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn5, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Btn5);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "5");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn6 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn6, lv_pct(22));
    lv_obj_set_height(ui_Btn6, lv_pct(16));
    lv_obj_set_align(ui_Btn6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn6, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Btn6);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "6");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn05 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn05, lv_pct(22));
    lv_obj_set_height(ui_Btn05, lv_pct(16));
    lv_obj_set_align(ui_Btn05, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn05, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn05, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn05, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn05, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Btn05);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label9, ".5");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn7 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn7, lv_pct(22));
    lv_obj_set_height(ui_Btn7, lv_pct(16));
    lv_obj_set_align(ui_Btn7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn7, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Btn7);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "7");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn8 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn8, lv_pct(22));
    lv_obj_set_height(ui_Btn8, lv_pct(16));
    lv_obj_set_align(ui_Btn8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn8, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Btn8);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "8");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn9 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn9, lv_pct(22));
    lv_obj_set_height(ui_Btn9, lv_pct(16));
    lv_obj_set_align(ui_Btn9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn9, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Btn9);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "9");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn025 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn025, lv_pct(22));
    lv_obj_set_height(ui_Btn025, lv_pct(16));
    lv_obj_set_align(ui_Btn025, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn025, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn025, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn025, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn025, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Btn025);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label13, ".25");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnComma = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_BtnComma, lv_pct(22));
    lv_obj_set_height(ui_BtnComma, lv_pct(16));
    lv_obj_set_align(ui_BtnComma, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnComma, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnComma, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnComma, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnComma, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_BtnComma);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, ",");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn0 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn0, lv_pct(22));
    lv_obj_set_height(ui_Btn0, lv_pct(16));
    lv_obj_set_align(ui_Btn0, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn0, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn0, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn0, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Btn0);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "0");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn033 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn033, lv_pct(22));
    lv_obj_set_height(ui_Btn033, lv_pct(16));
    lv_obj_set_align(ui_Btn033, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Btn033, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn033, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn033, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn033, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Btn033);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, ".33");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Btn0125 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Btn0125, lv_pct(22));
    lv_obj_set_height(ui_Btn0125, lv_pct(16));
    lv_obj_set_align(ui_Btn0125, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Btn0125, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Btn0125, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Btn0125, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Btn0125, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Btn0125);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, ".125");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnGo = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_BtnGo, lv_pct(73));
    lv_obj_set_height(ui_BtnGo, lv_pct(22));
    lv_obj_set_align(ui_BtnGo, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_BtnGo, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnGo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnGo, lv_color_hex(0x26CB0A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnGo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_BtnGo);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "GO");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSettings = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_BtnSettings, lv_pct(22));
    lv_obj_set_height(ui_BtnSettings, lv_pct(22));
    lv_obj_set_align(ui_BtnSettings, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_BtnSettings, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSettings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnSettings, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnSettings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_BtnSettings);
    lv_img_set_src(ui_Image2, &ui_img_478973782);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Label1, ui_event_Label1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn1, ui_event_Btn1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn2, ui_event_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn3, ui_event_Btn3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnDel, ui_event_BtnDel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn4, ui_event_Btn4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn5, ui_event_Btn5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn6, ui_event_Btn6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn05, ui_event_Btn05, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn7, ui_event_Btn7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn8, ui_event_Btn8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn9, ui_event_Btn9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn025, ui_event_Btn025, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnComma, ui_event_BtnComma, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn0, ui_event_Btn0, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn033, ui_event_Btn033, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Btn0125, ui_event_Btn0125, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnGo, ui_event_BtnGo, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSettings, ui_event_BtnSettings, LV_EVENT_ALL, NULL);

}
