#include "sleep.h"

hw_timer_t *timer0=NULL;

void k_sleep(void){
  k_saveScreen();
  k_screen_clear();
  k_screen_display();
  delay(500);
  k_screen_clear();
  k_screen_display();
  while (DISP_KEY!=0);
  k_screen_clear();
  k_screen_display();
  k_restoreScreen();
}

void timer0_callback(void){
  k_screen_clear();
  k_screen_display();
  k_screen_clear();
  k_screen_display();
}

void k_sleep_init(){
  uint64_t wakeup_pin_mask = 1ULL << DISP_KEY_PIN;
  esp_sleep_enable_ext1_wakeup(wakeup_pin_mask, ESP_EXT1_WAKEUP_ALL_LOW);
}