#include "font8x8.h"


static const unsigned char PROGMEM font8x8_SPACE[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_INNTER[]={
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_VERTICAL[]={
  0b10100000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_JING[]={
  0b01010000,
  0b01010000,
  0b11110000,
  0b01010000,
  0b10100000,
  0b11110000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font8x8_DOLLAR[]={
  0b01000000,
  0b01110000,
  0b11000000,
  0b11000000,
  0b01100000,
  0b01010000,
  0b11100000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_PERCENT[]={
  0b00000000,
  0b10010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10010000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_AND[]={
  0b00000000,
  0b01000000,
  0b10100000,
  0b01000000,
  0b10010000,
  0b10100000,
  0b11000000,
  0b00110000 };
static const unsigned char PROGMEM font8x8_SPL[]={
  0b00100000,
  0b00100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_LEFTCURV[]={
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000 };
static const unsigned char PROGMEM font8x8_RIGHTCURV[]={
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_STAR[]={
  0b00000000,
  0b01100000,
  0b01100000,
  0b11110000,
  0b01100000,
  0b10010000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_PLUS[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_COMMA[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_MINUS[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_DOT[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_SPLASH[]={
  0b00000000,
  0b00010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_0[]={
  0b01100000,
  0b10010000,
  0b10010000,
  0b10110000,
  0b11010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_1[]={
  0b00100000,
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_2[]={
  0b01100000,
  0b10010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_3[]={
  0b11100000,
  0b00010000,
  0b00010000,
  0b11100000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_4[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000 };
static const unsigned char PROGMEM font8x8_5[]={
  0b11110000,
  0b10000000,
  0b10000000,
  0b01100000,
  0b00010000,
  0b00010000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font8x8_6[]={
  0b01110000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_7[]={
  0b11110000,
  0b00010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_8[]={
  0b01100000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_9[]={
  0b01100000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b00010000,
  0b00010000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font8x8_TWODOT[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_SPLITDOT[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_SMALL[]={
  0b00000000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_EQUAL[]={
  0b00000000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_BIG[]={
  0b00000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_QUESTION[]={
  0b01100000,
  0b10010000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b00000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_AT[]={
  0b00000000,
  0b01100000,
  0b10110000,
  0b11110000,
  0b10110000,
  0b01100000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_A[]={
  0b01100000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_B[]={
  0b11000000,
  0b10100000,
  0b10010000,
  0b10010000,
  0b11100000,
  0b10010000,
  0b10010000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_C[]={
  0b01110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_D[]={
  0b11100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_E[]={
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_F[]={
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_G[]={
  0b01110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_H[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000,
  0b10010000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_I[]={
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_J[]={
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_K[]={
  0b10010000,
  0b10010000,
  0b10100000,
  0b11000000,
  0b11000000,
  0b10100000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_L[]={
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_M[]={
  0b10010000,
  0b10110000,
  0b11110000,
  0b11110000,
  0b11110000,
  0b10010000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_N[]={
  0b10010000,
  0b11010000,
  0b11010000,
  0b11010000,
  0b10110000,
  0b10110000,
  0b10110000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_O[]={
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_P[]={
  0b11100000,
  0b10010000,
  0b10010000,
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_Q[]={
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b00110000 };
static const unsigned char PROGMEM font8x8_R[]={
  0b11100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11100000,
  0b11000000,
  0b10100000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_S[]={
  0b01110000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_T[]={
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_U[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_V[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10110000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_W[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000,
  0b11110000,
  0b11110000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_X[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_Y[]={
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b01100000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Z[]={
  0b11110000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_LEFTSQCURV[]={
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_BACKSPLASH[]={
  0b00000000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00010000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_RIGHTSQCURV[]={
  0b11110000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_POWER[]={
  0b01000000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_DOWNSLASH[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_UPPERCOMMA[]={
  0b10000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_a[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_b[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b10010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_c[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_d[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00010000,
  0b00010000,
  0b01110000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_e[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b11110000,
  0b10000000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_f[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_g[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b01110000,
  0b00010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_h[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_i[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_j[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b11000000,
  0b01000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_k[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b10100000,
  0b11000000,
  0b10100000 };
static const unsigned char PROGMEM font8x8_l[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font8x8_m[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b11110000,
  0b11110000,
  0b11010000,
  0b11010000 };
static const unsigned char PROGMEM font8x8_n[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000 };
static const unsigned char PROGMEM font8x8_o[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_p[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000,
  0b10010000,
  0b11100000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_q[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01110000,
  0b10010000,
  0b01110000,
  0b00010000,
  0b00010000 };
static const unsigned char PROGMEM font8x8_r[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10110000,
  0b11000000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font8x8_s[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01110000,
  0b10000000,
  0b01100000,
  0b00010000,
  0b11100000 };
static const unsigned char PROGMEM font8x8_ct[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font8x8_u[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_v[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_w[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b10110000,
  0b11110000,
  0b11110000,
  0b100110000 };
static const unsigned char PROGMEM font8x8_x[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b01100000,
  0b01100000,
  0b10010000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_y[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10010000,
  0b10010000,
  0b01110000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font8x8_z[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11110000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b11110000 };
static const unsigned char PROGMEM font8x8_LEFTBIGCURV[]={
  0b00110000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b00110000 };
static const unsigned char PROGMEM font8x8_HTZLSPLASH[]={
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_RIGHTBIGCURV[]={
  0b11000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00110000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font8x8_TO[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01010000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000 };

static const unsigned char PROGMEM font8x8_ac[]={
  0b00000000,
  0b00000000,
  0b10010000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_oc[]={
  0b00000000,
  0b00000000,
  0b10010000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_uc[]={
  0b00000000,
  0b00000000,
  0b10010000,
  0b00000000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_ss[]={
  0b00000000,
  0b00000000,
  0b11100000,
  0b10010000,
  0b11100000,
  0b10010000,
  0b11100000,
  0b10000000 };


static const unsigned char PROGMEM font8x8_Viet_a_hu[]={
  0b01000000,
  0b00100000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_a_sa[]={
  0b00100000,
  0b01000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_e_sa[]={
  0b00100000,
  0b01000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b11110000,
  0b10000000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_e_mu[]={
  0b00000000,
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b11110000,
  0b10000000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_o_sa[]={
  0b00100000,
  0b01000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_mu[]={
  0b00000000,
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_D[]={
  0b11100000,
  0b10010000,
  0b10010000,
  0b11010000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11100000 };
  static const unsigned char PROGMEM font8x8_Viet_d[]={
  0b00000000,
  0b00000000,
  0b00010000,
  0b01111000,
  0b00010000,
  0b01110000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_u_mo[]={
  0b00000000,
  0b00000000,
  0b00001000,
  0b10011000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_a_na[]={
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000,
  0b00000000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_a_ho[]={
  0b01100000,
  0b00100000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_a_musa[]={
  0b00100000,
  0b01000000,
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM font8x8_Viet_e_muna[]={
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b11110000,
  0b10000000,
  0b01110000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_i_ho[]={
  0b00000000,
  0b01100000,
  0b00100000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_Viet_i_na[]={
  0b01000000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00000000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_na[]={
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b00000000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_musa[]={
  0b00001000,
  0b00010000,
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_muna[]={
  0b01100000,
  0b10010000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_mohu[]={
  0b01000000,
  0b00100000,
  0b00001000,
  0b01101000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_o_mona[]={
  0b00000000,
  0b00001000,
  0b01101000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_u_moho[]={
  0b01100000,
  0b00100000,
  0b00001000,
  0b10011000,
  0b10010000,
  0b10010000,
  0b01110000,
  0b01100000 };
static const unsigned char PROGMEM font8x8_Viet_u_mona[]={
  0b00000000,
  0b00000000,
  0b00001000,
  0b10011000,
  0b10010000,
  0b10010000,
  0b01110000,
  0b01100000 };


static const unsigned char PROGMEM font8x8_Hira_a[]={
  0b00100000,
  0b1111111,
  0b00101000,
  0b01111100,
  0b10101010,
  0b10010001,
  0b10100010,
  0b01000100 };
static const unsigned char PROGMEM font8x8_Hira_i[]={
  0b00000000,
  0b10000000,
  0b10000100,
  0b10000010,
  0b10000010,
  0b01000000,
  0b00100000,
  0b00000000 };
static const unsigned char PROGMEM font8x8_Hira_u[]={
  0b01100000,
  0b00011100,
  0b00000000,
  0b01111000,
  0b00000100,
  0b00000100,
  0b00000100,
  0b00111000 };
static const unsigned char PROGMEM font8x8_Hira_e[]={
  0b00111000,
  0b00000000,
  0b01111110,
  0b00000100,
  0b00001000,
  0b00011100,
  0b01000110,
  0b00000000 };
static const unsigned char PROGMEM font8x8_Hira_o[]={
  0b00100010,
  0b11111101,
  0b00100000,
  0b01111100,
  0b10100010,
  0b10100001,
  0b10101010,
  0b01000100 };
static const unsigned char PROGMEM font8x8_Hira_ke[]={
  0b10000100,
  0b10000100,
  0b10000100,
  0b10111111,
  0b10000100,
  0b10000100,
  0b10001000,
  0b00010000 };
static const unsigned char PROGMEM font8x8_Hira_ru[]={
  0b11111100,
  0b00001000,
  0b00010000,
  0b00111100,
  0b01000010,
  0b10010001,
  0b00101001,
  0b00011110 };

static const unsigned char PROGMEM font8x8_Kata_ac[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11111110,
  0b00010010,
  0b00010100,
  0b00100000,
  0b01000000 };
static const unsigned char PROGMEM font8x8_Kata_i[]={
  0b00000100,
  0b00001000,
  0b00110000,
  0b11010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000 };
static const unsigned char PROGMEM font8x8_Kata_fu[]={
  0b11111111,
  0b00000001,
  0b00000010,
  0b00000010,
  0b00000100,
  0b00001000,
  0b00110000,
  0b11000000 };
static const unsigned char PROGMEM font8x8_Kata_ru[]={
  0b00001000,
  0b00101000,
  0b00101000,
  0b00101000,
  0b00101001,
  0b00101010,
  0b01001100,
  0b10001000 };

static const unsigned char PROGMEM font8x8_Hanzi_le[]={
  0b11111111,
  0b00000010,
  0b00000100,
  0b00011000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00110000 };
static const unsigned char PROGMEM font8x8_Hanzi_jian[]={
  0b00101000,
  0b01011110,
  0b11101000,
  0b01001000,
  0b01111111,
  0b01001000,
  0b01001000,
  0b01001000 };

static const unsigned char PROGMEM font8x8_Hanzi_shan[]={
  0b11111001,
  0b10101101,
  0b10101101,
  0b11111101,
  0b10101101,
  0b10101101,
  0b10101001,
  0b10101011 };

static const unsigned char PROGMEM font8x8_Hanzi_zhi[]={
  0b01100001,
  0b10100101,
  0b00100101,
  0b11111101,
  0b00100101,
  0b11111101,
  0b10101001,
  0b10101011 };

static const unsigned char PROGMEM font8x8_Hanzi_dong[]={
  0b00000100,
  0b01100100,
  0b00001111,
  0b11100101,
  0b01000101,
  0b10000101,
  0b11100101,
  0b00001011 };

static const unsigned char PROGMEM font8x8_Hanzi_ming4[]={
  0b00011000,
  0b01100110,
  0b11111111,
  0b00000000,
  0b11101111,
  0b10101001,
  0b11101011,
  0b00001000 };
static const unsigned char PROGMEM font8x8_Hanzi_ming2[]={
  0b00100000,
  0b01111111,
  0b10000010,
  0b00001100,
  0b00110000,
  0b11111111,
  0b01000001,
  0b01111111 };

static const unsigned char PROGMEM font8x8_Hanzi_fu[]={
  0b01000000,
  0b11111111,
  0b01111110,
  0b01111110,
  0b01000000,
  0b11111110,
  0b00100100,
  0b01111110 };

static const unsigned char PROGMEM font8x8_Hanzi_wan[]={
  0b00010000,
  0b11111111,
  0b10000001,
  0b01111110,
  0b00000000,
  0b01111110,
  0b00100100,
  0b01000110 };

static const unsigned char PROGMEM font8x8_Hanzi_shu[]={
  0b11111111,
  0b10000001,
  0b11111111,
  0b10111110,
  0b10111110,
  0b10001000,
  0b11111111,
  0b11001001 };

static const unsigned char PROGMEM font8x8_Hanzi_jian_a[]={
  0b00000100,
  0b11101111,
  0b01100101,
  0b10001111,
  0b11100100,
  0b11001111,
  0b01000100,
  0b10111111 };

static const unsigned char PROGMEM font8x8_Hanzi_kai_s[]={
  0b11111111,
  0b00100100,
  0b00100100,
  0b11111111,
  0b00100100,
  0b00100100,
  0b01000100,
  0b10000100 };

static const unsigned char PROGMEM font8x8_Hanzi_xing[]={
  0b01001100,
  0b11111111,
  0b11100100,
  0b01000100,
  0b01011111,
  0b01000100,
  0b01000100,
  0b01011111 };

static const unsigned char PROGMEM font8x8_Hanzi_cheng[]={
  0b00000101,
  0b01111111,
  0b01000100,
  0b01000100,
  0b01110101,
  0b01010110,
  0b01010110,
  0b10001001 };

static const unsigned char PROGMEM font8x8_Hanzi_da[]={
  0b01011111,
  0b01000100,
  0b11100100,
  0b01000100,
  0b01100100,
  0b11000100,
  0b01000100,
  0b11001100 };

static const unsigned char PROGMEM font8x8_Hanzi_ze[]={
  0b01011111,
  0b11101010,
  0b01000100,
  0b01111011,
  0b11011111,
  0b01000100,
  0b01011111,
  0b11000100 };

static const unsigned char PROGMEM font8x8_Hanzi_wen[]={
  0b00010000,
  0b11111111,
  0b01000010,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00111100,
  0b11000011 };

static const unsigned char PROGMEM font8x8_Hanzi_xin[]={
  0b01000001,
  0b11101110,
  0b10101000,
  0b11101000,
  0b11101111,
  0b01001010,
  0b11101010,
  0b01010010 };


static const unsigned char PROGMEM font8x8_Hanzi_zi[]={
  0b00010000,
  0b11111111,
  0b10000001,
  0b11111111,
  0b10000001,
  0b11111111,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM font8x8_Hanzi_xuan[]={
  0b10001000,
  0b01011111,
  0b00000100,
  0b11011111,
  0b01001010,
  0b01010011,
  0b01000000,
  0b10111111 };

static const unsigned char PROGMEM font8x8_Hanzi_chong[]={
  0b01111110,
  0b00011000,
  0b11111111,
  0b01111110,
  0b01011010,
  0b11111111,
  0b00011000,
  0b11111111 };

static const unsigned char PROGMEM font8x8_Hanzi_kai[]={
  0b11100111,
  0b10100101,
  0b11100111,
  0b11100111,
  0b10111101,
  0b10100101,
  0b10111101,
  0b10100101 };

static const unsigned char PROGMEM font8x8_Hanzi_chu[]={
  0b11100100,
  0b10101010,
  0b11011111,
  0b11100100,
  0b10111111,
  0b11001110,
  0b10010101,
  0b10001100 };

static const unsigned char PROGMEM font8x8_empty[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };


const fonts8x8_t fonts8x8[] = {
  {font8x8_SPACE,   4,  8,32},
  {font8x8_INNTER,  4,  8,33},
  {font8x8_VERTICAL,4,  8,34},
  {font8x8_JING,    4,  8,35},
  {font8x8_DOLLAR,  4,  8,36},
  {font8x8_PERCENT, 4,  8,37},
  {font8x8_AND,     4,  8,38},
  {font8x8_SPL,     4,  8,39},
  {font8x8_LEFTCURV,4,  8,40},
  {font8x8_RIGHTCURV, 4,8,41},
  {font8x8_STAR,    4,  8,42},
  {font8x8_PLUS,    4,  8,43},
  {font8x8_COMMA,   4,  8,44},
  {font8x8_MINUS,   4,  8,45},
  {font8x8_DOT,     4,  8,46},
  {font8x8_SPLASH,  4,  8,47},
  {font8x8_0,       4,  8,48},
  {font8x8_1,       4,  8,49},
  {font8x8_2,       4,  8,50},
  {font8x8_3,       4,  8,51},
  {font8x8_4,       4,  8,52},
  {font8x8_5,       4,  8,53},
  {font8x8_6,       4,  8,54},
  {font8x8_7,       4,  8,55},
  {font8x8_8,       4,  8,56},
  {font8x8_9,       4,  8,57},
  {font8x8_TWODOT,  4,  8,58},
  {font8x8_SPLITDOT,4,  8,59},
  {font8x8_SMALL,   4,  8,60},
  {font8x8_EQUAL,   4,  8,61},
  {font8x8_BIG,     4,  8,62},
  {font8x8_QUESTION,4,  8,63},
  {font8x8_AT,      4,  8,64},
  {font8x8_A,       4,  8,65},
  {font8x8_B, 4, 8,66},
  {font8x8_C, 4, 8,67},
  {font8x8_D, 4, 8,68},
  {font8x8_E, 4, 8,69},
  {font8x8_F, 4, 8,70},
  {font8x8_G, 4, 8,71},
  {font8x8_H, 4, 8,72},
  {font8x8_I, 4, 8,73},
  {font8x8_J, 4, 8,74},
  {font8x8_K, 4, 8,75},
  {font8x8_L, 4, 8,76},
  {font8x8_M, 4, 8,77},
  {font8x8_N, 4, 8,78},
  {font8x8_O, 4, 8,79},
  {font8x8_P, 4, 8,80},
  {font8x8_Q, 4, 8,81},
  {font8x8_R, 4, 8,82},
  {font8x8_S, 4, 8,83},
  {font8x8_T, 4, 8,84},
  {font8x8_U, 4, 8,85},
  {font8x8_V, 4, 8,86},
  {font8x8_W, 4, 8,87},
  {font8x8_X, 4, 8,88},
  {font8x8_Y, 4, 8,89},
  {font8x8_Z, 4, 8,90},
  {font8x8_LEFTSQCURV,  4,8,91},
  {font8x8_BACKSPLASH,  4,8,92},
  {font8x8_RIGHTSQCURV, 4,8,93},
  {font8x8_POWER,       4,8,94},
  {font8x8_DOWNSLASH,   4,8,95},
  {font8x8_UPPERCOMMA,  4,8,96},
  {font8x8_a, 4,8,97},
  {font8x8_b, 4,8,98},
  {font8x8_c, 4,8,99},
  {font8x8_d, 4,8,100},
  {font8x8_e, 4,8,101},
  {font8x8_f, 4,8,102},
  {font8x8_g, 4,8,103},
  {font8x8_h, 4,8,104},
  {font8x8_i, 4,8,105},
  {font8x8_j, 4,8,106},
  {font8x8_k, 4,8,107},
  {font8x8_l, 4,8,108},
  {font8x8_m, 4,8,109},
  {font8x8_n, 4,8,110},
  {font8x8_o, 4,8,111},
  {font8x8_p, 4,8,112},
  {font8x8_q, 4,8,113},
  {font8x8_r, 4,8,114},
  {font8x8_s, 4,8,115},
  {font8x8_ct,4,8,116},
  {font8x8_u, 4,8,117},
  {font8x8_v, 4,8,118},
  {font8x8_w, 4,8,119},
  {font8x8_x, 4,8,120},
  {font8x8_y, 4,8,121},
  {font8x8_z, 4,8,122},
  {font8x8_LEFTBIGCURV, 4,8,123},
  {font8x8_HTZLSPLASH,  4,8,124},
  {font8x8_RIGHTBIGCURV,4,8,125},
  {font8x8_TO,4,8,126},

  {font8x8_ac,4,8,0x00E4},
  {font8x8_oc,4,8,0x00F6},
  {font8x8_uc,4,8,0x00FC},
  {font8x8_ss,4,8,0x00DF},


  {font8x8_Viet_a_hu,   4,8,0x00E0},
  {font8x8_Viet_a_sa,   4,8,0x00E1},
  {font8x8_Viet_e_sa,   4,8,0x00E9},
  {font8x8_Viet_e_mu,   4,8,0x00EA},
  {font8x8_Viet_o_sa,   4,8,0x00F3},
  {font8x8_Viet_o_mu,   4,8,0x00F4},
  {font8x8_Viet_D,      4,8,0x0110},
  {font8x8_Viet_d,      5,8,0x0111},
  {font8x8_Viet_u_mo,   5,8,0x01B0},
  {font8x8_Viet_a_na,   4,8,0x1EA1},
  {font8x8_Viet_a_ho,   4,8,0x1EA3},
  {font8x8_Viet_a_musa, 4,8,0x1EA5},
  {font8x8_Viet_e_muna, 4,8,0x1EC7},
  {font8x8_Viet_i_ho,   4,8,0x1EC9},
  {font8x8_Viet_i_na,   4,8,0x1ECB},
  {font8x8_Viet_o_na,   4,8,0x1ECD},
  {font8x8_Viet_o_musa, 5,8,0x1ED5},
  {font8x8_Viet_o_muna, 4,8,0x1ED9},
  {font8x8_Viet_o_mohu, 5,8,0x1EDB},
  {font8x8_Viet_o_mona, 5,8,0x1EDF},
  {font8x8_Viet_u_moho, 5,8,0x1EED},
  {font8x8_Viet_u_mona, 5,8,0x1EF1},




  {font8x8_Hira_a,      8,8,0x3042},
  {font8x8_Hira_i,      8,8,0x3044},
  {font8x8_Hira_u,      8,8,0x3046},
  {font8x8_Hira_e,      8,8,0x3048},
  {font8x8_Hira_o,      8,8,0x304A},
  {font8x8_Hira_ke,     8,8,0x3051},
  {font8x8_Hira_ru,     8,8,0x308B},
  {font8x8_Kata_ac,     8,8,0x30A1},
  {font8x8_Kata_i,      8,8,0x30A4},
  {font8x8_Kata_fu,     8,8,0x30D5},
  {font8x8_Kata_ru,     8,8,0x30EB},


  {font8x8_Hanzi_le,    8,8,0x4E86},
  {font8x8_Hanzi_jian,  8,8,0x4EF6},
  {font8x8_Hanzi_shan,  8,8,0x5220},
  {font8x8_Hanzi_zhi,   8,8,0x5236},
  {font8x8_Hanzi_dong,  8,8,0x52A8},
  {font8x8_Hanzi_ming2, 8,8,0x540D},
  {font8x8_Hanzi_ming4, 8,8,0x547D},
  {font8x8_Hanzi_fu,    8,8,0x590D},
  {font8x8_Hanzi_wan,   8,8,0x5B8C},
  {font8x8_Hanzi_shu,   8,8,0x5C5E},
  {font8x8_Hanzi_jian_a,8,8,0x5EFA},
  {font8x8_Hanzi_kai_s, 8,8,0x5F00},
  {font8x8_Hanzi_xing,  8,8,0x6027},
  {font8x8_Hanzi_cheng, 8,8,0x6210},
  {font8x8_Hanzi_da,    8,8,0x6253},
  {font8x8_Hanzi_ze,    8,8,0x62E9},
  {font8x8_Hanzi_wen,   8,8,0x6587},
  {font8x8_Hanzi_xin,   8,8,0x65B0},
  {font8x8_Hanzi_zi,    8,8,0x81EA},
  {font8x8_Hanzi_xuan,  8,8,0x9009},
  {font8x8_Hanzi_chong, 8,8,0x91CD},
  {font8x8_Hanzi_kai,   8,8,0x958B},
  {font8x8_Hanzi_chu,   8,8,0x9664},

  
};




const uint16_t font8x8_COUNT = sizeof(fonts8x8) / sizeof(fonts8x8_t);

