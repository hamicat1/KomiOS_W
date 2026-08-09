#ifndef SYSTEM_H
#define SYSTEM_H

#include "../../komiapi.h"

extern char VERSION[5];
extern char FONT[10];
extern uint8_t bright;


void k_sys_init(bool minimum);
void k_sys_sleep_res();
void k_system(void);



#endif