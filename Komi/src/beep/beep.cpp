#include "beep.h"

void k_beep_init(){
  ledcSetup(BEEP_CHANNEL_0,BEEP_BASE_FREQ,BEEP_TIMER_12_BIT);
  ledcAttachPin(BEEP_PIN, BEEP_CHANNEL_0);
  ledcWrite(BEEP_CHANNEL_0,2048);
  delay(100);
  ledcWriteTone(BEEP_CHANNEL_0,0);
}

void k_beep_tone(uint32_t freq, uint32_t duration_ms) {
    ledcWriteTone(BEEP_CHANNEL_0, freq);
    if (duration_ms > 0) {
        delay(duration_ms);
        ledcWriteTone(BEEP_CHANNEL_0, 0); // 停止发声
    }
}
void k_beep_notice(int num) {
  if (num==1){
    k_beep_tone(440,100);
    k_beep_tone(523,100);
  }
  if (num==2){
    k_beep_tone(440,100);
    k_beep_tone(466,100);
  }
}