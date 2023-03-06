
int LatchPin = 19;  // defines pin for the latch
int ShiftPin = 18;  // defines pin for shift 
int DataInput = 10; // defines pin for data input 
int digPins[4] = {A0,A1,A2,12}; // has four dedicated common pins to control each digit separately */
/*
int D1 = 12; //12
int D2 = A2; //A2
int D3 = A1; //A1
int D4 = A0; //A0
*/


byte digits[10] = {  
  // defines an array of bytes that represent the pattern to light up each segment of a digit.

  
  0B11110110,  // 0 FABCGED
  0B00110000,  // 1
  0B01101110,  // 2
  0B01111010,  // 3
  0B01111000,  // 4
  0B11011100,  // 5
  0B11011110,  // 6
  0B10101000,  // 7
  0B11111110,  // 8
  0B11111100,  // 9
};


void setup() { // code run once 
  pinMode (LatchPin ,OUTPUT);
  pinMode (ShiftPin, OUTPUT);
  pinMode (DataInput, OUTPUT);
  pinMode (A0, OUTPUT);
  pinMode (A1, OUTPUT);
  pinMode (A2, OUTPUT);
  pinMode (12, OUTPUT); 
  Serial.begin(9600);
}

void loop () { // code runs in a loop 

 delay(3);
  digitalWrite (12, LOW);
  digitalWrite (A2, HIGH);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[0]/*0B10110110*/);
  digitalWrite (LatchPin, HIGH); 
 
 delay(3);
  digitalWrite (12, HIGH);
  digitalWrite (A2, LOW);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[1]/*0B11101110*/ );
  digitalWrite (LatchPin, HIGH); 

 delay(3);
 
  digitalWrite (12, HIGH);
  digitalWrite (A2, HIGH);
  digitalWrite (A1, LOW);
  digitalWrite (A0, HIGH);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST,digits[2]/* 0B11101110*/);
  digitalWrite (LatchPin, HIGH); 

 delay(3);

 
  digitalWrite (12, HIGH);
  digitalWrite (A2, HIGH);
  digitalWrite (A1, HIGH);
  digitalWrite (A0, LOW);
  digitalWrite (LatchPin, LOW);
  shiftOut(DataInput, ShiftPin, MSBFIRST, digits[3] /*0B10110110*/ );
  digitalWrite (LatchPin, HIGH);


 delay(3);


}




/*

int ClockPin = 9;  // defines pin for the latch
int DataInput = 8; // defines pin for data input 
int digPins[4] = {5,4,3,2}; // has four dedicated common pins to control each digit separately 

void setup() { // code run once 
  pinMode (ClockPin, OUTPUT);
  pinMode (DataInput, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (2, OUTPUT); 
  Serial.begin(9600);
}

void loop () { // code runs in a loop 
 
  digitalWrite (5, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (ClockPin, LOW);
  shiftOut(DataInput, ClockPin, MSBFIRST,0B00101000);
  digitalWrite (ClockPin, HIGH); 



  digitalWrite (5, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (ClockPin, LOW);
  shiftOut(DataInput, ClockPin, MSBFIRST, 0B10110110 );
  digitalWrite (ClockPin, HIGH); 
 

  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (2, HIGH);
  digitalWrite (ClockPin, LOW);
  shiftOut(DataInput, ClockPin, MSBFIRST, 0B10111100);
  digitalWrite (ClockPin, HIGH); 

 
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, LOW);
  digitalWrite (ClockPin, LOW);
  shiftOut(DataInput, ClockPin, MSBFIRST,0B01111000 );
  digitalWrite (ClockPin, HIGH); 

 
}
*/
