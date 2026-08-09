#include "menuwire.h"

char* wire_items[] = {
    "GPIO",
    "UART",
};

const uint8_t wire_icons[] = {
    1,
    1

};
const int wire_count = 2;

void k_menu_wire(){
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("Wire");
    k_menu_y=12;
    for (int i = 0; i < wire_count; i++) {
      k_screen_word(wire_items[i],true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,wire_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(wire_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        k_key_notpress();

        k_desktop_notice("DONE","SET DONE");
        k_key_notpress();
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        k_key_notpress();
        k_beep_notice(1);
        int serial_temp_num=0;
        k_exit=true;
        while(k_exit){
          k_screen_clear();
//          k_screen_word(wire_items[i],true,10,k_menu_y,"font3x8",0);
//          k_icon_show(0,k_menu_y,wire_icons[i],0,true);
        }
        k_key_notpress();
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
