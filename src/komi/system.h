#ifndef SYSTEM_H
#define SYSTEM_H

#include "../../komiapi.h"



void k_sys_init(bool minimum);
void k_sys_sleep_res();
void k_system(void);

extern char VERSION[5];
extern uint8_t bright;

#endif