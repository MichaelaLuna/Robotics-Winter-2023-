/* The goal of this program is to know how to make the pushbuttons' state read by the microcontroller
   Arduino UNO and to do an action after. This will all be done by making a class first for the Pushbutton 
   and an "isPressed" method to do the reading of the Pushbuttons' state. Also, adding a built-in debounce
   which is the process of filtering out unwanted transitions and ensuring that only one transition is 
   detected for each button press or release, should be added too. This can all be done by knowing how to 
   properly use a pushbutton,to create a built-in debounce for it, unsigned long and the millis() function.


                                                   --- This is the class ---
 
class PB {                                 // Define the class as "PB"

  private:                                 // Encapsulate data
    int pin;                               // Initialize pin
    unsigned long last_pressed_time = 0;   // Set the last pressed time to 0ms
    unsigned long debounce_time = 50;      // Set debounce time to 50ms
    
  public:                                  // Can be modified in any part of the program
    PB(){};                                // Default Constructor
    PB(int button_pin) {                   // Class PBs actions will be done depending on the button_pin 
      pin = button_pin;                    // Set that "pin" is eual to the button_pin 
      pinMode(pin, INPUT_PULLUP);          // Calls the Input_Pullup to stabilize Pushbutton
    } // End of Constructor PB
    
 bool isPressed() {                                     // Define a function named isPressed that returns a boolean value
  if (millis() - last_pressed_time > debounce_time) {   // Check if the time since the last button press is greater than the debounce time
    if (digitalRead(pin) == LOW) {                      // Check if the pushbuttons read value is LOW 
      last_pressed_time = millis();                     // Record the current time in milliseconds
      return true;                                      // Return true to indicate that the button has been pressed
    }                                                   // End of first if
  }                                                     // End of second if
  return false;                                         // If the button is not pressed, return false
}                                                       // End for the bool named "isPressed"
};                                                      // End of class                                  

*/


