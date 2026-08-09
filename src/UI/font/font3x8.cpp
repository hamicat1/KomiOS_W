#include "font3x8.h"


static const unsigned char PROGMEM font3x8_SPACE[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_INNTER[]={
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_VERTICAL[]={
  0b10100000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_JING[]={
  0b10100000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_DOLLAR[]={
  0b01000000,
  0b01100000,
  0b11000000,
  0b11000000,
  0b01100000,
  0b01100000,
  0b11000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_PERCENT[]={
  0b00000000,
  0b10100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10100000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_AND[]={
  0b00000000,
  0b01000000,
  0b10100000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b11000000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_SPL[]={
  0b00100000,
  0b00100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_LEFTCURV[]={
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_RIGHTCURV[]={
  0b10000000,
  0b01000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_STAR[]={
  0b00000000,
  0b01000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b10100000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_PLUS[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_COMMA[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_MINUS[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_DOT[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_SPLASH[]={
  0b00000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_0[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_1[]={
  0b01000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_2[]={
  0b01000000,
  0b10100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_3[]={
  0b11000000,
  0b00100000,
  0b00100000,
  0b11000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_4[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_5[]={
  0b11100000,
  0b10000000,
  0b10000000,
  0b01100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_6[]={
  0b01100000,
  0b10000000,
  0b10000000,
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_7[]={
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_8[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_9[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b01100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_TWODOT[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_SPLITDOT[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_SMALL[]={
  0b00000000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_EQUAL[]={
  0b00000000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b11100000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_BIG[]={
  0b00000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_QUESTION[]={
  0b01000000,
  0b10100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_AT[]={
  0b00000000,
  0b01000000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b01100000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_A[]={
  0b01000000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_B[]={
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11000000,
  0b10100000,
  0b10100000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_C[]={
  0b01100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_D[]={
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_E[]={
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_F[]={
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_G[]={
  0b01100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_H[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b10100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_I[]={
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_J[]={
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_K[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b11000000,
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_L[]={
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_M[]={
  0b10100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b10100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_N[]={
  0b10100000,
  0b10100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_O[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_P[]={
  0b11000000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_Q[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01100000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_R[]={
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11000000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_S[]={
  0b01100000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_T[]={
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_U[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_V[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_W[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_X[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_Y[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_Z[]={
  0b11100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_LEFTSQCURV[]={
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_BACKSPLASH[]={
  0b00000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00100000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_RIGHTSQCURV[]={
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_POWER[]={
  0b01000000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_DOWNSLASH[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_UPPERCOMMA[]={
  0b10000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_a[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_b[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b11000000,
  0b10100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_c[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_d[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100000,
  0b00100000,
  0b01100000,
  0b10100000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_e[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b11100000,
  0b10000000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_f[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_g[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b01100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_h[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b11000000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_i[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_j[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b11000000,
  0b01000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_k[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b10100000,
  0b11000000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_l[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_m[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_n[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_o[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b01000000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_p[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11000000,
  0b10100000,
  0b11000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_q[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10100000,
  0b01100000,
  0b00100000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_r[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_s[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_ct[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_u[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_v[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_w[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b11100000,
  0b11100000,
  0b11100000,
  0b10100000 };
static const unsigned char PROGMEM font3x8_x[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b01000000,
  0b01000000,
  0b10100000,
  0b00000000 };
static const unsigned char PROGMEM font3x8_y[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10100000,
  0b10100000,
  0b01100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font3x8_z[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b11100000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font3x8_LEFTBIGCURV[]={
  0b00100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b00100000 };
static const unsigned char PROGMEM font3x8_HTZLSPLASH[]={
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_RIGHTBIGCURV[]={
  0b10000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01100000,
  0b01000000,
  0b01000000,
  0b10000000 };
static const unsigned char PROGMEM font3x8_TO[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000 };

static const unsigned char PROGMEM font3x8_ac[]={
  0b00000000,
  0b00000000,
  0b10100000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_oc[]={
  0b00000000,
  0b00000000,
  0b10100000,
  0b00000000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font3x8_uc[]={
  0b00000000,
  0b00000000,
  0b10100000,
  0b00000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01100000 };
static const unsigned char PROGMEM font3x8_ss[]={
  0b00000000,
  0b00000000,
  0b11000000,
  0b10100000,
  0b11000000,
  0b10100000,
  0b11100000,
  0b10000000 };


const fonts3x8_t fonts3x8[] = {
  {font3x8_SPACE, 3, 8},
  {font3x8_INNTER, 3, 8},
  {font3x8_VERTICAL, 3, 8},
  {font3x8_JING, 3, 8},
  {font3x8_DOLLAR, 3, 8},
  {font3x8_PERCENT, 3, 8},
  {font3x8_AND, 3, 8},
  {font3x8_SPL, 3, 8},
  {font3x8_LEFTCURV, 3, 8},
  {font3x8_RIGHTCURV, 3, 8},
  {font3x8_STAR, 3, 8},
  {font3x8_PLUS, 3, 8},
  {font3x8_COMMA, 3, 8},
  {font3x8_MINUS, 3, 8},
  {font3x8_DOT, 3, 8},
  {font3x8_SPLASH, 3, 8},
  {font3x8_0, 3, 8},
  {font3x8_1, 3, 8},
  {font3x8_2, 3, 8},
  {font3x8_3, 3, 8},
  {font3x8_4, 3, 8},
  {font3x8_5, 3, 8},
  {font3x8_6, 3, 8},
  {font3x8_7, 3, 8},
  {font3x8_8, 3, 8},
  {font3x8_9, 3, 8},
  {font3x8_TWODOT, 3, 8},
  {font3x8_SPLITDOT, 3, 8},
  {font3x8_SMALL, 3, 8},
  {font3x8_EQUAL, 3, 8},
  {font3x8_BIG, 3, 8},
  {font3x8_QUESTION, 3, 8},
  {font3x8_AT, 3, 8},
  {font3x8_A, 3, 8},
  {font3x8_B, 3, 8},
  {font3x8_C, 3, 8},
  {font3x8_D, 3, 8},
  {font3x8_E, 3, 8},
  {font3x8_F, 3, 8},
  {font3x8_G, 3, 8},
  {font3x8_H, 3, 8},
  {font3x8_I, 3, 8},
  {font3x8_J, 3, 8},
  {font3x8_K, 3, 8},
  {font3x8_L, 3, 8},
  {font3x8_M, 3, 8},
  {font3x8_N, 3, 8},
  {font3x8_O, 3, 8},
  {font3x8_P, 3, 8},
  {font3x8_Q, 3, 8},
  {font3x8_R, 3, 8},
  {font3x8_S, 3, 8},
  {font3x8_T, 3, 8},
  {font3x8_U, 3, 8},
  {font3x8_V, 3, 8},
  {font3x8_W, 3, 8},
  {font3x8_X, 3, 8},
  {font3x8_Y, 3, 8},
  {font3x8_Z, 3, 8},
  {font3x8_LEFTSQCURV,3,8},
  {font3x8_BACKSPLASH,3,8},
  {font3x8_RIGHTSQCURV,3,8},
  {font3x8_POWER,3,8},
  {font3x8_DOWNSLASH,3,8},
  {font3x8_UPPERCOMMA,3,8},
  {font3x8_a,3,8},
  {font3x8_b,3,8},
  {font3x8_c,3,8},
  {font3x8_d,3,8},
  {font3x8_e,3,8},
  {font3x8_f,3,8},
  {font3x8_g,3,8},
  {font3x8_h,3,8},
  {font3x8_i,3,8},
  {font3x8_j,3,8},
  {font3x8_k,3,8},
  {font3x8_l,3,8},
  {font3x8_m,3,8},
  {font3x8_n,3,8},
  {font3x8_o,3,8},
  {font3x8_p,3,8},
  {font3x8_q,3,8},
  {font3x8_r,3,8},
  {font3x8_s,3,8},
  {font3x8_ct,3,8},
  {font3x8_u,3,8},
  {font3x8_v,3,8},
  {font3x8_w,3,8},
  {font3x8_x,3,8},
  {font3x8_y,3,8},
  {font3x8_z,3,8},
  {font3x8_LEFTBIGCURV,3,8},
  {font3x8_HTZLSPLASH,3,8},
  {font3x8_RIGHTBIGCURV,3,8},
  {font3x8_TO,3,8},
  
  {font3x8_ac, 3, 8},
  {font3x8_oc, 3, 8},
  {font3x8_uc, 3, 8},
  {font3x8_ss, 3, 8},
};





