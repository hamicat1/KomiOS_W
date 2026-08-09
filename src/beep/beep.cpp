#include "beep.h"
const uint16_t noteFreq[] = {
    61, 65, 69, 73, 77, 82, 87, 92, 98, 103, 110, 116, // C2-B2
    123, 130, 138, 146, 155, 164, 174, 185, 196, 207, 220, 233, // C3-B3
    246, 262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, // C4-B4
    494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, // C5-B5
    988, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, // C6-B6
    1976, 2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729 // C7-B7
};
int beepDuty=2048;
void k_beep_init(){
  ledcSetup(BEEP_CHANNEL_0,BEEP_BASE_FREQ,BEEP_TIMER_12_BIT);
  ledcAttachPin(BEEP_PIN, BEEP_CHANNEL_0);
  ledcWrite(BEEP_CHANNEL_0,beepDuty);
  delay(100);
  ledcWriteTone(BEEP_CHANNEL_0,0);
}


void k_beep_tone(uint32_t freq, uint32_t duration_ms) {
    ledcWriteTone(BEEP_CHANNEL_0, freq);
    if (duration_ms > 0) {
      delay(duration_ms);
      ledcWriteTone(BEEP_CHANNEL_0, 0); // 停止发声
    }else{
      ledcWriteTone(BEEP_CHANNEL_0, 0); // 停止发声
    }
}

void k_beep_stop(uint32_t duration_ms) {
  ledcWriteTone(BEEP_CHANNEL_0, 0); // 停止发声
  delay(duration_ms);
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

void k_beep_note(uint32_t noteNum,uint32_t duration){
  if(noteNum<33||noteNum>96) {
    k_beep_stop(duration);
    return;
    }
  k_beep_tone(noteFreq[noteNum-33],duration);
}

void k_beep_music(int num) {
  if (num==1){
    for(int i=0;i<3;i++){
      k_beep_note(72,400);
      k_beep_note(76,400);
      k_beep_note(81,400);
      k_beep_note(76,400);
      k_beep_note(69,400);
      k_beep_note(76,400);

      k_beep_note(71,400);
      k_beep_note(76,400);
      k_beep_note(81,400);
      k_beep_note(76,400);
      k_beep_note(69,400);
      k_beep_note(76,400);
    }
    k_beep_note(72,400);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(76,400);
    k_beep_note(72,400);
    k_beep_note(76,400);

    k_beep_note(74,400);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(76,400);
    k_beep_note(74,400);
    k_beep_note(76,400);
  
    k_beep_note(72,400);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(76,400);
    k_beep_note(72,800);

    k_beep_note(74,800);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(76,800);


    k_beep_note(76,400);
    k_beep_note(77,400);
    k_beep_note(84,400);
    k_beep_note(77,400);
    k_beep_note(76,400);
    k_beep_note(77,400);

    k_beep_note(76,400);
    k_beep_note(77,400);
    k_beep_note(83,400);
    k_beep_note(77,400);
    k_beep_note(76,400);
    k_beep_note(77,400);

    k_beep_note(74,400);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(77,400);
    k_beep_note(76,400);
    k_beep_note(77,400);

    k_beep_note(72,400);
    k_beep_note(76,400);
    k_beep_note(81,400);
    k_beep_note(77,400);
    k_beep_note(76,400);
    k_beep_note(77,400);

    k_beep_note(71,400);
    k_beep_note(77,400);
    k_beep_note(79,400);
    k_beep_note(77,400);
    k_beep_note(71,400);
    k_beep_note(77,400);

    k_beep_note(69,400);
    k_beep_note(76,400);
    k_beep_note(77,400);
    k_beep_note(76,400);
    k_beep_note(69,400);
    k_beep_note(76,400);

    k_beep_note(69,400);
    k_beep_note(74,400);
    k_beep_note(76,400);
    k_beep_note(74,400);
    k_beep_note(69,400);
    k_beep_note(74,400);

    k_beep_note(69,400);
    k_beep_note(72,400);
    k_beep_note(76,400);
    k_beep_note(72,400);
    k_beep_note(69,400);
    k_beep_note(72,400);
  }
     
  if (num==2){
    k_beep_tone(440,100);
    k_beep_tone(466,100);
  }
}

