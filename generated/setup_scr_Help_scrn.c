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



void setup_scr_Help_scrn(lv_ui *ui)
{
    //Write codes Help_scrn
    ui->Help_scrn = lv_obj_create(NULL);
    lv_obj_set_size(ui->Help_scrn, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Help_scrn, LV_SCROLLBAR_MODE_OFF);

    //Write style for Help_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Help_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_cont_1
    ui->Help_scrn_cont_1 = lv_obj_create(ui->Help_scrn);
    lv_obj_set_pos(ui->Help_scrn_cont_1, 0, 0);
    lv_obj_set_size(ui->Help_scrn_cont_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Help_scrn_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Help_scrn_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Help_scrn_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Help_scrn_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Help_scrn_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Help_scrn_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Help_scrn_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Help_scrn_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Help_scrn_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_1
    ui->Help_scrn_img_1 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_1, &_background_min_alpha_1280x720);
    lv_img_set_pivot(ui->Help_scrn_img_1, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_1, 0);
    lv_obj_set_pos(ui->Help_scrn_img_1, 0, 0);
    lv_obj_set_size(ui->Help_scrn_img_1, 1280, 720);

    //Write style for Help_scrn_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_1, 48, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_1, lv_color_hex(0xFF00B2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_1, 177, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_label_1
    ui->Help_scrn_label_1 = lv_label_create(ui->Help_scrn_cont_1);
    lv_label_set_text(ui->Help_scrn_label_1, "Sign commands:\n\nNEXT   -------->\n\n\nSTART  ------->\n\n\nBACK   -------->\n\n\nONE   ---------->\n\n\nTWO   --------->\n\n\nTHREE   ------->");
    lv_label_set_long_mode(ui->Help_scrn_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Help_scrn_label_1, 317, 104);
    lv_obj_set_size(ui->Help_scrn_label_1, 360, 600);

    //Write style for Help_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Help_scrn_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Help_scrn_label_1, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Help_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Help_scrn_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Help_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Help_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Help_scrn_label_1, lv_color_hex(0xC34BB5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Help_scrn_label_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Help_scrn_label_1, lv_color_hex(0x000101), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Help_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Help_scrn_label_1, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Help_scrn_label_1, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_label_3
    ui->Help_scrn_label_3 = lv_label_create(ui->Help_scrn_cont_1);
    lv_label_set_text(ui->Help_scrn_label_3, "Voice Commands:\n\nNEXT\n\nSTART\n\nBACK\n\nHISTORY\n\nDESCRIPTION\n\nDEPICTION\n\nINTERPRETATION\n\nSTYLE\n\nCONTINUE\n");
    lv_label_set_long_mode(ui->Help_scrn_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Help_scrn_label_3, 761, 104);
    lv_obj_set_size(ui->Help_scrn_label_3, 360, 600);

    //Write style for Help_scrn_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Help_scrn_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Help_scrn_label_3, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Help_scrn_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Help_scrn_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Help_scrn_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Help_scrn_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Help_scrn_label_3, lv_color_hex(0xC34BB5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Help_scrn_label_3, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Help_scrn_label_3, lv_color_hex(0x040d16), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Help_scrn_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Help_scrn_label_3, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_4
    ui->Help_scrn_img_4 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_4, &_Ok_Enter_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_4, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_4, 0);
    lv_obj_set_pos(ui->Help_scrn_img_4, 578, 275);
    lv_obj_set_size(ui->Help_scrn_img_4, 65, 55);

    //Write style for Help_scrn_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_4, 225, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_5
    ui->Help_scrn_img_5 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_5, &_Backthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_5, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_5, 0);
    lv_obj_set_pos(ui->Help_scrn_img_5, 580, 366);
    lv_obj_set_size(ui->Help_scrn_img_5, 65, 55);

    //Write style for Help_scrn_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_5, 223, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_6
    ui->Help_scrn_img_6 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_6, &_One_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_6, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_6, 0);
    lv_obj_set_pos(ui->Help_scrn_img_6, 587, 443);
    lv_obj_set_size(ui->Help_scrn_img_6, 65, 55);

    //Write style for Help_scrn_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_6, 247, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_7
    ui->Help_scrn_img_7 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_7, &_Two_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_7, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_7, 0);
    lv_obj_set_pos(ui->Help_scrn_img_7, 585, 530);
    lv_obj_set_size(ui->Help_scrn_img_7, 65, 55);

    //Write style for Help_scrn_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_7, 234, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_7, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_8
    ui->Help_scrn_img_8 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_8, &_Three_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_8, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_8, 0);
    lv_obj_set_pos(ui->Help_scrn_img_8, 585, 617);
    lv_obj_set_size(ui->Help_scrn_img_8, 65, 55);

    //Write style for Help_scrn_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_label_4
    ui->Help_scrn_label_4 = lv_label_create(ui->Help_scrn_cont_1);
    lv_label_set_text(ui->Help_scrn_label_4, "Wake Words: HEY NXP, HEY BOT, HEY GUIDE");
    lv_label_set_long_mode(ui->Help_scrn_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Help_scrn_label_4, 396, 8);
    lv_obj_set_size(ui->Help_scrn_label_4, 658, 89);

    //Write style for Help_scrn_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Help_scrn_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Help_scrn_label_4, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Help_scrn_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Help_scrn_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Help_scrn_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Help_scrn_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Help_scrn_label_4, lv_color_hex(0xC34BB5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Help_scrn_label_4, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Help_scrn_label_4, lv_color_hex(0x040d16), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Help_scrn_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Help_scrn_label_4, 34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_9
    ui->Help_scrn_img_9 = lv_img_create(ui->Help_scrn_cont_1);
    lv_obj_add_flag(ui->Help_scrn_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_9, &_Nextthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_9, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_9, 0);
    lv_obj_set_pos(ui->Help_scrn_img_9, 589, 194);
    lv_obj_set_size(ui->Help_scrn_img_9, 65, 55);

    //Write style for Help_scrn_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_9, 224, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_cont_2
    ui->Help_scrn_cont_2 = lv_obj_create(ui->Help_scrn);
    lv_obj_set_pos(ui->Help_scrn_cont_2, 20, 15);
    lv_obj_set_size(ui->Help_scrn_cont_2, 265, 110);
    lv_obj_set_scrollbar_mode(ui->Help_scrn_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for Help_scrn_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Help_scrn_cont_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Help_scrn_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Help_scrn_cont_2, lv_color_hex(0x000406), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Help_scrn_cont_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_cont_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Help_scrn_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Help_scrn_cont_2, lv_color_hex(0x41606E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Help_scrn_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Help_scrn_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Help_scrn_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Help_scrn_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Help_scrn_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_cont_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Help_scrn_cont_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Help_scrn_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Help_scrn_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Help_scrn_cont_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Help_scrn_cont_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_img_2
    ui->Help_scrn_img_2 = lv_img_create(ui->Help_scrn_cont_2);
    lv_obj_add_flag(ui->Help_scrn_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Help_scrn_img_2, &_Backthumb_min_alpha_65x55);
    lv_img_set_pivot(ui->Help_scrn_img_2, 50,50);
    lv_img_set_angle(ui->Help_scrn_img_2, 0);
    lv_obj_set_pos(ui->Help_scrn_img_2, 150, 20);
    lv_obj_set_size(ui->Help_scrn_img_2, 65, 55);

    //Write style for Help_scrn_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_img_2, 233, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Help_scrn_img_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Help_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Help_scrn_imgbtn_1
    ui->Help_scrn_imgbtn_1 = lv_imgbtn_create(ui->Help_scrn_cont_2);
    lv_obj_add_flag(ui->Help_scrn_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->Help_scrn_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_Backbutton_min_alpha_112x103, NULL);
    lv_imgbtn_set_src(ui->Help_scrn_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_Backbutton_Pressed_min_alpha_112x103, NULL);
    ui->Help_scrn_imgbtn_1_label = lv_label_create(ui->Help_scrn_imgbtn_1);
    lv_label_set_text(ui->Help_scrn_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->Help_scrn_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Help_scrn_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Help_scrn_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->Help_scrn_imgbtn_1, 8, -2);
    lv_obj_set_size(ui->Help_scrn_imgbtn_1, 112, 103);

    //Write style for Help_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->Help_scrn_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Help_scrn_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Help_scrn_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Help_scrn_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Help_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->Help_scrn_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->Help_scrn_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for Help_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->Help_scrn_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->Help_scrn_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for Help_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->Help_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->Help_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //The custom code of Help_scrn.


    //Update current screen layout.
    lv_obj_update_layout(ui->Help_scrn);

    //Init events for screen.
    events_init_Help_scrn(ui);
}
