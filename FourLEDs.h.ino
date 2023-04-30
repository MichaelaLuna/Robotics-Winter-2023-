/*                                                  --- This is the header file ---                                                         */

#ifndef FOURLEDS_H                    // Checks if FourLEDs_h is not already defined
#define FOURLEDS_H                    // Define FourLEDs_h if it is not already defined

#include <Arduino.h>                  // Include the Arduino header file

class FourLEDs{                       // Define a class called "FourLEDs"

  private:                            // Encapsulation
    int ledPins[4];                   // An array to store the LED pins
  
  public:                             // Accessible from outside the class
    FourLEDs(){};                     // Default Constructor
    
    FourLEDs(int pin1, int pin2, int pin3, int pin4); // Constructor to set the LED pins

   void turnOn(int ledIndex);         // Method that turn on LED
   void turnOff(int ledIndex);        // Method that turn off LED

};                                    // End of Class

#endif                                // End
