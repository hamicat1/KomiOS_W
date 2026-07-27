#ifndef DESKTOP_H
#define DESKTOP_H

#include "../../komiapi.h"
#include "../oled/oled.h"

extern uint16_t k_menu_sel;

void k_desktop_init();
void k_desktop_letter();
void k_desktop_icon(bool add,bool del,char* name,uint8_t icon);
void k_desktop_menusel(uint32_t k_sel_lim);
void k_desktop_menu();
void k_desktop_window(char* title);
void k_desktop_noticeWindow(char* title,char* index,uint8_t icon,bool while_e);
bool k_desktop_boolSel(char* title,char* index,bool cross);
uint16_t k_desktop_charEdit(char* title,uint16_t max_lim,char* pre_val,bool file);
void k_desktop_timeSel();
uint16_t k_desktop_numSel(char* title,uint16_t min_lim,uint16_t max_lim,uint16_t pre_val);
void k_desktop_notice(char* title,char* index);

extern bool k_exit;
extern uint16_t k_menu_y;

#endif
