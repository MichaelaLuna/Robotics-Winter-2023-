/*                                             --- This is the .cpp file ---                                         */

#include "FourLEDs.h"         // Includes the header file for the FourLEDs class


FourLEDs::FourLEDs(int pin1, int pin2, int pin3, int pin4) { // Constructor to set the LED pins
  
  this->ledPins[0] = pin1;    // Assign pin1 to the first element of the ledPins array
  this->ledPins[1] = pin2;    // Assign pin2 to the second element of the ledPins array
  this->ledPins[2] = pin3;    // Assign pin3 to the third element of the ledPins array
  this->ledPins[3] = pin4;    // Assign pin4 to the fourth element of the ledPins array
  
  for (int i = 0; i < 4; i++) {                // Range for the variable "i"
    pinMode(this->ledPins[i], OUTPUT);         // Set those as an output pin
  }                                            // End of for() loop
}                                              // End of Constructor FourLEDs

void FourLEDs :: turnOn(int ledIndex) {        // Method that turn on LED
      digitalWrite(ledPins[ledIndex], HIGH);   // Turn on the LED with the corresponding pin number
    }                                          // End of Method

void FourLEDs :: turnOff(int ledIndex) {        // Method that turn off LED
      digitalWrite(ledPins[ledIndex], LOW);     // Turn off the LED with the corresponding pin number
    }                                           // End of Method
    
