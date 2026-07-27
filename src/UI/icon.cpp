#include "icon.h"

static const unsigned char PROGMEM icon_folder[] =
{ 0b11100000,
  0b10111100,
  0b10111111,
  0b10000001,
  0b10000001,
  0b10000001,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM icon_menu[] =
{ 0b10111111,
  0b00000000,
  0b10111111,
  0b00000000,
  0b10111111,
  0b00000000,
  0b10111111,
  0b00000000 };
static const unsigned char PROGMEM icon_settings[] =
{ 0b00011000,
  0b01100110,
  0b01000010,
  0b10011001,
  0b10011001,
  0b01000010,
  0b01100110,
  0b00011000 };
static const unsigned char PROGMEM icon_beep[] =
{ 0b00000100,
  0b00001100,
  0b00010100,
  0b11100101,
  0b11100101,
  0b00010100,
  0b00001100,
  0b00000100 };
static const unsigned char PROGMEM icon_screen[] =
{ 0b11111111,
  0b10000101,
  0b10000011,
  0b10000001,
  0b11111111,
  0b00011000,
  0b00011000,
  0b00111100 };
static const unsigned char PROGMEM icon_time_date[] =
{ 0b10010000,
  0b11110000,
  0b10010000,
  0b10011110,
  0b11110101,
  0b00010111,
  0b00010001,
  0b00001110 };
static const unsigned char PROGMEM icon_info[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10011001,
  0b10000001,
  0b01011010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_cycle[] =
{ 0b00001000,
  0b00011100,
  0b01001010,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_clock[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10011101,
  0b10011101,
  0b01000010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_question[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10100101,
  0b10001001,
  0b01000010,
  0b00101100,
  0b00011000 };
static const unsigned char PROGMEM icon_tick[] =
{ 0b00000000,
  0b00000001,
  0b00000011,
  0b00000110,
  0b00001100,
  0b10011000,
  0b01110000,
  0b00100000 };
static const unsigned char PROGMEM icon_cross[] =
{ 0b11000000,
  0b01100010,
  0b00110100,
  0b00011000,
  0b00011100,
  0b00100110,
  0b01000011,
  0b00000001 };
static const unsigned char PROGMEM icon_empty[] =
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM icon_drive[] =
{ 0b11111111,
  0b10000111,
  0b10000011,
  0b10000001,
  0b10000001,
  0b11111111,
  0b10000101,
  0b11111111 };
static const unsigned char PROGMEM icon_open[] =
{ 0b00000000,
  0b00000000,
  0b00011000,
  0b00100100,
  0b00100100,
  0b01000010,
  0b01000111,
  0b10000010 };
static const unsigned char PROGMEM icon_copy[] =
{ 0b11100000,
  0b10110000,
  0b10010000,
  0b11110000,
  0b00001110,
  0b00001111,
  0b00001111,
  0b00001111 };
static const unsigned char PROGMEM icon_rename[] =
{ 0b00001010,
  0b00010100,
  0b00101000,
  0b01110000,
  0b01000000,
  0b11111100,
  0b10000100,
  0b11111100 };
static const unsigned char PROGMEM icon_delete[] =
{ 0b00011000,
  0b11111111,
  0b00000000,
  0b11111111,
  0b10100101,
  0b10100101,
  0b10100101,
  0b01111110 };
static const unsigned char PROGMEM icon_file[] =
{ 0b11111100,
  0b10000110,
  0b10000111,
  0b10000001,
  0b10000001,
  0b10000001,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM icon_loading[] =
{ 0b01001001,
  0b10010010,
  0b00100100,
  0b01001001,
  0b10010010,
  0b00100100,
  0b01001001,
  0b10010010 };
static const unsigned char PROGMEM icon_new[] =
{ 0b00011000,
  0b00011000,
  0b00011000,
  0b11111111,
  0b11111111,
  0b00011000,
  0b00011000,
  0b00011000 };

const Icon_t icons[] = {
  {icon_folder, 8, 8},//0
  {icon_menu, 8, 8},
  {icon_settings, 8, 8},
  {icon_beep, 8, 8},
  {icon_screen, 8, 8},
  {icon_time_date, 8, 8},
  {icon_info, 8, 8},
  {icon_cycle, 8, 8},
  {icon_clock, 8, 8},
  {icon_question, 8, 8},
  {icon_tick, 8, 8},//10
  {icon_cross, 8, 8},
  {icon_empty, 8, 8},//12
  {icon_drive, 8, 8},
  {icon_open, 8, 8},
  {icon_copy, 8, 8},
  {icon_rename, 8, 8},
  {icon_delete, 8, 8},
  {icon_file, 8, 8},
  {icon_loading, 8, 8},
  {icon_new, 8, 8},//20
};




static const unsigned char PROGMEM battery_0[] =
{ 0b11111110,
  0b10000010,
  0b10000010,
  0b10000011,
  0b10000011,
  0b10000010,
  0b10000010,
  0b11111110 };
static const unsigned char PROGMEM battery_20[] =
{ 0b11111110,
  0b11000010,
  0b11000010,
  0b11000011,
  0b11000011,
  0b11000010,
  0b11000010,
  0b11111110 };
static const unsigned char PROGMEM battery_40[] =
{ 0b11111110,
  0b11100010,
  0b11100010,
  0b11100011,
  0b11100011,
  0b11100010,
  0b11100010,
  0b11111110 };
static const unsigned char PROGMEM battery_60[] =
{ 0b11111110,
  0b11110010,
  0b11110010,
  0b11110011,
  0b11110011,
  0b11110010,
  0b11110010,
  0b11111110 };
static const unsigned char PROGMEM battery_80[] =
{ 0b11111110,
  0b11111010,
  0b11111010,
  0b11111011,
  0b11111011,
  0b11111010,
  0b11111010,
  0b11111110 };
static const unsigned char PROGMEM battery_100[] =
{ 0b11111110,
  0b11111110,
  0b11111110,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111110,
  0b11111110 };
static const unsigned char PROGMEM battery_crg[] =
{ 0b11111110,
  0b10001010,
  0b10010010,
  0b10111011,
  0b10010011,
  0b10100010,
  0b10100010,
  0b11111110 };

static const unsigned char PROGMEM battery_wire[] =
{ 0b00100000,
  0b01001110,
  0b11111011,
  0b01001110,
  0b10000000,
  0b00000100,
  0b00000110,
  0b11111111 };

const Battery_t battery[] = {
  {battery_0, 8, 8},//0
  {battery_20, 8, 8},
  {battery_40, 8, 8},
  {battery_60, 8, 8},
  {battery_80, 8, 8},
  {battery_100, 8, 8},
  {battery_crg, 8, 8},
  {battery_wire, 8, 8},
};




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
  
};

void k_icon_show(uint8_t x,uint8_t y,uint8_t index,uint8_t bank,bool white){
  if(bank==0){
    const Icon_t *icon=&icons[index];
    k_screen_bmp(x,y,icon->data,icon->width,icon->height,white);
  }
  if(bank==1){
    const fonts3x8_t *font=&fonts3x8[index];
    k_screen_bmp(x,y,font->data,font->width,font->height,white);
  }
  if(bank==2){
    const Battery_t *batt=&battery[index];
    k_screen_bmp(x,y,batt->data,batt->width,batt->height,white);
  }

}
