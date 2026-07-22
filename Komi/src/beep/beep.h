#ifndef BEEP_H
#define BEEP_H

#include "../../komiapi.h"


#define BEEP_CHANNEL_0     0
#define BEEP_TIMER_12_BIT  12
#define BEEP_BASE_FREQ     440
#define BEEP_PIN            6

void k_beep_init();
void k_beep_tone(uint32_t freq, uint32_t duration_ms);
void k_beep_notice(int num);
#endif
