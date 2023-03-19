/* ---- The goal of this program is to create a class for the one digit 7 segment and use the created      ----
   ----  class to control the device to count from 0-9. This means knowing how to create a class at first, ----
   ---- which includes knowing how to do and use the "private" and "public" and knowing how to create      ----
   ----                  methods inside it as well and call it in the main code afterwards.                ----  */


class sevSeg{ // Set a name for the class
  
  private: // The encapsulation
    int *pin; // Initializing the pin
    
  public: 
    sevSeg(){} // Default Constructor
    sevSeg(int pin[8]){ // The constructor that I'm gonna use
      this->pin = pin; // Setting the pin from private to be the same as this pin
      
  } // End of the Constructor
    
    void init(){ // Function for initialization
      
      for(int i =0; i<8; i++){ // Set the "i" to be equal 0 and less than 8 as it increases
        pinMode(pin[i], OUTPUT); // Set the pin[i] as an output
        
    } // End of for() loop
    } // End of void init()
    
    void displaySevSeg(int code){ // The method for displaying number 0-9
  
      byte segCode[10][8]={ // The code that will turn on and off each Led of the 7 segment; allows me to show numbers from 0-9
      //  e  d  c  .  b  a  f  g
        { 1, 1, 1, 1, 1, 1, 1, 0},  // 0
        { 0, 0, 1, 1, 1, 0, 0, 0},  // 1
        { 1, 0, 0, 1, 1, 1, 0, 1},  // 2
        { 0, 1, 1, 1, 1, 1, 0, 1},  // 3
        { 0, 0, 1, 1, 1, 0, 1, 1},  // 4
        { 0, 1, 1, 1, 0, 1, 1, 1},  // 5
        { 1, 1, 1, 1, 0, 1, 1, 1},  // 6
        { 0, 0, 1, 1, 1, 1, 0, 0},  // 7
        { 1, 1, 1, 1, 1, 1, 1, 1},  // 8
        { 0, 0, 1, 1, 1, 1, 1, 1},  // 9
        
      }; // End of code
      
      for (int i = 0; i < 8; i++){ // Set i as equal to 0 and less than 8 as it increases
        digitalWrite(pin[i],segCode[code][i]); // 
        
      } // End of for() loop
      
      delay(1000); // Delay for 1 second
      
   } // End of this method
   
}; // End of the class

int segPins[8]{5,6,7,8,9,10,11,12}; // Set the pins 

sevSeg count(segPins); // Create the object

void setup(){ // Run the code once
  count.init(); // Call the "init" from the class to initialize
  
} // End of setup

void loop(){ // Run the code on loop
  for(int i = 0; i < 10; i++){ // Set i as equal to 0 and less than 10 as it increases
    count.displaySevSeg(i); // Call the "displaySevSeg" from the class 
    
  } // End of for() loop
} // End of loop







