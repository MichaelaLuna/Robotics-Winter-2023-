
int LatchPin = 19;  // defines pin for the latch
int ShiftPin = 18;  // defines pin for shift 
int DataInput = 10; // defines pin for data input 
int digPins[4] = {A0,A1,12,13}; // has four dedicated common pins to control each digit separately */
/*
int D1 = 13; //12
int D2 = 12; //12
int D3 = A1; //A1
int D4 = A0; //A0
*/


const byte digits[10] = {  
  // defines an array of bytes that represent the pattern to light up each segment of a digit.
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
};


void setup() { // code run once 
  pinMode (LatchPin ,OUTPUT);
  pinMode (ShiftPin, OUTPUT);
  pinMode (DataInput, OUTPUT);
  pinMode (A0, OUTPUT);
  pinMode (A1, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT); 
}

void loop () { // code runs in a loop 


  digitalWrite (13, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST,digits[2] );
  digitalWrite (LatchPin, HIGH); 
  delay(5);
 
  

 
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[4] );
  digitalWrite (LatchPin, HIGH);
  delay(5);
  
 
  digitalWrite (13, HIGH);
  digitalWrite (12, HIGH);
  digitalWrite (A1, LOW);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST,digits[6]);
  digitalWrite (LatchPin, HIGH); 
  delay(5);

  digitalWrite (13, HIGH);
  digitalWrite (12, HIGH);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, LOW);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[8]);
  digitalWrite (LatchPin, HIGH);
  delay(5);


}
