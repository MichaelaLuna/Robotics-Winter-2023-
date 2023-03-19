/*---- The goal of this program is to make the 4 digit 7 segment count from 0-9 and    ----
  ---- to be able control each of them seperately but with the shift register 74hc595. ----
  ---- This means knowing which pin should go to which pin and knowing how to properly ----
  ----               set the values (wether high or low) in them.                      ---- */
  
  
int LatchPin = A5;  // defines pin for the latch
int ShiftPin = A4;  // defines pin for shift 
int DataInput = 10; // defines pin for data input 
int digPins[4] = {A0,A1,12,13}; // has four dedicated common pins to control each digit separately 


const byte digits[10] = {   // defines an array of bytes that represent the pattern to light up each segment of a digit.
  B11101111,  // 0 afbgc-de
  B00101100,  // 1
  B10110111,  // 2
  B10111110,  // 3
  B01111100,  // 4
  B11011110,  // 5
  B11011111,  // 6
  B10101100,  // 7
  B11111111,  // 8
  B11111110,  // 9
  
}; // End


void setup() { // Run the code once
  
  pinMode (LatchPin ,OUTPUT); // Sets as an output
  pinMode (ShiftPin, OUTPUT); // Sets as an output
  pinMode (DataInput, OUTPUT); // Sets as an output
  pinMode (A0, OUTPUT); // Sets as an output
  pinMode (A1, OUTPUT); // Sets as an output
  pinMode (12, OUTPUT); // Sets as an output
  pinMode (13, OUTPUT); // Sets as an output
  
}

void loop () { // Run the code in loop

  digitalWrite (13, LOW);  // Set this off
  digitalWrite (12, HIGH); // Set this on
  digitalWrite (A1, HIGH); // Set this on
  digitalWrite (A0, HIGH); // Set this on
  digitalWrite (LatchPin, LOW); // Data will pass
  shiftOut(DataInput, ShiftPin, MSBFIRST,digits[1] );
  digitalWrite (LatchPin, HIGH); // Data will not pass
  delay(5); // Delay for 5ms
 
 
  digitalWrite (13, HIGH); // Set this on
  digitalWrite (12, LOW);  // Set this off
  digitalWrite (A1, HIGH); // Set this on
  digitalWrite (A0, HIGH); // Set this on
  digitalWrite (LatchPin, LOW); // Data will pass
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[2] );
  digitalWrite (LatchPin, HIGH); // Data will not pass
  delay(5); // Delay for 5ms
  
 
  digitalWrite (13, HIGH); // Set this on
  digitalWrite (12, HIGH); // Set this on
  digitalWrite (A1, LOW);  // Set this off
  digitalWrite (A0, HIGH); // Set this on
  digitalWrite (LatchPin, LOW); // Data will pass
  shiftOut(DataInput, ShiftPin, MSBFIRST,digits[3]);
  digitalWrite (LatchPin, HIGH); // Data will not pass
  delay(5); // Delay for 5ms

  digitalWrite (13, HIGH); // Set this on
  digitalWrite (12, HIGH); // Set this on
  digitalWrite (A1, HIGH); // Set this on
  digitalWrite (A0, LOW);  // Set this off
  digitalWrite (LatchPin, LOW); // Data will pass
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[4]);
  digitalWrite (LatchPin, HIGH);// Data will not pass
  delay(5); // Delay for 5ms


} // End of loop
