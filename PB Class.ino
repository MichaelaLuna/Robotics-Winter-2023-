/* ---- The goal of this program is to create a class for the Push Button and use the created class to     ----
   ---- show if the button is pressed. This means knowing how to create a class at first,which includes    ----
   ---- knowing how to do and use the "private" and "public" and knowing how to create  methods inside     ----
   ----                  it as well and call it in the main code afterwards.                               ----  */


class PushButton { // Set a name for the class
  
  private: // The encapsulation
  
    int pin; // Initialize the pin
    int state; // Initialize the state

  public: // Can be accces outside the class
  
    PushButton(){} // Default constructor
    PushButton(int buttonPin) { // Constructor I'm gonna use
      pin = buttonPin; // Pin is equal to this
      state = LOW; // Set the state to be low
      pinMode(pin, INPUT_PULLUP); // Activate Input Pullup for the pin
      
    } // End of constructor

    bool pressed() { // When PB is pressed
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
    
}; End of class

int buttonPin = 2; // Set pin 2 equal to this

PushButton button(buttonPin); // Create object

void setup() { // Run the code once
  Serial.begin(9600); // Open Serial Monitor 
  
} // End of setup

void loop() { // Run the code in loop
  if (button.pressed()) { // If button is pressed
    Serial.println("Button pressed!"); // Print this on SM
    
  } // End of if
  
} // End of loop
