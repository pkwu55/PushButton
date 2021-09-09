/**
 * @file PushButton.cpp
 * @author Peikun Wu (wpeker@gmail.com)
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Arduino.h>
#include "PushButton.h"

PushButton::PushButton() {
}

PushButton::~PushButton() {
}

void PushButton::init(int buttPin) {
    buttPin = buttPin;
    pinMode(buttPin, INPUT_PULLUP);
    currState = digitalRead(buttPin);
}

void PushButton::begin() {
    lastState = currState;
    currState = digitalRead(buttPin);
}

bool isClick() {
    unsigned long PrsTime = 0;
    unsigned long RlsTime = 0;
    if ( lastState == HIGH && currState == LOW ){
        PrsTime = millis();
    }
    if ( lastState == LOW && currState == HIGH ){
        RlsTime = millis();
    }
    if ((RlsTime - PrsTime) > dDelay){
        return 1;
    }
}

void delayUpdate(long delay){
    dDelay = delay;
}