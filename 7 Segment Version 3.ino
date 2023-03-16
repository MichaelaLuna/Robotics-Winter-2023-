



             
              
int segPins[] = {10, 9, 7, 6, 5, 11, 12, 8 };  // Arduino Pin numbers for each segment stored in an array (a, b, c, d, e, f,  g, .)

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

for(int i = 0; i <9; i++){
pinMode(segPins[i], OUTPUT);}
}


// Function for printing the number
void displayDigit(int digit)
{
  for (int i=0; i < 9; i++)
  {

  digitalWrite(segPins[i], segCode[digit][i]);
 //digitalWrite(segPins[i], !segCode[digit][i]);
//  ************************************************
//  ** Notice the one change in the line above 
//  **  '!' is a boolean operator, logical NOT 
//  ** This flips the bit from 0 to 1 or 1 to 0
//  ** Use this line if your display is common Anode
//  ************************************************  
  }
}


void loop() {
  displayDigit(0);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(1);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(2);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(3);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(4);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(5);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(6);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(7);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(8);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
  displayDigit(9);  // Sets the segments on the display to number 1
  delay(2000);      // delay 2000 milliseconds (2 seconds)
}
