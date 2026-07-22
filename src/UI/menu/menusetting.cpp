#include "menusetting.h"
char* menu_items[] = {
    "SCREEN",
    "TIME/DATE",
    "SYSTEM INFO",
    "REBOOT"
};

const uint8_t menu_icons[] = {
    4,
    5,
    6,
    7
};
const int item_count = 4;

char* scr_menu_items[] = {
    "BRIGHT",
    "SLEEP DELAY",
    "INIT",
};
const uint8_t scr_menu_icons[] = {
    4,
    8,
    7
};
const int scr_item_count = 3;

void k_setting_screen(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("SCREEN");
    k_menu_y=12;
    for (int i = 0; i < scr_item_count; i++) {
      k_screen_word(scr_menu_items[i],true,10,k_menu_y,"font3x8");
      k_icon_show(0,k_menu_y,scr_menu_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(scr_item_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_key_notpress();
        bright=k_desktop_numSel("BRIGHT",1,128,bright);
        k_desktop_noticeWindow("DONE","SET DONE",6,true);
        k_key_notpress();
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        k_screen_init();
      }
    }

    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}

char* time_menu_items[] = {
    "MANUAL ADJUST",
    "TIME ZONE",
};
const uint8_t time_menu_icons[] = {
    2,
    8,
};
const int time_item_count = 2;

void k_setting_time(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("TIME/DATE");
    k_menu_y=12;
    for (int i = 0; i < time_item_count; i++) {
      k_screen_word(time_menu_items[i],true,10,k_menu_y,"font3x8");
      k_icon_show(0,k_menu_y,time_menu_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(time_item_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_key_notpress();
        k_desktop_timeSel();
        k_desktop_noticeWindow("DONE","SET DONE",6,true);
        k_key_notpress();
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){

      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        k_screen_init();
      }
    }

    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}

void k_menu_setting(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("SETTINGS");
    k_menu_y=12;
    for (int i = 0; i < item_count; i++) {
      k_screen_word(menu_items[i],true,10,k_menu_y,"font3x8");
      k_icon_show(0,k_menu_y,menu_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(item_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_setting_screen();
        k_key_notpress();
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        k_setting_time();
        k_key_notpress();
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        sprintf(buffer, "HEAP: %d KB", ESP.getFreeHeap() / 1024);
        k_desktop_notice(VERSION,buffer);
        k_key_notpress();
      }
    }
    if(k_sel==4){
      if(SEL_KEY==0){
        ESP.restart();
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}