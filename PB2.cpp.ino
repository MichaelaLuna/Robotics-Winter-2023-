/*                                                  --- This is the .cpp file ---                                                         */

#include "PB.h"                           // Include the header file for the PB class

PB::PB(int button_pin) {                  // Constructor for the PB class that takes the button pin number
  pin = button_pin;                       // Store the button pin number in the "pin"
  pinMode(pin, INPUT_PULLUP);             // Activate internal pullup resistor to the pushbuttons' pin#
}                                         // End 

bool PB::isPressed() {                    // Public method of the PB class that returns a boolean value
  
  if (millis() - last_pressed_time > debounce_time) {    // Check if the time since the last button press is greater than the debounce time
    
    if (digitalRead(pin) == LOW) {        // Check if the pushbuttons read value is LOW 
      last_pressed_time = millis();       // Record the current time in milliseconds
      return true;                        // Return true to indicate that the button has been pressed
   }                                      // End of first if
   }                                      // End of second if
  return false;                           // If the button is not pressed, return false
}                                         // End for the bool named "isPressed"
