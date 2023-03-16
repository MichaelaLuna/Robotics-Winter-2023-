/* ----- This program is used to control a one digit 7 segment to count from numbers 0-9 using the simpliest way possible. -----
   ----- The simpliest means knowing how to set all the pins as an output and know how to call them in the loop as well.   ----- 
   ----- Although, part of the goal of this is to know the purpose of each pin and know which is connected to which in     ----- 
   -----                        order to know how to diplay a number from 0-9 in this device.                              ----- */
   

void setup() {   // This runs the code once
  
pinMode(5, OUTPUT);  // Sets the #1 pin (Led E) of the 7 Segment as an output
pinMode(6, OUTPUT);  // Sets the #2 pin (Led D) of the 7 Segment as an output
pinMode(7, OUTPUT);  // Sets the #4 pin (Led C) of the 7 Segment as an output
pinMode(8, OUTPUT);  // Sets the #5 pin (Led DP) of the 7 Segment as an output
pinMode(9, OUTPUT);  // Sets the #6 pin (Led B) of the 7 Segment as an output
pinMode(10,OUTPUT);  // Sets the #7 pin (Led A) of the 7 Segment as an output
pinMode(11,OUTPUT);  // Sets the #9 pin (Led F) of the 7 Segment as an output
pinMode(12,OUTPUT);  // Sets the #10 pin (Led G) of the 7 Segment as an output

} // End of the setup

void loop() {   // This runs the code on loop

/* -- Start of 0 -- */

digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second 

/* -- Start of 1 -- */

digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000);  // Delay for 1 second 

/* -- Start of 2 -- */

digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, LOW); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 3 -- */

digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 4 -- */

digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6,  LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 5 -- */
  
digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9,  LOW); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 6 -- */

digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9,  LOW); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 7 -- */

digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 8 -- */

digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

delay(1000); // Delay for 1 second

/* -- Start of 9 -- */

digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6,  LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G
  
delay(1000); // Delay for 1 second

} // End of the loop
