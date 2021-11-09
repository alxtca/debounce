//VARIABLES ONLY, include in main
#include <Arduino.h>
#include "button.h"

#ifndef VARIABLES_H
#define VARIABLES_H

//BUTTONS
Btn btn1 = {18, LOW};
Btn btn2 = {2, LOW};

//LEDs
const int ledPin = 22;
int led_state = HIGH;

#endif