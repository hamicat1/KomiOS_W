#include "rtcclock.h"
ESP32Time rtc(8 * 3600);
void k_clock_init(){
  if (k_desktop_boolSel("TIME INIT","Use defaut set?",true)){
    rtc.setTime(0,59,15,31,12,2026);
  }

  
}

