#ifndef KEY_H
#define KEY_H

#include "../../komiapi.h"

#define SEL_KEY_PIN 0
#define SEL_KEY digitalRead(SEL_KEY_PIN)

#define UP_KEY_PIN 7
#define UP_KEY digitalRead(UP_KEY_PIN)

#define DOWN_KEY_PIN 5
#define DOWN_KEY digitalRead(DOWN_KEY_PIN)

#define BACK_KEY_PIN 4
#define BACK_KEY digitalRead(BACK_KEY_PIN)

#define SWITCH_KEY_PIN 16
#define SWITCH_KEY digitalRead(SWITCH_KEY_PIN)

#define DISP_KEY_PIN 18
#define DISP_KEY digitalRead(DISP_KEY_PIN)

void k_key_init(void);
void k_key_notpress();
bool k_key_pressed();

#endif