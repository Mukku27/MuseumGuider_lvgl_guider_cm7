/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Main_scrn_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Help_scrn, guider_ui.Help_scrn_del, &guider_ui.Main_scrn_del, setup_scr_Help_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Main_scrn_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01, guider_ui.Art_01_del, &guider_ui.Main_scrn_del, setup_scr_Art_01, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Main_scrn (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Main_scrn_imgbtn_1, Main_scrn_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Main_scrn_btn_1, Main_scrn_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void Help_scrn_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn, guider_ui.Main_scrn_del, &guider_ui.Help_scrn_del, setup_scr_Main_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Help_scrn (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Help_scrn_imgbtn_1, Help_scrn_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
}

static void Art_01_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_hist, guider_ui.Art_01_hist_del, &guider_ui.Art_01_del, setup_scr_Art_01_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_depic, guider_ui.Art_01_depic_del, &guider_ui.Art_01_del, setup_scr_Art_01_depic, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_inter, guider_ui.Art_01_inter_del, &guider_ui.Art_01_del, setup_scr_Art_01_inter, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_1, guider_ui.Load_scrn_1_del, &guider_ui.Art_01_del, setup_scr_Load_scrn_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_01 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_01_btn_1, Art_01_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_btn_2, Art_01_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_btn_3, Art_01_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_btn_4, Art_01_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_01_hist_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01, guider_ui.Art_01_del, &guider_ui.Art_01_hist_del, setup_scr_Art_01, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_hist_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_depic, guider_ui.Art_01_depic_del, &guider_ui.Art_01_hist_del, setup_scr_Art_01_depic, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_hist_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_inter, guider_ui.Art_01_inter_del, &guider_ui.Art_01_hist_del, setup_scr_Art_01_inter, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_hist_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_1, guider_ui.Load_scrn_1_del, &guider_ui.Art_01_hist_del, setup_scr_Load_scrn_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_01_hist (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_01_hist_btn_1, Art_01_hist_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_hist_btn_2, Art_01_hist_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_hist_btn_3, Art_01_hist_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_hist_btn_4, Art_01_hist_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_01_depic_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01, guider_ui.Art_01_del, &guider_ui.Art_01_depic_del, setup_scr_Art_01, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_depic_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_hist, guider_ui.Art_01_hist_del, &guider_ui.Art_01_depic_del, setup_scr_Art_01_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_depic_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_inter, guider_ui.Art_01_inter_del, &guider_ui.Art_01_depic_del, setup_scr_Art_01_inter, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_depic_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_1, guider_ui.Load_scrn_1_del, &guider_ui.Art_01_depic_del, setup_scr_Load_scrn_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_01_depic (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_01_depic_btn_1, Art_01_depic_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_depic_btn_2, Art_01_depic_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_depic_btn_3, Art_01_depic_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_depic_btn_4, Art_01_depic_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_01_inter_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01, guider_ui.Art_01_del, &guider_ui.Art_01_inter_del, setup_scr_Art_01, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_inter_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_hist, guider_ui.Art_01_hist_del, &guider_ui.Art_01_inter_del, setup_scr_Art_01_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_inter_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01_depic, guider_ui.Art_01_depic_del, &guider_ui.Art_01_inter_del, setup_scr_Art_01_depic, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_01_inter_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_1, guider_ui.Load_scrn_1_del, &guider_ui.Art_01_inter_del, setup_scr_Load_scrn_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_01_inter (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_01_inter_btn_1, Art_01_inter_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_inter_btn_2, Art_01_inter_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_inter_btn_3, Art_01_inter_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_01_inter_btn_4, Art_01_inter_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_03_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03_hist, guider_ui.Art_03_hist_del, &guider_ui.Art_03_del, setup_scr_Art_03_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03_style, guider_ui.Art_03_style_del, &guider_ui.Art_03_del, setup_scr_Art_03_style, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_3, guider_ui.Load_scrn_3_del, &guider_ui.Art_03_del, setup_scr_Load_scrn_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_03 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_03_btn_1, Art_03_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_btn_2, Art_03_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_btn_4, Art_03_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_03_hist_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03, guider_ui.Art_03_del, &guider_ui.Art_03_hist_del, setup_scr_Art_03, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_hist_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03_style, guider_ui.Art_03_style_del, &guider_ui.Art_03_hist_del, setup_scr_Art_03_style, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_hist_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_3, guider_ui.Load_scrn_3_del, &guider_ui.Art_03_hist_del, setup_scr_Load_scrn_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_03_hist (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_03_hist_btn_1, Art_03_hist_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_hist_btn_2, Art_03_hist_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_hist_btn_4, Art_03_hist_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_03_style_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03, guider_ui.Art_03_del, &guider_ui.Art_03_style_del, setup_scr_Art_03, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_style_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03_hist, guider_ui.Art_03_hist_del, &guider_ui.Art_03_style_del, setup_scr_Art_03_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_03_style_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_3, guider_ui.Load_scrn_3_del, &guider_ui.Art_03_style_del, setup_scr_Load_scrn_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_03_style (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_03_style_btn_1, Art_03_style_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_style_btn_2, Art_03_style_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_03_style_btn_4, Art_03_style_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_05_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05_hist, guider_ui.Art_05_hist_del, &guider_ui.Art_05_del, setup_scr_Art_05_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05_des, guider_ui.Art_05_des_del, &guider_ui.Art_05_del, setup_scr_Art_05_des, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.End_scrn, guider_ui.End_scrn_del, &guider_ui.Art_05_del, setup_scr_End_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_05 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_05_btn_1, Art_05_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_btn_2, Art_05_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_btn_4, Art_05_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_05_hist_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05, guider_ui.Art_05_del, &guider_ui.Art_05_hist_del, setup_scr_Art_05, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_hist_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05_des, guider_ui.Art_05_des_del, &guider_ui.Art_05_hist_del, setup_scr_Art_05_des, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_hist_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.End_scrn, guider_ui.End_scrn_del, &guider_ui.Art_05_hist_del, setup_scr_End_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_05_hist (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_05_hist_btn_1, Art_05_hist_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_hist_btn_2, Art_05_hist_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_hist_btn_4, Art_05_hist_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void Art_05_des_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05, guider_ui.Art_05_del, &guider_ui.Art_05_des_del, setup_scr_Art_05, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_des_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05_hist, guider_ui.Art_05_hist_del, &guider_ui.Art_05_des_del, setup_scr_Art_05_hist, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Art_05_des_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.End_scrn, guider_ui.End_scrn_del, &guider_ui.Art_05_des_del, setup_scr_End_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Art_05_des (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Art_05_des_btn_1, Art_05_des_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_des_btn_2, Art_05_des_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Art_05_des_btn_4, Art_05_des_btn_4_event_handler, LV_EVENT_ALL, ui);
}

static void End_scrn_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn, guider_ui.Main_scrn_del, &guider_ui.End_scrn_del, setup_scr_Main_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_End_scrn (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->End_scrn_btn_1, End_scrn_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void Load_scrn_1_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_1_0, guider_ui.Load_scrn_1_0_del, &guider_ui.Load_scrn_1_del, setup_scr_Load_scrn_1_0, LV_SCR_LOAD_ANIM_NONE, 2000, 200, false, false);
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03, guider_ui.Art_03_del, &guider_ui.Load_scrn_1_del, setup_scr_Art_03, LV_SCR_LOAD_ANIM_NONE, 200, 2200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Load_scrn_1_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_01, guider_ui.Art_01_del, &guider_ui.Load_scrn_1_del, setup_scr_Art_01, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Load_scrn_1 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Load_scrn_1_btn_1, Load_scrn_1_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Load_scrn_1_imgbtn_1, Load_scrn_1_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
}

static void Load_scrn_3_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Load_scrn_3_0, guider_ui.Load_scrn_3_0_del, &guider_ui.Load_scrn_3_del, setup_scr_Load_scrn_3_0, LV_SCR_LOAD_ANIM_NONE, 2000, 200, false, false);
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_05, guider_ui.Art_05_del, &guider_ui.Load_scrn_3_del, setup_scr_Art_05, LV_SCR_LOAD_ANIM_NONE, 200, 2200, false, false);
        break;
    }
    default:
        break;
    }
}

static void Load_scrn_3_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Art_03, guider_ui.Art_03_del, &guider_ui.Load_scrn_3_del, setup_scr_Art_03, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
        break;
    }
    default:
        break;
    }
}

void events_init_Load_scrn_3 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Load_scrn_3_btn_1, Load_scrn_3_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Load_scrn_3_imgbtn_1, Load_scrn_3_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
