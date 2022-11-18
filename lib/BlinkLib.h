#ifndef _blinklib_
#define _blinklib_

#if(ARDUINO>=100)
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class BlinkLib
{
private:
    /* data */
    bool led_state=0;
    uint8_t led_pin;
public:
    BlinkLib(uint8_t pin);
    ~BlinkLib();

    void blink();
};

#endif
