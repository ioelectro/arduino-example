#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    5

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[1] = CRGB(0, 255, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 255);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(150, 0, 255);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(255, 200, 20);
  FastLED.show();
  delay(500);
  //while(1);
}
