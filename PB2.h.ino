/*                                                  --- This is the header file ---                                                         */

#ifndef PB_h                                // Checks if PB_h is not already defined
#define PB_h                                // Define PB_h if it is not already defined

#include <Arduino.h>                        // Include the Arduino header file

class PB {                                  // Define a class called "PB"
  private:                                  // Encapsulation
    int pin;                                // Initialize pin
    unsigned long last_pressed_time = 0;    // Store the last time the button was pressed, initialized to 0
    unsigned long debounce_time = 50;       // Store the debounce time, initialized to 50ms
    
  public:                                   // Accessible from outside the class
    PB(){};                                 // Default constructor
    PB(int button_pin);                     // Set the button pin number
    bool isPressed();                       // Public method that checks if the button is pressed and returns a boolean value
};

#endif                                      // End 
