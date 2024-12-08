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



void setup_scr_Main_scrn(lv_ui *ui)
{
    //Write codes Main_scrn
    ui->Main_scrn = lv_obj_create(NULL);
    lv_obj_set_size(ui->Main_scrn, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Main_scrn, LV_SCROLLBAR_MODE_OFF);

    //Write style for Main_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Main_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Main_scrn_img_1
    ui->Main_scrn_img_1 = lv_img_create(ui->Main_scrn);
    lv_obj_add_flag(ui->Main_scrn_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Main_scrn_img_1, &_background_min_alpha_1280x720);
    lv_img_set_pivot(ui->Main_scrn_img_1, 50,50);
    lv_img_set_angle(ui->Main_scrn_img_1, 0);
    lv_obj_set_pos(ui->Main_scrn_img_1, 0, 0);
    lv_obj_set_size(ui->Main_scrn_img_1, 1280, 720);

    //Write style for Main_scrn_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Main_scrn_img_1, 46, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Main_scrn_img_1, lv_color_hex(0xff00b2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Main_scrn_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Main_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Main_scrn_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Main_scrn_imgbtn_1
    ui->Main_scrn_imgbtn_1 = lv_imgbtn_create(ui->Main_scrn);
    lv_imgbtn_set_src(ui->Main_scrn_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_Help_min_alpha_132x124, NULL);
    lv_imgbtn_set_src(ui->Main_scrn_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_Help_PRESSED_min_alpha_132x124, NULL);
    ui->Main_scrn_imgbtn_1_label = lv_label_create(ui->Main_scrn_imgbtn_1);
    lv_label_set_text(ui->Main_scrn_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->Main_scrn_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Main_scrn_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Main_scrn_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->Main_scrn_imgbtn_1, 26, 17);
    lv_obj_set_size(ui->Main_scrn_imgbtn_1, 132, 124);

    //Write style for Main_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->Main_scrn_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Main_scrn_imgbtn_1, &lv_font_Acme_Regular_37, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Main_scrn_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Main_scrn_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Main_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->Main_scrn_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->Main_scrn_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for Main_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->Main_scrn_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->Main_scrn_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for Main_scrn_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->Main_scrn_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->Main_scrn_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes Main_scrn_btn_1
    ui->Main_scrn_btn_1 = lv_btn_create(ui->Main_scrn);
    ui->Main_scrn_btn_1_label = lv_label_create(ui->Main_scrn_btn_1);
    lv_label_set_text(ui->Main_scrn_btn_1_label, "      START EXPLORING ");
    lv_label_set_long_mode(ui->Main_scrn_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Main_scrn_btn_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->Main_scrn_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Main_scrn_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->Main_scrn_btn_1, 467, 546);
    lv_obj_set_size(ui->Main_scrn_btn_1, 345, 100);

    //Write style for Main_scrn_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Main_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Main_scrn_btn_1, lv_color_hex(0x41606e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Main_scrn_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Main_scrn_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Main_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Main_scrn_btn_1, lv_color_hex(0x0c1821), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Main_scrn_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Main_scrn_btn_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Main_scrn_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->Main_scrn_btn_1, lv_color_hex(0x061521), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->Main_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->Main_scrn_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->Main_scrn_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->Main_scrn_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Main_scrn_btn_1, lv_color_hex(0xd6e8ac), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Main_scrn_btn_1, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Main_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Main_scrn_btn_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Main_scrn_img_2
    ui->Main_scrn_img_2 = lv_img_create(ui->Main_scrn);
    lv_obj_add_flag(ui->Main_scrn_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Main_scrn_img_2, &_Ok_Enter_min_alpha_65x55);
    lv_img_set_pivot(ui->Main_scrn_img_2, 50,50);
    lv_img_set_angle(ui->Main_scrn_img_2, 0);
    lv_obj_set_pos(ui->Main_scrn_img_2, 709, 571);
    lv_obj_set_size(ui->Main_scrn_img_2, 65, 55);

    //Write style for Main_scrn_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Main_scrn_img_2, 232, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->Main_scrn_img_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Main_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Main_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Main_scrn_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Main_scrn_label_1
    ui->Main_scrn_label_1 = lv_label_create(ui->Main_scrn);
    lv_label_set_text(ui->Main_scrn_label_1, "Museum Guider Bot");
    lv_label_set_long_mode(ui->Main_scrn_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Main_scrn_label_1, 351, 213);
    lv_obj_set_size(ui->Main_scrn_label_1, 550, 55);

    //Write style for Main_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Main_scrn_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Main_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Main_scrn_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Main_scrn_label_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Main_scrn_label_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Main_scrn_label_1, lv_color_hex(0x010000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Main_scrn_label_1, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Main_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Main_scrn_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Main_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Main_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Main_scrn_label_1, lv_color_hex(0xb878d3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Main_scrn_label_1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->Main_scrn_label_1, lv_color_hex(0x6426cb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->Main_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Main_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Main_scrn.


    //Update current screen layout.
    lv_obj_update_layout(ui->Main_scrn);

    //Init events for screen.
    events_init_Main_scrn(ui);
}
