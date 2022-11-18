#include "BlinkLib.h"

BlinkLib led(LED_BUILTIN);

void setup(){
}

void loop(){
  led.blink();
  delay(1000);
}
