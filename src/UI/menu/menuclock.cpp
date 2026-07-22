#include "menuclock.h"





void k_menu_clock(){
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE");
    k_system();
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){

      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        
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