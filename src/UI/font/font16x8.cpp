#include "font16x8.h"


static const unsigned char PROGMEM font16x8_SPACE[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };

static const unsigned char PROGMEM font16x8_0[]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM font16x8_1[]={
  0b01000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000 };
static const unsigned char PROGMEM font16x8_2[]={
  0b01000000,
  0b10100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b11100000 };
static const unsigned char PROGMEM font16x8_3[]={
  0b11000000,
  0b00100000,
  0b00100000,
  0b11000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font16x8_4[]={
  0b10100000,
  0b10100000,
  0b10100000,
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000 };
static const unsigned char PROGMEM font16x8_5[]={
  0b11100000,
  0b10000000,
  0b10000000,
  0b01100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font16x8_6[]={
  0b01100000,
  0b10000000,
  0b10000000,
  0b11000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font16x8_7[]={
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b10000000 };
static const unsigned char PROGMEM font16x8_8[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b01000000,
  0b10100000,
  0b10100000,
  0b10100000,
  0b01000000 };
static const unsigned char PROGMEM font16x8_9[]={
  0b01000000,
  0b10100000,
  0b10100000,
  0b01100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11000000 };
static const unsigned char PROGMEM font16x8_TWODOT[]={
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b01000000,
  0b00000000,
  0b00000000 };



const fonts16x8_t fonts16x8[] = {
  {font16x8_SPACE, 16, 8},
  {font16x8_0, 16, 8},
  {font16x8_1, 16, 8},
  {font16x8_2, 16, 8},
  {font16x8_3, 16, 8},
  {font16x8_4, 16, 8},
  {font16x8_5, 16, 8},
  {font16x8_6, 16, 8},
  {font16x8_7, 16, 8},
  {font16x8_8, 16, 8},
  {font16x8_9, 16, 8},
  {font16x8_TWODOT, 16, 8},

};





