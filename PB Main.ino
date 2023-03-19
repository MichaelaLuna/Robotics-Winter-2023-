/*---- Main Code ----*/

#include "pb.h" // Include the library created
#include "Arduino.h" // Include the Arduino library

int buttonPin = 2; // Initialize that this connected to pin 2 of arduino

PushButton button(buttonPin); // Create an object

void setup() { // Run the code once
  Serial.begin(9600); // Open the serial monitor
  
} // End of setup

void loop() { // Run the code in loop
  if (button.pressed()) { // If PB is pressed
    Serial.println("Button pressed!"); // Print this on SM
    
  } // End of if
  
} // End of loop
