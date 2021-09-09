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
}

void PushButton::begin() {
    currState = digitalRead(buttPin);
    lastState = currState;
}

bool isClick() {
    unsigned long PrsTime, RlsTime;
    if (){
        add something
    }
}