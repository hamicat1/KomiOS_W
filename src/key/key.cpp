#include "key.h"
#include "../../komiapi.h"

void k_key_init(void){
  pinMode(SEL_KEY_PIN,INPUT_PULLUP);
  pinMode(UP_KEY_PIN,INPUT_PULLUP);
  pinMode(DOWN_KEY_PIN,INPUT_PULLUP);
  pinMode(BACK_KEY_PIN,INPUT_PULLUP);
  pinMode(SWITCH_KEY_PIN,INPUT_PULLUP);
  pinMode(DISP_KEY_PIN,INPUT_PULLUP);
}

void k_key_notpress(){
  while(SEL_KEY==0||UP_KEY==0||DOWN_KEY==0||BACK_KEY==0||SWITCH_KEY==0||DISP_KEY==0){
  }
}
bool k_key_pressed(){
  if (SEL_KEY && UP_KEY && DOWN_KEY && BACK_KEY && SWITCH_KEY){
    return false;
  }
  return true;
}