/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Main_scrn;
	bool Main_scrn_del;
	lv_obj_t *Main_scrn_img_1;
	lv_obj_t *Main_scrn_imgbtn_1;
	lv_obj_t *Main_scrn_imgbtn_1_label;
	lv_obj_t *Main_scrn_btn_1;
	lv_obj_t *Main_scrn_btn_1_label;
	lv_obj_t *Main_scrn_img_2;
	lv_obj_t *Main_scrn_label_1;
	lv_obj_t *Help_scrn;
	bool Help_scrn_del;
	lv_obj_t *Help_scrn_cont_1;
	lv_obj_t *Help_scrn_img_1;
	lv_obj_t *Help_scrn_label_1;
	lv_obj_t *Help_scrn_label_3;
	lv_obj_t *Help_scrn_img_4;
	lv_obj_t *Help_scrn_img_5;
	lv_obj_t *Help_scrn_img_6;
	lv_obj_t *Help_scrn_img_7;
	lv_obj_t *Help_scrn_img_8;
	lv_obj_t *Help_scrn_label_4;
	lv_obj_t *Help_scrn_img_9;
	lv_obj_t *Help_scrn_cont_2;
	lv_obj_t *Help_scrn_img_2;
	lv_obj_t *Help_scrn_imgbtn_1;
	lv_obj_t *Help_scrn_imgbtn_1_label;
	lv_obj_t *Art_01;
	bool Art_01_del;
	lv_obj_t *Art_01_cont_1;
	lv_obj_t *Art_01_img_1;
	lv_obj_t *Art_01_img_2;
	lv_obj_t *Art_01_btn_1;
	lv_obj_t *Art_01_btn_1_label;
	lv_obj_t *Art_01_img_3;
	lv_obj_t *Art_01_btn_2;
	lv_obj_t *Art_01_btn_2_label;
	lv_obj_t *Art_01_img_4;
	lv_obj_t *Art_01_btn_3;
	lv_obj_t *Art_01_btn_3_label;
	lv_obj_t *Art_01_img_5;
	lv_obj_t *Art_01_btn_4;
	lv_obj_t *Art_01_btn_4_label;
	lv_obj_t *Art_01_img_6;
	lv_obj_t *Art_01_label_1;
	lv_obj_t *Art_01_label_2;
	lv_obj_t *Art_01_hist;
	bool Art_01_hist_del;
	lv_obj_t *Art_01_hist_cont_1;
	lv_obj_t *Art_01_hist_img_1;
	lv_obj_t *Art_01_hist_btn_1;
	lv_obj_t *Art_01_hist_btn_1_label;
	lv_obj_t *Art_01_hist_btn_2;
	lv_obj_t *Art_01_hist_btn_2_label;
	lv_obj_t *Art_01_hist_img_3;
	lv_obj_t *Art_01_hist_btn_3;
	lv_obj_t *Art_01_hist_btn_3_label;
	lv_obj_t *Art_01_hist_img_4;
	lv_obj_t *Art_01_hist_btn_4;
	lv_obj_t *Art_01_hist_btn_4_label;
	lv_obj_t *Art_01_hist_img_6;
	lv_obj_t *Art_01_hist_img_7;
	lv_obj_t *Art_01_hist_img_8;
	lv_obj_t *Art_01_hist_label_1;
	lv_obj_t *Art_01_hist_label_2;
	lv_obj_t *Art_01_depic;
	bool Art_01_depic_del;
	lv_obj_t *Art_01_depic_cont_1;
	lv_obj_t *Art_01_depic_img_1;
	lv_obj_t *Art_01_depic_btn_1;
	lv_obj_t *Art_01_depic_btn_1_label;
	lv_obj_t *Art_01_depic_btn_2;
	lv_obj_t *Art_01_depic_btn_2_label;
	lv_obj_t *Art_01_depic_img_3;
	lv_obj_t *Art_01_depic_btn_3;
	lv_obj_t *Art_01_depic_btn_3_label;
	lv_obj_t *Art_01_depic_img_4;
	lv_obj_t *Art_01_depic_btn_4;
	lv_obj_t *Art_01_depic_btn_4_label;
	lv_obj_t *Art_01_depic_img_6;
	lv_obj_t *Art_01_depic_img_7;
	lv_obj_t *Art_01_depic_img_8;
	lv_obj_t *Art_01_depic_label_1;
	lv_obj_t *Art_01_depic_label_2;
	lv_obj_t *Art_01_inter;
	bool Art_01_inter_del;
	lv_obj_t *Art_01_inter_cont_1;
	lv_obj_t *Art_01_inter_img_1;
	lv_obj_t *Art_01_inter_btn_1;
	lv_obj_t *Art_01_inter_btn_1_label;
	lv_obj_t *Art_01_inter_btn_2;
	lv_obj_t *Art_01_inter_btn_2_label;
	lv_obj_t *Art_01_inter_img_3;
	lv_obj_t *Art_01_inter_btn_3;
	lv_obj_t *Art_01_inter_btn_3_label;
	lv_obj_t *Art_01_inter_img_4;
	lv_obj_t *Art_01_inter_btn_4;
	lv_obj_t *Art_01_inter_btn_4_label;
	lv_obj_t *Art_01_inter_img_6;
	lv_obj_t *Art_01_inter_img_7;
	lv_obj_t *Art_01_inter_img_8;
	lv_obj_t *Art_01_inter_label_1;
	lv_obj_t *Art_01_inter_label_2;
	lv_obj_t *Art_03;
	bool Art_03_del;
	lv_obj_t *Art_03_cont_1;
	lv_obj_t *Art_03_img_1;
	lv_obj_t *Art_03_img_2;
	lv_obj_t *Art_03_btn_1;
	lv_obj_t *Art_03_btn_1_label;
	lv_obj_t *Art_03_img_3;
	lv_obj_t *Art_03_btn_2;
	lv_obj_t *Art_03_btn_2_label;
	lv_obj_t *Art_03_img_4;
	lv_obj_t *Art_03_btn_4;
	lv_obj_t *Art_03_btn_4_label;
	lv_obj_t *Art_03_img_6;
	lv_obj_t *Art_03_label_1;
	lv_obj_t *Art_03_label_2;
	lv_obj_t *Art_03_hist;
	bool Art_03_hist_del;
	lv_obj_t *Art_03_hist_cont_1;
	lv_obj_t *Art_03_hist_img_1;
	lv_obj_t *Art_03_hist_btn_1;
	lv_obj_t *Art_03_hist_btn_1_label;
	lv_obj_t *Art_03_hist_btn_2;
	lv_obj_t *Art_03_hist_btn_2_label;
	lv_obj_t *Art_03_hist_img_3;
	lv_obj_t *Art_03_hist_btn_4;
	lv_obj_t *Art_03_hist_btn_4_label;
	lv_obj_t *Art_03_hist_img_6;
	lv_obj_t *Art_03_hist_img_7;
	lv_obj_t *Art_03_hist_img_8;
	lv_obj_t *Art_03_hist_label_1;
	lv_obj_t *Art_03_hist_label_2;
	lv_obj_t *Art_03_style;
	bool Art_03_style_del;
	lv_obj_t *Art_03_style_cont_1;
	lv_obj_t *Art_03_style_img_1;
	lv_obj_t *Art_03_style_btn_1;
	lv_obj_t *Art_03_style_btn_1_label;
	lv_obj_t *Art_03_style_btn_2;
	lv_obj_t *Art_03_style_btn_2_label;
	lv_obj_t *Art_03_style_img_3;
	lv_obj_t *Art_03_style_btn_4;
	lv_obj_t *Art_03_style_btn_4_label;
	lv_obj_t *Art_03_style_img_6;
	lv_obj_t *Art_03_style_img_7;
	lv_obj_t *Art_03_style_img_8;
	lv_obj_t *Art_03_style_label_1;
	lv_obj_t *Art_03_style_label_2;
	lv_obj_t *Art_05;
	bool Art_05_del;
	lv_obj_t *Art_05_cont_1;
	lv_obj_t *Art_05_img_1;
	lv_obj_t *Art_05_img_2;
	lv_obj_t *Art_05_btn_1;
	lv_obj_t *Art_05_btn_1_label;
	lv_obj_t *Art_05_img_3;
	lv_obj_t *Art_05_btn_2;
	lv_obj_t *Art_05_btn_2_label;
	lv_obj_t *Art_05_img_4;
	lv_obj_t *Art_05_btn_4;
	lv_obj_t *Art_05_btn_4_label;
	lv_obj_t *Art_05_img_6;
	lv_obj_t *Art_05_label_1;
	lv_obj_t *Art_05_label_2;
	lv_obj_t *Art_05_hist;
	bool Art_05_hist_del;
	lv_obj_t *Art_05_hist_cont_1;
	lv_obj_t *Art_05_hist_img_1;
	lv_obj_t *Art_05_hist_btn_1;
	lv_obj_t *Art_05_hist_btn_1_label;
	lv_obj_t *Art_05_hist_img_3;
	lv_obj_t *Art_05_hist_btn_2;
	lv_obj_t *Art_05_hist_btn_2_label;
	lv_obj_t *Art_05_hist_img_4;
	lv_obj_t *Art_05_hist_btn_4;
	lv_obj_t *Art_05_hist_btn_4_label;
	lv_obj_t *Art_05_hist_img_6;
	lv_obj_t *Art_05_hist_img_7;
	lv_obj_t *Art_05_hist_label_1;
	lv_obj_t *Art_05_hist_label_2;
	lv_obj_t *Art_05_des;
	bool Art_05_des_del;
	lv_obj_t *Art_05_des_cont_1;
	lv_obj_t *Art_05_des_img_1;
	lv_obj_t *Art_05_des_btn_1;
	lv_obj_t *Art_05_des_btn_1_label;
	lv_obj_t *Art_05_des_img_3;
	lv_obj_t *Art_05_des_btn_2;
	lv_obj_t *Art_05_des_btn_2_label;
	lv_obj_t *Art_05_des_img_4;
	lv_obj_t *Art_05_des_btn_4;
	lv_obj_t *Art_05_des_btn_4_label;
	lv_obj_t *Art_05_des_img_6;
	lv_obj_t *Art_05_des_img_7;
	lv_obj_t *Art_05_des_label_1;
	lv_obj_t *Art_05_des_label_2;
	lv_obj_t *End_scrn;
	bool End_scrn_del;
	lv_obj_t *End_scrn_cont_1;
	lv_obj_t *End_scrn_label_1;
	lv_obj_t *End_scrn_img_1;
	lv_obj_t *End_scrn_btn_1;
	lv_obj_t *End_scrn_btn_1_label;
	lv_obj_t *End_scrn_img_2;
	lv_obj_t *Load_scrn_1_0;
	bool Load_scrn_1_0_del;
	lv_obj_t *Load_scrn_1_0_cont_1;
	lv_obj_t *Load_scrn_1_0_spinner_1;
	lv_obj_t *Load_scrn_1_0_label_1;
	lv_obj_t *Load_scrn_3_0;
	bool Load_scrn_3_0_del;
	lv_obj_t *Load_scrn_3_0_cont_1;
	lv_obj_t *Load_scrn_3_0_spinner_1;
	lv_obj_t *Load_scrn_3_0_label_1;
	lv_obj_t *Load_scrn_1;
	bool Load_scrn_1_del;
	lv_obj_t *Load_scrn_1_label_1;
	lv_obj_t *Load_scrn_1_btn_1;
	lv_obj_t *Load_scrn_1_btn_1_label;
	lv_obj_t *Load_scrn_1_img_1;
	lv_obj_t *Load_scrn_1_cont_1;
	lv_obj_t *Load_scrn_1_img_2;
	lv_obj_t *Load_scrn_1_imgbtn_1;
	lv_obj_t *Load_scrn_1_imgbtn_1_label;
	lv_obj_t *Load_scrn_3;
	bool Load_scrn_3_del;
	lv_obj_t *Load_scrn_3_label_1;
	lv_obj_t *Load_scrn_3_btn_1;
	lv_obj_t *Load_scrn_3_btn_1_label;
	lv_obj_t *Load_scrn_3_img_1;
	lv_obj_t *Load_scrn_3_cont_1;
	lv_obj_t *Load_scrn_3_img_2;
	lv_obj_t *Load_scrn_3_imgbtn_1;
	lv_obj_t *Load_scrn_3_imgbtn_1_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_Main_scrn(lv_ui *ui);
void setup_scr_Help_scrn(lv_ui *ui);
void setup_scr_Art_01(lv_ui *ui);
void setup_scr_Art_01_hist(lv_ui *ui);
void setup_scr_Art_01_depic(lv_ui *ui);
void setup_scr_Art_01_inter(lv_ui *ui);
void setup_scr_Art_03(lv_ui *ui);
void setup_scr_Art_03_hist(lv_ui *ui);
void setup_scr_Art_03_style(lv_ui *ui);
void setup_scr_Art_05(lv_ui *ui);
void setup_scr_Art_05_hist(lv_ui *ui);
void setup_scr_Art_05_des(lv_ui *ui);
void setup_scr_End_scrn(lv_ui *ui);
void setup_scr_Load_scrn_1_0(lv_ui *ui);
void setup_scr_Load_scrn_3_0(lv_ui *ui);
void setup_scr_Load_scrn_1(lv_ui *ui);
void setup_scr_Load_scrn_3(lv_ui *ui);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Help_min_alpha_132x124);
LV_IMG_DECLARE(_Help_PRESSED_min_alpha_132x124);
LV_IMG_DECLARE(_Ok_Enter_min_alpha_65x55);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Ok_Enter_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Three_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backbutton_min_alpha_112x103);
LV_IMG_DECLARE(_Backbutton_Pressed_min_alpha_112x103);
LV_IMG_DECLARE(_background_min_alpha_1280x718);
LV_IMG_DECLARE(_Art_01_min_alpha_322x354);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Three_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_01_hist_min_alpha_261x358);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_01_depic_min_alpha_318x352);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_01_inter_min_alpha_308x332);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Art_03_min_alpha_280x368);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_03_style_min_alpha_273x340);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_03_hist_min_alpha_253x355);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Art_05_min_alpha_286x354);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Two_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_05_hist_min_alpha_283x326);
LV_IMG_DECLARE(_background_min_alpha_1280x720);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_One_min_alpha_65x55);
LV_IMG_DECLARE(_Nextthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Art_05_des_min_alpha_237x336);
LV_IMG_DECLARE(_Complete_min_alpha_335x329);
LV_IMG_DECLARE(_Ok_Enter_min_alpha_65x55);
LV_IMG_DECLARE(_Ok_Enter_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backbutton_min_alpha_112x103);
LV_IMG_DECLARE(_Backbutton_Pressed_min_alpha_112x103);
LV_IMG_DECLARE(_Ok_Enter_min_alpha_65x55);
LV_IMG_DECLARE(_Backthumb_min_alpha_65x55);
LV_IMG_DECLARE(_Backbutton_min_alpha_112x103);
LV_IMG_DECLARE(_Backbutton_Pressed_min_alpha_112x103);

LV_FONT_DECLARE(lv_font_Acme_Regular_37)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_Acme_Regular_25)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_Acme_Regular_40)
LV_FONT_DECLARE(lv_font_Acme_Regular_29)
LV_FONT_DECLARE(lv_font_Acme_Regular_20)
LV_FONT_DECLARE(lv_font_Abel_regular_25)


#ifdef __cplusplus
}
#endif
#endif
