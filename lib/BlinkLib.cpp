#include "BlinkLib.h"

BlinkLib::BlinkLib(uint8_t pin)
{
  led_pin=pin;
  pinMode(pin,OUTPUT);
}

BlinkLib::~BlinkLib()
{
}

void BlinkLib::blink()
{
  digitalWrite(led_pin,led_state);
  led_state=!led_state;
}
