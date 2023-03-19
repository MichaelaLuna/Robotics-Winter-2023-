/*--- This is the code for the cpp ---*/

#include "sevSeg.h" // Include the folder from this project

sevSeg::sevSeg(int pin[8]){ // Define the variable from this constructor
                            
this->pin = pin; // States that this pin is equivalent to pin

} // End

void sevSeg::init(){ // Define the init from this constructor
  
  for(int i =0; i<8; i++){ // Set the "i" to be equal 0 and less than 8 as it increases
        pinMode(pin[i], OUTPUT); // Set the pin[i] as an output
        
    } // End of for() loop
    } // End of void init()
    
void sevSeg::displaySevSeg(int code){ // Define the displaySevSeg from this constructor
  
   byte segCode[10][8]={ // The code that will turn on and off each Led of the 7 segment; allows me to show numbers from 0-9
      //  e  d  c  .  b  a  f  g
        { 1, 1, 1, 1, 1, 1, 1, 0},  // 0
        { 0, 0, 1, 1, 1, 0, 0, 0},  // 1
        { 1, 1, 0, 1, 1, 1, 0, 1},  // 2
        { 0, 1, 1, 1, 1, 1, 0, 1},  // 3
        { 0, 0, 1, 1, 1, 0, 1, 1},  // 4
        { 0, 1, 1, 1, 0, 1, 1, 1},  // 5
        { 1, 1, 1, 1, 0, 1, 1, 1},  // 6
        { 0, 0, 1, 1, 1, 1, 0, 0},  // 7
        { 1, 1, 1, 1, 1, 1, 1, 1},  // 8
        { 0, 0, 1, 1, 1, 1, 1, 1},  // 9
        
      }; // End of code
      
      for (int i = 0; i < 8; i++){ // Set i as equal to 0 and less than 8 as it increases
        digitalWrite(pin[i],segCode[code][i]); // Set pin[i] to output the segcode
        
      } // End of for() loop
      
      delay(1000); // Delay for 1 second
      
   } // End of this method



