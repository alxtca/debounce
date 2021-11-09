//This program will switch on or off LED with any of two buttons.

#include <Arduino.h>
#include "button.h"
#include "variables.h"

void setup() {
  // initialize the button pin as a input:
  pinMode(btn1.pin, INPUT);
  pinMode(btn2.pin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonCheck(btn1, led_state);
  buttonCheck(btn2, led_state);
  digitalWrite(ledPin, led_state);
}
