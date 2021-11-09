//FUNCTION DEFINITIONS
#include <Arduino.h>
#include "button.h"

// & (reference) - use it to update global variables. Without "&" function will create local copy.
void buttonCheck(Btn & btn, int & led_state){
    // read the pushbutton input pin:
  btn.state = digitalRead(btn.pin);

  // compare the buttonState to its previous state
  if (btn.state != btn.last_state) {
    // if the state has changed, increment the counter
    if (btn.state == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      led_state = !led_state;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  btn.last_state = btn.state;
}