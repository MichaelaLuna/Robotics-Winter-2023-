/*                                                  --- This is the main code ---                                                                */

#include "FourLEDs.h"      // Includes the header file for the FourLEDs class      
#include <Arduino.h>       // Includes the Arduino library
#include "PB.h"            // Include the header file for the PB class

int led1 = 12;             // Assign led1 to pin 12
int led2 = 11;             // Assign led2 to pin 11
int led3 = 10;             // Assign led3 to pin 10
int led4 = 9;              // Assign led4 to pin 9

FourLEDs leds(led1, led2, led3, led4);   // Create an object named "leds" for the FourLEDs class
PB pb(6);                                // Create an object named "pb" for the PB class & assign pin 6 to it

int currentLed = 0;        // Declares an integer variable named currentLed and assigns it the value 0
                           // This variable represents the currently lit LED
                           
void setup() {             // Run the code once
}                          // End of setup

void loop() {              // Run the code in loop
  
  if (pb.isPressed()) {        // Check if the button is pressed
    leds.turnOff(currentLed);  // Turn off the current LED

    currentLed++;            // Increment the current LED index

    
    if (currentLed >= 4) {   // If the index is greater than the number of LEDs, 
      currentLed = 0;        // Reset it to 0
    }                        // End of second if

    delay(200);              // Wait for a short delay to slow down the LED change

    leds.turnOn(currentLed); // Turn on the new LED
  }                          // End of first if     
}
