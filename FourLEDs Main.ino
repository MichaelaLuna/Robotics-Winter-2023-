/*                                     --- This is the Main ---                                               */

#include "FourLEDs.h"           // Include the header file for the FourLEDs class

FourLEDs LedPins(12,11,10,9);   // Create a FourLEDs object named LedPins with the specified pin numbers

void setup(){                   // Run the code once
}                               // End of setup

void loop() {                   // Run the code in loop
  
  LedPins.turnOn(0);            // Turn on LED 0
  delay(500);                   // Wait for 500ms
  LedPins.turnOff(0);           // Turn off LED 0

  LedPins.turnOn(1);            // Turn on LED 1
  delay(500);                   // Wait for 500ms
  LedPins.turnOff(1);           // Turn off LED 1

  LedPins.turnOn(2);            // Turn on LED 2
  delay(500);                   // Wait for 500ms
  LedPins.turnOff(2);           // Turn off LED 2

  LedPins.turnOn(3);            // Turn on LED 3
  delay(500);                   // Wait for 500ms
  LedPins.turnOff(3);           // Turn off LED 3 
   
}                               // End of loop
