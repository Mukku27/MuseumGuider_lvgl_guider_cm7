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



void setup_scr_End_scrn(lv_ui *ui)
{
    //Write codes End_scrn
    ui->End_scrn = lv_obj_create(NULL);
    lv_obj_set_size(ui->End_scrn, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->End_scrn, LV_SCROLLBAR_MODE_OFF);

    //Write style for End_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->End_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes End_scrn_cont_1
    ui->End_scrn_cont_1 = lv_obj_create(ui->End_scrn);
    lv_obj_set_pos(ui->End_scrn_cont_1, 0, 0);
    lv_obj_set_size(ui->End_scrn_cont_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->End_scrn_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for End_scrn_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->End_scrn_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->End_scrn_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->End_scrn_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->End_scrn_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->End_scrn_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->End_scrn_cont_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->End_scrn_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->End_scrn_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes End_scrn_label_1
    ui->End_scrn_label_1 = lv_label_create(ui->End_scrn_cont_1);
    lv_label_set_text(ui->End_scrn_label_1, " YOU HAVE SUCCEFULLY COMPLETED THE MUSEUM TOUR \n\nClick Continue to Restart");
    lv_label_set_long_mode(ui->End_scrn_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->End_scrn_label_1, 316, 348);
    lv_obj_set_size(ui->End_scrn_label_1, 664, 234);

    //Write style for End_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->End_scrn_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->End_scrn_label_1, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->End_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->End_scrn_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->End_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->End_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->End_scrn_label_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->End_scrn_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->End_scrn_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->End_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes End_scrn_img_1
    ui->End_scrn_img_1 = lv_img_create(ui->End_scrn_cont_1);
    lv_obj_add_flag(ui->End_scrn_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->End_scrn_img_1, &_Complete_min_alpha_335x329);
    lv_img_set_pivot(ui->End_scrn_img_1, 50,50);
    lv_img_set_angle(ui->End_scrn_img_1, 0);
    lv_obj_set_pos(ui->End_scrn_img_1, 481, 31);
    lv_obj_set_size(ui->End_scrn_img_1, 335, 329);

    //Write style for End_scrn_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->End_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->End_scrn_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->End_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->End_scrn_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes End_scrn_btn_1
    ui->End_scrn_btn_1 = lv_btn_create(ui->End_scrn_cont_1);
    ui->End_scrn_btn_1_label = lv_label_create(ui->End_scrn_btn_1);
    lv_label_set_text(ui->End_scrn_btn_1_label, "             CONTINUE");
    lv_label_set_long_mode(ui->End_scrn_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->End_scrn_btn_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->End_scrn_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->End_scrn_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->End_scrn_btn_1, 467, 546);
    lv_obj_set_size(ui->End_scrn_btn_1, 345, 100);

    //Write style for End_scrn_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->End_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->End_scrn_btn_1, lv_color_hex(0x41606E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->End_scrn_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->End_scrn_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->End_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->End_scrn_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->End_scrn_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->End_scrn_btn_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->End_scrn_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->End_scrn_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->End_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->End_scrn_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->End_scrn_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->End_scrn_btn_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->End_scrn_btn_1, lv_color_hex(0xD6E8AC), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->End_scrn_btn_1, &lv_font_Acme_Regular_29, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->End_scrn_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->End_scrn_btn_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes End_scrn_img_2
    ui->End_scrn_img_2 = lv_img_create(ui->End_scrn_cont_1);
    lv_obj_add_flag(ui->End_scrn_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->End_scrn_img_2, &_Ok_Enter_min_alpha_65x55);
    lv_img_set_pivot(ui->End_scrn_img_2, 50,50);
    lv_img_set_angle(ui->End_scrn_img_2, 0);
    lv_obj_set_pos(ui->End_scrn_img_2, 705, 567);
    lv_obj_set_size(ui->End_scrn_img_2, 65, 55);

    //Write style for End_scrn_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->End_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->End_scrn_img_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->End_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->End_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->End_scrn_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of End_scrn.


    //Update current screen layout.
    lv_obj_update_layout(ui->End_scrn);

    //Init events for screen.
    events_init_End_scrn(ui);
}
