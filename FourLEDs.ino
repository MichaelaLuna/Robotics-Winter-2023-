/* The goal of this program is to control four LEDs using a class and by dividing the said 
   code into three different sections: header, .cpp and the main. By dividing them, the 
   code should still work the same as when it is still in the class format. The theme of this
   is knowing first of all how to create a class and know how it works and also knowing how
   to properly divide the class in the three said sections.


                                                         --- This is the class ---
                                               
class FourLEDs {                                // Define a class called FourLEDs
  private:                                      // Encapsulation
    int ledPins[4];                             // An array to store the LED pins

  public:                                       // Accessible from outside the class

    FourLEDs(){};                               // Default Constructor
    
    FourLEDs(int pin1, int pin2, int pin3, int pin4) {  // Constructor to set the LED pins
    
      ledPins[0] = pin1;                        // Assign pin1 to the first element of the ledPins array
      ledPins[1] = pin2;                        // Assign pin2 to the second element of the ledPins array
      ledPins[2] = pin3;                        // Assign pin3 to the third element of the ledPins array
      ledPins[3] = pin4;                        // Assign pin4 to the fourth element of the ledPins array

      for (int i = 0; i < 4; i++) {             // Range for the variable "i"
        pinMode(ledPins[i], OUTPUT);            // Set those as an output pin
      }                                         // End of for() loop
    }                                           // End of Constructor FourLEDs

    void turnOn(int ledIndex) {                 // Method that turn on LED
      digitalWrite(ledPins[ledIndex], HIGH);    // Turn on the LED with the corresponding pin number
    }                                           // End of Method

    void turnOff(int ledIndex) {                // Method that turn off LED
      digitalWrite(ledPins[ledIndex], LOW);     // Turn off the LED with the corresponding pin number
    }                                           // End of Method
    
};                                              // End of Class

*/
