#include "neopixel.h"

void k_neopixel(uint16_t r,uint16_t g,uint16_t b){
  neopixelWrite(RGB_BUILTIN,r,g,b);
}

