#include "menubeep.h"

char* beep_items[] = {
    "FREQ",
    "START",
};

const uint8_t beep_icons[] = {
    3,
    3

};
const int beep_count = 2;

void k_menu_beep(){
  uint8_t freq=440;
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("BEEP");
    k_menu_y=12;
    for (int i = 0; i < beep_count; i++) {
      k_screen_word(beep_items[i],true,10,k_menu_y,"font3x8");
      k_icon_show(0,k_menu_y,beep_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(beep_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_key_notpress();
        freq=k_desktop_numSel("FREQ",400,440,420);
        k_desktop_notice("DONE","SET DONE");
        k_key_notpress();
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        k_beep_tone(freq,500);
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
