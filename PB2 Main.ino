/*                                                  --- This is the main code ---                                                                */
 
#include <Arduino.h>                    // Include the Arduino.h
#include "PB.h"                         // Include the header file for the PB class

const int BUTTON_PIN = 2;               // Define the pin number 2 for the pushbutton

PB button(BUTTON_PIN);                  // Call the PB class and pass the button pin number to it

void setup() {                          // Run the code once
  Serial.begin(9600);                   // Start the serial communication at 9600 bauds rate
}                                       // End of setup

void loop() {                           // Run the code in loop
  if (button.isPressed()) {             // Check if the button is pressed using the isPressed() function of the PB class
    Serial.println("Button pressed!");  // Print this message to the serial monitor
  }                                     // End of if
}                                       // End of loop
