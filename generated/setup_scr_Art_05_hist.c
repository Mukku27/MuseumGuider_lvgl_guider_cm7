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



void setup_scr_Art_05_hist(lv_ui *ui)
{
    //Write codes Art_05_hist
    ui->Art_05_hist = lv_obj_create(NULL);
    lv_obj_set_size(ui->Art_05_hist, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Art_05_hist, LV_SCROLLBAR_MODE_OFF);

    //Write style for Art_05_hist, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_05_hist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_cont_1
    ui->Art_05_hist_cont_1 = lv_obj_create(ui->Art_05_hist);
    lv_obj_set_pos(ui->Art_05_hist_cont_1, -1, 0);
    lv_obj_set_size(ui->Art_05_hist_cont_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Art_05_hist_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Art_05_hist_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_05_hist_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_05_hist_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_img_1
    ui->Art_05_hist_img_1 = lv_img_create(ui->Art_05_hist_cont_1);
    lv_obj_add_flag(ui->Art_05_hist_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_05_hist_img_1, &_background_min_alpha_1280x720);
    lv_img_set_pivot(ui->Art_05_hist_img_1, 50,50);
    lv_img_set_angle(ui->Art_05_hist_img_1, 0);
    lv_obj_set_pos(ui->Art_05_hist_img_1, 0, 0);
    lv_obj_set_size(ui->Art_05_hist_img_1, 1280, 720);

    //Write style for Art_05_hist_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_05_hist_img_1, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_05_hist_img_1, lv_color_hex(0xFF00B2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_05_hist_img_1, 186, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_05_hist_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_btn_1
    ui->Art_05_hist_btn_1 = lv_btn_create(ui->Art_05_hist_cont_1);
    ui->Art_05_hist_btn_1_label = lv_label_create(ui->Art_05_hist_btn_1);
    lv_label_set_text(ui->Art_05_hist_btn_1_label, "BACK");
    lv_label_set_long_mode(ui->Art_05_hist_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_05_hist_btn_1_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_05_hist_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_05_hist_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_05_hist_btn_1, 450, 375);
    lv_obj_set_size(ui->Art_05_hist_btn_1, 215, 90);

    //Write style for Art_05_hist_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_05_hist_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_btn_1, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_btn_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_05_hist_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_05_hist_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_05_hist_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_05_hist_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_btn_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_05_hist_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_05_hist_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_05_hist_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_05_hist_btn_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_05_hist_btn_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_05_hist_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_05_hist_btn_1, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_05_hist_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_05_hist_btn_1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_img_3
    ui->Art_05_hist_img_3 = lv_img_create(ui->Art_05_hist_cont_1);
    lv_obj_add_flag(ui->Art_05_hist_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_05_hist_img_3, &_Backthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_05_hist_img_3, 50,50);
    lv_img_set_angle(ui->Art_05_hist_img_3, 0);
    lv_obj_set_pos(ui->Art_05_hist_img_3, 497, 392);
    lv_obj_set_size(ui->Art_05_hist_img_3, 65, 55);

    //Write style for Art_05_hist_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_05_hist_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_05_hist_img_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_05_hist_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_05_hist_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_btn_2
    ui->Art_05_hist_btn_2 = lv_btn_create(ui->Art_05_hist_cont_1);
    ui->Art_05_hist_btn_2_label = lv_label_create(ui->Art_05_hist_btn_2);
    lv_label_set_text(ui->Art_05_hist_btn_2_label, "1. DESCRIPTION");
    lv_label_set_long_mode(ui->Art_05_hist_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_05_hist_btn_2_label, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_05_hist_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_05_hist_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_05_hist_btn_2, 770, 375);
    lv_obj_set_size(ui->Art_05_hist_btn_2, 215, 90);

    //Write style for Art_05_hist_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_05_hist_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_btn_2, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_btn_2, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_05_hist_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_05_hist_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_05_hist_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_05_hist_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_btn_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_btn_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_05_hist_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_05_hist_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_05_hist_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_05_hist_btn_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_05_hist_btn_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_05_hist_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_05_hist_btn_2, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_05_hist_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_05_hist_btn_2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_img_4
    ui->Art_05_hist_img_4 = lv_img_create(ui->Art_05_hist_cont_1);
    lv_obj_add_flag(ui->Art_05_hist_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_05_hist_img_4, &_One_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_05_hist_img_4, 50,50);
    lv_img_set_angle(ui->Art_05_hist_img_4, 0);
    lv_obj_set_pos(ui->Art_05_hist_img_4, 786, 393);
    lv_obj_set_size(ui->Art_05_hist_img_4, 65, 55);

    //Write style for Art_05_hist_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_05_hist_img_4, 252, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_05_hist_img_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_05_hist_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_05_hist_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_btn_4
    ui->Art_05_hist_btn_4 = lv_btn_create(ui->Art_05_hist_cont_1);
    ui->Art_05_hist_btn_4_label = lv_label_create(ui->Art_05_hist_btn_4);
    lv_label_set_text(ui->Art_05_hist_btn_4_label, "    NEXT ART");
    lv_label_set_long_mode(ui->Art_05_hist_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Art_05_hist_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Art_05_hist_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Art_05_hist_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->Art_05_hist_btn_4, 450, 510);
    lv_obj_set_size(ui->Art_05_hist_btn_4, 530, 90);

    //Write style for Art_05_hist_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Art_05_hist_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_btn_4, lv_color_hex(0x791e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_btn_4, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_05_hist_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_05_hist_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_05_hist_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Art_05_hist_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_btn_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_btn_4, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Art_05_hist_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Art_05_hist_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Art_05_hist_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Art_05_hist_btn_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Art_05_hist_btn_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_05_hist_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_05_hist_btn_4, &lv_font_Acme_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_05_hist_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_05_hist_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_img_6
    ui->Art_05_hist_img_6 = lv_img_create(ui->Art_05_hist_cont_1);
    lv_obj_add_flag(ui->Art_05_hist_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_05_hist_img_6, &_Nextthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Art_05_hist_img_6, 50,50);
    lv_img_set_angle(ui->Art_05_hist_img_6, 0);
    lv_obj_set_pos(ui->Art_05_hist_img_6, 576, 530);
    lv_obj_set_size(ui->Art_05_hist_img_6, 65, 55);

    //Write style for Art_05_hist_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_05_hist_img_6, 251, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Art_05_hist_img_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_05_hist_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_05_hist_img_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_img_7
    ui->Art_05_hist_img_7 = lv_img_create(ui->Art_05_hist_cont_1);
    lv_obj_add_flag(ui->Art_05_hist_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Art_05_hist_img_7, &_Art_05_hist_min_alpha_283x326);
    lv_img_set_pivot(ui->Art_05_hist_img_7, 50,50);
    lv_img_set_angle(ui->Art_05_hist_img_7, 0);
    lv_obj_set_pos(ui->Art_05_hist_img_7, 7, 336);
    lv_obj_set_size(ui->Art_05_hist_img_7, 283, 326);

    //Write style for Art_05_hist_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Art_05_hist_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Art_05_hist_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Art_05_hist_img_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_label_1
    ui->Art_05_hist_label_1 = lv_label_create(ui->Art_05_hist_cont_1);
    lv_label_set_text(ui->Art_05_hist_label_1, "HISTORY - YOGINI");
    lv_label_set_long_mode(ui->Art_05_hist_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Art_05_hist_label_1, 440, 2);
    lv_obj_set_size(ui->Art_05_hist_label_1, 438, 41);

    //Write style for Art_05_hist_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_05_hist_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_label_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_05_hist_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_05_hist_label_1, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_05_hist_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Art_05_hist_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_05_hist_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_05_hist_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_label_1, lv_color_hex(0x860566), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_label_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_05_hist_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_05_hist_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Art_05_hist_label_2
    ui->Art_05_hist_label_2 = lv_label_create(ui->Art_05_hist_cont_1);
    lv_label_set_text(ui->Art_05_hist_label_2, "The worship of yoginis began outside Vedic Religion, starting according to Vidya Dehejia with the cults of local village goddesses, the grama devatas. Each one protects her village, sometimes giving specific benefits such as safety from the stings of scorpions. Gradually, through Tantra, these goddesses were grouped together into a number believed powerful, most often 64, and they became accepted as a valid part of Hinduism. Historical evidence on Yogini Kaulas suggests that the practice was well established by the 10th century in both Hindu and Buddhist tantra traditions. The nature of the yoginis differs between the traditions; in Tantra they are fierce and scary, while in India, celibate female sanyassins may describe themselves as yoginis.");
    lv_label_set_long_mode(ui->Art_05_hist_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Art_05_hist_label_2, 12, 44);
    lv_obj_set_size(ui->Art_05_hist_label_2, 1257, 290);

    //Write style for Art_05_hist_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Art_05_hist_label_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Art_05_hist_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Art_05_hist_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Art_05_hist_label_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Art_05_hist_label_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Art_05_hist_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Art_05_hist_label_2, &lv_font_Abel_regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Art_05_hist_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Art_05_hist_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Art_05_hist_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Art_05_hist_label_2, 244, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Art_05_hist_label_2, lv_color_hex(0x7e0062), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Art_05_hist_label_2, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Art_05_hist_label_2, lv_color_hex(0x092033), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Art_05_hist_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Art_05_hist_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Art_05_hist.


    //Update current screen layout.
    lv_obj_update_layout(ui->Art_05_hist);

    //Init events for screen.
    events_init_Art_05_hist(ui);
}