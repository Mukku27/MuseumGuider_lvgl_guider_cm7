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



void setup_scr_Load_scrn_3_0(lv_ui *ui)
{
    //Write codes Load_scrn_3_0
    ui->Load_scrn_3_0 = lv_obj_create(NULL);
    lv_obj_set_size(ui->Load_scrn_3_0, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Load_scrn_3_0, LV_SCROLLBAR_MODE_OFF);

    //Write style for Load_scrn_3_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Load_scrn_3_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_3_0_cont_1
    ui->Load_scrn_3_0_cont_1 = lv_obj_create(ui->Load_scrn_3_0);
    lv_obj_set_pos(ui->Load_scrn_3_0_cont_1, 0, 0);
    lv_obj_set_size(ui->Load_scrn_3_0_cont_1, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->Load_scrn_3_0_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Load_scrn_3_0_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Load_scrn_3_0_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Load_scrn_3_0_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Load_scrn_3_0_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Load_scrn_3_0_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Load_scrn_3_0_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_3_0_cont_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_3_0_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_3_0_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Load_scrn_3_0_spinner_1
    ui->Load_scrn_3_0_spinner_1 = lv_spinner_create(ui->Load_scrn_3_0_cont_1, 1000, 104);
    lv_obj_set_pos(ui->Load_scrn_3_0_spinner_1, 560, 149);
    lv_obj_set_size(ui->Load_scrn_3_0_spinner_1, 195, 225);

    //Write style for Load_scrn_3_0_spinner_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->Load_scrn_3_0_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Load_scrn_3_0_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Load_scrn_3_0_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Load_scrn_3_0_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Load_scrn_3_0_spinner_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_3_0_spinner_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_3_0_spinner_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui->Load_scrn_3_0_spinner_1, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Load_scrn_3_0_spinner_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Load_scrn_3_0_spinner_1, lv_color_hex(0xf5f5f5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_3_0_spinner_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Load_scrn_3_0_spinner_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->Load_scrn_3_0_spinner_1, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Load_scrn_3_0_spinner_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Load_scrn_3_0_spinner_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Load_scrn_3_0_label_1
    ui->Load_scrn_3_0_label_1 = lv_label_create(ui->Load_scrn_3_0_cont_1);
    lv_label_set_text(ui->Load_scrn_3_0_label_1, "Please Follow The Bot.........\n\n\n\n\nBOT IS TRAVELLING TO NEXT ARTIFACT ");
    lv_label_set_long_mode(ui->Load_scrn_3_0_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Load_scrn_3_0_label_1, 314, 375);
    lv_obj_set_size(ui->Load_scrn_3_0_label_1, 664, 295);

    //Write style for Load_scrn_3_0_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Load_scrn_3_0_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Load_scrn_3_0_label_1, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Load_scrn_3_0_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Load_scrn_3_0_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Load_scrn_3_0_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Load_scrn_3_0_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Load_scrn_3_0_label_1, lv_color_hex(0x130114), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Load_scrn_3_0_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Load_scrn_3_0_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Load_scrn_3_0_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Load_scrn_3_0.


    //Update current screen layout.
    lv_obj_update_layout(ui->Load_scrn_3_0);

}
