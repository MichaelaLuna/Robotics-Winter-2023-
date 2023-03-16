/* ----- This program is used to control a one digit 7 segment to count from numbers 0-9 using the arrays in top and the for()   -----
   ----- loop in the setup. It's about knowing how to use the array properly and also knowing how to associate "byte" in this    -----
   ----- case; knowing that byte will be the one used with the logic that showing different numbers with a 7 segment means       ----- 
   ----- turning on and off the leds in it. Also, it's about knowing how to set all the pins as an output while putting them     -----
   ----- in a for() loop that includes: initialization, condition and incrementation; and knowing how to call them in the void   -----
   ----- loop() after. Part of the goal of this is to know the purpose of each pin and know which is connected to which in       -----
   -----       order to which is connected to which in order to know how to diplay a number from 0-9 in this device.             ----- */
             
              
int segPins[] = {10, 9, 7, 6, 5, 11, 12, 8 };  // Pin numbers from the arduino for each segment stored in an array (a, b, c, d, e, f,  g, .)

byte segCode[10][8] = {   // The code that will turn on and off each Led of the 7 segment; allows me to show numbers from 0-9
  
/*  a  b  c  d  e  f  g  .

  { 1, 1, 1, 1, 1, 1, 0, 0},  -- 0
  { 0, 1, 1, 0, 0, 0, 0, 0},  -- 1
  { 1, 1, 0, 1, 1, 0, 1, 0},  -- 2
  { 1, 1, 1, 1, 0, 0, 1, 0},  -- 3
  { 0, 1, 1, 0, 0, 1, 1, 0},  -- 4
  { 1, 0, 1, 1, 0, 1, 1, 0},  -- 5
  { 1, 0, 1, 1, 1, 1, 1, 0},  -- 6
  { 1, 1, 1, 0, 0, 0, 0, 0},  -- 7
  { 1, 1, 1, 1, 1, 1, 1, 0},  -- 8
  { 1, 1, 1, 1, 0, 1, 1, 0},  -- 9
  
*/
  
}; // End of the array segCode


void setup() {  // Runs the code once

for(int i = 0; i <9; i++) {  // This initialize the "i" to be euqal to 0 and less than 9 as it increases 
  
    pinMode(segPins[i], OUTPUT); // Sets the "i" as an output
  
} // End of for() loop

} // End of setup



void displayDigit(int digit){ // The function for calling and displaying a digit
  
  for (int i=0; i < 9; i++) { // This initialize the "i" to be euqal to 0 and less than 9 as it increases 

  digitalWrite(segPins[i], segCode[digit][i]); // This activates the "segPins" so leds will light up
                                               // This activates the "segCode" as well; the pattern from it will show
    
    
 /* digitalWrite(segPins[i], !segCode[digit][i]); -- I can use this if my wiring is in "Common Anode" */

} // End of for() loop
  
} // End of function 




void loop() { // Run the code on loop
  
  displayDigit(0);  // Call the function "displayDigit" to display 0
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(1);  // Call the function "displayDigit" to display 1
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(2);  // Call the function "displayDigit" to display 2
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(3);  // Call the function "displayDigit" to display 3
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(4);  // Call the function "displayDigit" to display 4
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(5);  // Call the function "displayDigit" to display 5
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(6);  // Call the function "displayDigit" to display 6
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(7);  // Call the function "displayDigit" to display 7
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(8);  // Call the function "displayDigit" to display 8
  
  delay(2000);      // Delay for 2 seconds
  
  displayDigit(9);  // Call the function "displayDigit" to display 9
  
  delay(2000);      // Delay for 2 seconds
  
} // End of loop
