/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_Load_scrn_1(lv_ui *ui)
{
    //Write codes Load_scrn_1
    ui->Load_scrn_1 = lv_obj_create(NULL);
    lv_obj_set_size(ui->Load_scrn_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Load_scrn_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Load_scrn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Load_scrn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_label_1
    ui->Load_scrn_1_label_1 = lv_label_create(ui->Load_scrn_1);
    lv_label_set_text(ui->Load_scrn_1_label_1, "Press \"START\" If you are ready to move.....\n\n\n\n\n");
    lv_label_set_long_mode(ui->Load_scrn_1_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Load_scrn_1_label_1, 247, 233);
    lv_obj_set_size(ui->Load_scrn_1_label_1, 787, 71);

    //Write style for Load_scrn_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Load_scrn_1_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Load_scrn_1_label_1, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Load_scrn_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Load_scrn_1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Load_scrn_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Load_scrn_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_1_label_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_1_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Load_scrn_1_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_btn_1
    ui->Load_scrn_1_btn_1 = lv_btn_create(ui->Load_scrn_1);
    ui->Load_scrn_1_btn_1_label = lv_label_create(ui->Load_scrn_1_btn_1);
    lv_label_set_text(ui->Load_scrn_1_btn_1_label, "                  START");
    lv_label_set_long_mode(ui->Load_scrn_1_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Load_scrn_1_btn_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Load_scrn_1_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Load_scrn_1_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->Load_scrn_1_btn_1, 500, 345);
    lv_obj_set_size(ui->Load_scrn_1_btn_1, 345, 100);

    //Write style for Load_scrn_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Load_scrn_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_1_btn_1, lv_color_hex(0x41606E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Load_scrn_1_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Load_scrn_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Load_scrn_1_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Load_scrn_1_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_btn_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Load_scrn_1_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Load_scrn_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Load_scrn_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Load_scrn_1_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Load_scrn_1_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Load_scrn_1_btn_1, lv_color_hex(0xD6E8AC), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Load_scrn_1_btn_1, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Load_scrn_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Load_scrn_1_btn_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_img_1
    ui->Load_scrn_1_img_1 = lv_img_create(ui->Load_scrn_1);
    lv_obj_add_flag(ui->Load_scrn_1_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Load_scrn_1_img_1, &_Ok_Enter_min_alpha_65x55);
    lv_img_set_pivot(ui->Load_scrn_1_img_1, 50,50);
    lv_img_set_angle(ui->Load_scrn_1_img_1, 0);
    lv_obj_set_pos(ui->Load_scrn_1_img_1, 696, 368);
    lv_obj_set_size(ui->Load_scrn_1_img_1, 65, 55);

    //Write style for Load_scrn_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Load_scrn_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Load_scrn_1_img_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Load_scrn_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Load_scrn_1_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_cont_1
    ui->Load_scrn_1_cont_1 = lv_obj_create(ui->Load_scrn_1);
    lv_obj_set_pos(ui->Load_scrn_1_cont_1, 20, 15);
    lv_obj_set_size(ui->Load_scrn_1_cont_1, 265, 110);
    lv_obj_set_scrollbar_mode(ui->Load_scrn_1_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Load_scrn_1_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Load_scrn_1_cont_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Load_scrn_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Load_scrn_1_cont_1, lv_color_hex(0x000406), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Load_scrn_1_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_cont_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Load_scrn_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_1_cont_1, lv_color_hex(0x41606E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_1_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Load_scrn_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Load_scrn_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Load_scrn_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Load_scrn_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_cont_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Load_scrn_1_cont_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Load_scrn_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Load_scrn_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Load_scrn_1_cont_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Load_scrn_1_cont_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_img_2
    ui->Load_scrn_1_img_2 = lv_img_create(ui->Load_scrn_1_cont_1);
    lv_obj_add_flag(ui->Load_scrn_1_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Load_scrn_1_img_2, &_Backthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Load_scrn_1_img_2, 50,50);
    lv_img_set_angle(ui->Load_scrn_1_img_2, 0);
    lv_obj_set_pos(ui->Load_scrn_1_img_2, 150, 20);
    lv_obj_set_size(ui->Load_scrn_1_img_2, 65, 55);

    //Write style for Load_scrn_1_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Load_scrn_1_img_2, 233, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Load_scrn_1_img_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Load_scrn_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Load_scrn_1_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_1_imgbtn_1
    ui->Load_scrn_1_imgbtn_1 = lv_imgbtn_create(ui->Load_scrn_1_cont_1);
    lv_obj_add_flag(ui->Load_scrn_1_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->Load_scrn_1_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_Backbutton_min_alpha_112x103, NULL);
    lv_imgbtn_set_src(ui->Load_scrn_1_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_Backbutton_Pressed_min_alpha_112x103, NULL);
    ui->Load_scrn_1_imgbtn_1_label = lv_label_create(ui->Load_scrn_1_imgbtn_1);
    lv_label_set_text(ui->Load_scrn_1_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->Load_scrn_1_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Load_scrn_1_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Load_scrn_1_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->Load_scrn_1_imgbtn_1, 8, -2);
    lv_obj_set_size(ui->Load_scrn_1_imgbtn_1, 112, 103);

    //Write style for Load_scrn_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->Load_scrn_1_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Load_scrn_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Load_scrn_1_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Load_scrn_1_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Load_scrn_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->Load_scrn_1_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->Load_scrn_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for Load_scrn_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->Load_scrn_1_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->Load_scrn_1_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for Load_scrn_1_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->Load_scrn_1_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->Load_scrn_1_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //The custom code of Load_scrn_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->Load_scrn_1);

    //Init events for screen.
    events_init_Load_scrn_1(ui);
}
