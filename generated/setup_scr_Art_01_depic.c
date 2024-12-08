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



void setup_scr_Art_01_depic(lv_ui *ui)
{
    //Write codes Art_01_depic
    ui->Art_01_depic = lv_obj_create(NULL);
    lv_obj_set_size(ui->Art_01_depic, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Art_01_depic, LV_SCROLLBAR_MODE_OFF);

    //Write style for Art_01_depic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_01_depic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_cont_1
    ui->Art_01_depic_cont_1 = lv_obj_create(ui->Art_01_depic);
    lv_obj_set_pos(ui->Art_01_depic_cont_1, -1, 0);
    lv_obj_set_size(ui->Art_01_depic_cont_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Art_01_depic_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Art_01_depic_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_01_depic_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_01_depic_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_1
    ui->Art_01_depic_img_1 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_1, &_background_min_alpha_1280x720);
    lv_img_set_pivot(ui->Art_01_depic_img_1, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_1, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_1, 0, 0);
    lv_obj_set_size(ui->Art_01_depic_img_1, 1280, 720);

    //Write style for Art_01_depic_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_1, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_01_depic_img_1, lv_color_hex(0xFF00B2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_1, 186, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_btn_1
    ui->Art_01_depic_btn_1 = lv_btn_create(ui->Art_01_depic_cont_1);
    ui->Art_01_depic_btn_1_label = lv_label_create(ui->Art_01_depic_btn_1);
    lv_label_set_text(ui->Art_01_depic_btn_1_label, "BACK");
    lv_label_set_long_mode(ui->Art_01_depic_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_01_depic_btn_1_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_01_depic_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_01_depic_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_01_depic_btn_1, 450, 375);
    lv_obj_set_size(ui->Art_01_depic_btn_1, 215, 90);

    //Write style for Art_01_depic_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_01_depic_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_btn_1, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_btn_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_01_depic_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_btn_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_01_depic_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_01_depic_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_01_depic_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_01_depic_btn_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_01_depic_btn_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_btn_1, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_btn_1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_btn_2
    ui->Art_01_depic_btn_2 = lv_btn_create(ui->Art_01_depic_cont_1);
    ui->Art_01_depic_btn_2_label = lv_label_create(ui->Art_01_depic_btn_2);
    lv_label_set_text(ui->Art_01_depic_btn_2_label, "1. HISTORY");
    lv_label_set_long_mode(ui->Art_01_depic_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_01_depic_btn_2_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_01_depic_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_01_depic_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_01_depic_btn_2, 770, 375);
    lv_obj_set_size(ui->Art_01_depic_btn_2, 215, 90);

    //Write style for Art_01_depic_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_01_depic_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_btn_2, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_btn_2, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_01_depic_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_btn_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_btn_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_01_depic_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_01_depic_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_01_depic_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_01_depic_btn_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_01_depic_btn_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_btn_2, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_btn_2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_3
    ui->Art_01_depic_img_3 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_3, &_One_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_01_depic_img_3, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_3, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_3, 800, 393);
    lv_obj_set_size(ui->Art_01_depic_img_3, 65, 55);

    //Write style for Art_01_depic_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_01_depic_img_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_btn_3
    ui->Art_01_depic_btn_3 = lv_btn_create(ui->Art_01_depic_cont_1);
    ui->Art_01_depic_btn_3_label = lv_label_create(ui->Art_01_depic_btn_3);
    lv_label_set_text(ui->Art_01_depic_btn_3_label, "     2. INTERPRETATION");
    lv_label_set_long_mode(ui->Art_01_depic_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_01_depic_btn_3_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_01_depic_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_01_depic_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_01_depic_btn_3, 450, 510);
    lv_obj_set_size(ui->Art_01_depic_btn_3, 215, 90);

    //Write style for Art_01_depic_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_01_depic_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_btn_3, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_btn_3, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_btn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_01_depic_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_btn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_btn_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_btn_3, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_btn_3, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_01_depic_btn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_01_depic_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_01_depic_btn_3, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_01_depic_btn_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_01_depic_btn_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_btn_3, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_btn_3, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_4
    ui->Art_01_depic_img_4 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_4, &_Two_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_01_depic_img_4, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_4, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_4, 447, 535);
    lv_obj_set_size(ui->Art_01_depic_img_4, 65, 55);

    //Write style for Art_01_depic_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_4, 252, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_01_depic_img_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_btn_4
    ui->Art_01_depic_btn_4 = lv_btn_create(ui->Art_01_depic_cont_1);
    ui->Art_01_depic_btn_4_label = lv_label_create(ui->Art_01_depic_btn_4);
    lv_label_set_text(ui->Art_01_depic_btn_4_label, "      NEXT ART");
    lv_label_set_long_mode(ui->Art_01_depic_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_01_depic_btn_4_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_01_depic_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_01_depic_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_01_depic_btn_4, 770, 510);
    lv_obj_set_size(ui->Art_01_depic_btn_4, 215, 90);

    //Write style for Art_01_depic_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_01_depic_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_btn_4, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_btn_4, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_01_depic_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_btn_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_btn_4, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_01_depic_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_01_depic_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_01_depic_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_01_depic_btn_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_01_depic_btn_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_btn_4, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_btn_4, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_6
    ui->Art_01_depic_img_6 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_6, &_Nextthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_01_depic_img_6, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_6, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_6, 801, 529);
    lv_obj_set_size(ui->Art_01_depic_img_6, 65, 55);

    //Write style for Art_01_depic_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_6, 251, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_01_depic_img_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_7
    ui->Art_01_depic_img_7 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_7, &_Backthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_01_depic_img_7, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_7, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_7, 490, 389);
    lv_obj_set_size(ui->Art_01_depic_img_7, 65, 55);

    //Write style for Art_01_depic_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_7, 254, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_01_depic_img_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_img_8
    ui->Art_01_depic_img_8 = lv_img_create(ui->Art_01_depic_cont_1);
    lv_obj_add_flag(ui->Art_01_depic_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_01_depic_img_8, &_Art_01_depic_min_alpha_318x352);
    lv_img_set_pivot(ui->Art_01_depic_img_8, 50,50);
    lv_img_set_angle(ui->Art_01_depic_img_8, 0);
    lv_obj_set_pos(ui->Art_01_depic_img_8, 15, 346);
    lv_obj_set_size(ui->Art_01_depic_img_8, 318, 352);

    //Write style for Art_01_depic_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_01_depic_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_01_depic_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_01_depic_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_label_1
    ui->Art_01_depic_label_1 = lv_label_create(ui->Art_01_depic_cont_1);
    lv_label_set_text(ui->Art_01_depic_label_1, "DEPICTION - NATARAJA");
    lv_label_set_long_mode(ui->Art_01_depic_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Art_01_depic_label_1, 440, 2);
    lv_obj_set_size(ui->Art_01_depic_label_1, 438, 41);

    //Write style for Art_01_depic_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_01_depic_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_label_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_label_1, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Art_01_depic_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_01_depic_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_label_1, lv_color_hex(0x860566), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_label_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_01_depic_label_2
    ui->Art_01_depic_label_2 = lv_label_create(ui->Art_01_depic_cont_1);
    lv_label_set_text(ui->Art_01_depic_label_2, "The sculpture is symbolic of Shiva as the lord of dance and dramatic arts, with its style and proportions made according to Hindu texts on arts. The two most common forms of Shiva's dance are the Lasya (the gentle form of dance), associated with the creation of the world, and the Ananda Tandava (dance of bliss, the vigorous form of dance), associated with the destruction of weary worldview, weary perspectives and lifestyles. In essence, the Lasya and the Tandava are just two aspects of Shiva’s nature: for he destroys in order to create, tearing down to build again.\n\nIt typically shows Shiva dancing in one of the Natya Shastra poses, holding Agni (fire) in his left back hand, the front hand in gajahasta (elephant hand) or dandahasta (stick hand) mudra, the front right hand with a wrapped snake that is in abhaya (fear not) mudra while pointing to a Sutra text, and the back hand holding a musical instrument, usually a Udukai.");
    lv_label_set_long_mode(ui->Art_01_depic_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Art_01_depic_label_2, 12, 44);
    lv_obj_set_size(ui->Art_01_depic_label_2, 1257, 290);

    //Write style for Art_01_depic_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_01_depic_label_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_01_depic_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_01_depic_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_01_depic_label_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_01_depic_label_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_01_depic_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_01_depic_label_2, &lv_font_Abel_regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_01_depic_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Art_01_depic_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_01_depic_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_01_depic_label_2, 244, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_01_depic_label_2, lv_color_hex(0x7e0062), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_01_depic_label_2, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_01_depic_label_2, lv_color_hex(0x092033), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_01_depic_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_01_depic_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Art_01_depic.


    //Update current screen layout.
    lv_obj_update_layout(ui->Art_01_depic);

    //Init events for screen.
    events_init_Art_01_depic(ui);
}
