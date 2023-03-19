/* ----- Main Code -----*/


#include "sevSeg.h" // Include the library created

int segPins[8]{5,6,7,8,9,10,11,12}; // Set the pins 

sevSeg Display(segPins); // Create the object

void setup(){ // Run the code once
  Display.init(); // Call the "init" to initialize
  
} // End of setup

void loop(){ // Run the code in loop
  Display.displaySevSeg(int code); // Call the method to display digit
  
} // End of loop
