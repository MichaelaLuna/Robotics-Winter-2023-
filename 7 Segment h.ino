/*--- This is the code for the header ---*/

#ifndef sevSeg_h // If not defined
#define sevSeg_h // Define this library

#include<Arduino.h>; // Added from Arduino's library

class sevSeg{ // Set a name for the class
  
  private: // The encapsulation
    int *pin; // Initializing the pin

  public: 
    sevSeg(){} // Default Constructor
    sevSeg(int pin[8]){ // The constructor that I'm gonna use

  void init(); // Method for initialization
  void displaySevSeg(int code); // Method for displaying the digit

}; // End 

#endif // End of if not defined
  
