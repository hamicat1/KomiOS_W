#include "system.h"
#include "../../komiapi.h"

unsigned long previousMillis = 0; // 记录上次触发时间
unsigned long currentMillis = millis();
long interval = 10000;
char VERSION[]="0002";
uint8_t bright=255;
void k_sys_init(bool minimum){

  k_key_init();
  k_screen_init();
  k_screen_clear();
  k_screen_text("Komi OS",1,0,0,"Defaut",1);
  k_screen_text(VERSION,1,45,0,"Defaut",1);
  k_screen_display();
  k_beep_init();
  k_neopixel(0,10,10);
  delay(1000);
  k_neopixel(0,0,0);
  esp_reset_reason_t reason = esp_reset_reason();
  Serial.println(reason);
  char reason_str[4];
  sprintf(reason_str,"%d",reason);
  if (reason_str!="1"){
    k_desktop_notice("ERROR REBOOT", reason_str);
  }
  k_clock_init();
  k_file_init();
  k_desktop_init();

  //k_wifi_init();
  //k_time_init();
  k_sleep_init();
}

 
void k_sys_sleep_res(){
  previousMillis=currentMillis;
}

void k_system(void){
  currentMillis = millis();
  if(DISP_KEY==0||(currentMillis - previousMillis >= interval)){
    delay(250);
    if(DISP_KEY==0){
      k_desktop_notice("DEEPSLEEP","NOW YOU ARE IN DEEP SLEEP");
      k_key_notpress();
      k_screen_clear();
      k_screen_display();
      esp_deep_sleep_start();
    }
    else{
      for(int i=bright;i>0;i--){
      k_screen_dim(i);
      delay(3);
      }
      k_key_notpress();
      k_sleep();
      k_key_notpress();
      currentMillis = millis();
      previousMillis=currentMillis;
      for(int i=0;i<bright;i++){
        k_screen_dim(i);
        delay(2);
      }
    }
  }
  if (k_key_pressed()){
    currentMillis = millis();
    previousMillis=currentMillis;
  }
  k_screen_dim(bright);
  


}