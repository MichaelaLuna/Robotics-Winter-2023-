/* The goal of this program is to see understand and explore passive filters with capacitors using Arduino UNO
   to see in the oscilliscope the generated square wave signal. The theme of this is knowing how to properly 
   use the basics like setting a variable with an integer value, the pinModes' use and the tone() function.

                                              --- This is the code ---                                        */

const int signalPin = 9;     // Assign signalPin to pin 9 of Arduino

void setup() {               // Run the code once
  
pinMode(signalPin, OUTPUT);  // Set the signalPin as an output

}                            // End of setup

void loop() {                // Run the code in loop
  
  tone(9,60);                // Generates a square wave signal on pin 9 of the Arduino
                             // 9 means pin9 in Arduino and 60 means the frequency value
  
}                            // End of 
