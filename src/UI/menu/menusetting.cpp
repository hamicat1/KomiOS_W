#include "menusetting.h"


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
      k_screen_word(scr_menu_items[i],true,10,k_menu_y,"font3x8",0);
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
        bright=k_desktop_numSel("BRIGHT",1,255,bright);
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


char* snd_menu_items[] = {
    "Duty",
    "Mode",
    "INIT",
};
const uint8_t snd_menu_icons[] = {
    3,
    3,
    3
};
const int snd_item_count = 3;

void k_setting_sound(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("SPEAKER");
    k_menu_y=12;
    for (int i = 0; i < scr_item_count; i++) {
      k_screen_word(snd_menu_items[i],true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,snd_menu_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(scr_item_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_key_notpress();
        beepDuty=k_desktop_numSel("DUTY",1984,2112,beepDuty);
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
      k_screen_word(time_menu_items[i],true,10,k_menu_y,"font3x8",0);
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
        k_sel=1;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        k_sel=2;
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        k_screen_init();
        k_sel=3;
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

char* lang_menu_items[] = {
    "English",
    "Dustch",
    "Japanese_kana",
};
const uint8_t lang_menu_icons[] = {
    1,
    1,
    1,
};
const int lang_item_count = 3;

void k_setting_lang(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("LANGUAGE");
    k_menu_y=12;
    for (int i = 0; i < lang_item_count; i++) {
      k_screen_word(lang_menu_items[i],true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,lang_menu_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(lang_item_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){

        k_desktop_noticeWindow("DONE","SET DONE",6,true);
        k_key_notpress();
        k_sel=1;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){

        k_desktop_noticeWindow("DONE","SET DONE",6,true);
        k_key_notpress();
        k_sel=2;
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){

        k_desktop_noticeWindow("DONE","SET DONE",6,true);
        k_key_notpress();
        k_sel=3;
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

void k_setting_device(){
  char buffer[32];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("DEVICE");
    k_menu_y=12;

    k_screen_word("SCREEN",true,10,k_menu_y,"font3x8",0);
    k_icon_show(0,k_menu_y,1,0,true);
    k_menu_y+=10;
    
    k_system();
    k_desktop_menusel(2);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){

        k_sel=1;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){

        k_sel=2;
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){

        k_sel=3;
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
  int menu_page=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("Setting");
    k_menu_y=12;

    if (menu_page==1) {

      k_screen_word("SCREEN",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,4,0,true);
      k_menu_y+=10;
      
      k_screen_word("SPEAKER",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,3,0,true);
      k_menu_y+=10;

      k_screen_word("TIME/DATE",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,5,0,true);
      k_menu_y+=10;

      k_screen_word("LANGUAGE",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,32,0,true);
      k_menu_y+=10;

      k_screen_word("DEVICE",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,0,0,true);
      k_menu_y+=10;

    }else{
      k_screen_word("SYSTEM INFO",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,6,0,true);
      k_menu_y+=10;

      k_screen_word("REBOOT",true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,7,0,true);
      k_menu_y+=10;

    }
    k_system();
    if(UP_KEY==0){
      k_sel-=1;
      k_key_notpress();
      if(k_sel<=0 && menu_page==2){
        k_sel=5;
        menu_page=1;
      }
    }
    if(DOWN_KEY==0){
      k_sel+=1;
      k_key_notpress();
      if(k_sel>5 && menu_page==1){
        k_sel=1;
        menu_page=2;
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1&&menu_page==1){
      if(SEL_KEY==0){
        k_setting_screen();
        k_key_notpress();
        k_sel=1;
        menu_page=1;
      }
    }
    if(k_sel==2&&menu_page==1){
      if(SEL_KEY==0){
        k_setting_sound();
        k_key_notpress();
        k_sel=2;
        menu_page=1;
      }
    }
    if(k_sel==3&&menu_page==1){
      if(SEL_KEY==0){
        k_setting_time();
        k_key_notpress();
        k_sel=3;
        menu_page=1;
      }
    }
    if(k_sel==4&&menu_page==1){
      if(SEL_KEY==0){
        k_setting_lang();
        k_key_notpress();
        k_sel=4;
        menu_page=1;
      }
    }
    if(k_sel==5&&menu_page==1){
      if(SEL_KEY==0){
        k_setting_device();
        k_key_notpress();
        k_sel=5;
        menu_page=1;
      }
    }
    if(k_sel==1&&menu_page==2){
      if(SEL_KEY==0){
        sprintf(buffer, "HEAP: %d KB", ESP.getFreeHeap() / 1024);
        k_desktop_notice(VERSION,buffer);
        k_key_notpress();
      }
    }
    if(k_sel==2&&menu_page==2){
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