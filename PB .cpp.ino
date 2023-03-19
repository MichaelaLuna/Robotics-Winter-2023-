#include "pb.h"  // Include the library created
#include "Arduino.h"  // Include the Arduino library


PushButton::PushButton(int buttonPin) { // Define the variable from this constructor
  pin = buttonPin; // Set pin equal to this
  state = LOW; // Set state to be low
  pinMode(pin, INPUT_PULLUP); // Set pin to activate input pullup
  
} // End 

bool PushButton::pressed() { // Define the variable from this constructor
  
  int reading = digitalRead(pin); // Set the reading as an integer and equal to what the pin will read

  if (reading == LOW && state == HIGH) { // If reading is low and state is high
        delay(50);  // Delay for 50 ms
        reading = digitalRead(pin);// Set the reading as equal to what the pin will read
        if (reading == LOW) { // If reading is low
          state = LOW; // If state is low
          return true; // Make it true again
          
        } // End of 2nd if
        
      } // End of 1st if
      
      state = reading; // If state is equal to reading
      return false; // Make it false
      
 } // End 
