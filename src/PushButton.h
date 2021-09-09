/**
 * @file PushButton.h
 * @author Peikun Wu (wpeker@gmail.com)
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PUSHBUTTOM_h
#define PUSHBUTTOM_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class PushButton
{
    private:
        int buttPin;  // Pin number where button connects
        int currState;  // Current state of the button
        int lastState;  // Last state of the button
        long delay = 50; // control the debounce time

    public:
        void init(int buttPin);  // initialize pin for pullup mode
        void begin();  // read inital values at the beginning of the loop
        bool isClick(); // check if there is a click 
        void delayUpdate(long delay); // update the delay value

}

#endif /* PUSHBUTTON_h */