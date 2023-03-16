/* ----- This program is used to control a one digit 7 segment to count from numbers 0-9 using the for loop in the setup. -----
   ----- This means knowing how to set all the pins as an output while putting them in a for() loop that includes:        ----- 
   ----- initialization, condition and incrementation; and knowing how to call them in the void loop() after. Although,   ----- 
   ----- part of the goal of this is to know the purpose of each pin and know which is connected to which in order to     -----
   -----           which is connected to which in order to know how to diplay a number from 0-9 in this device.           ----- */
   


void setup() {  // This runs the code once

for(int i = 0; i<13; i++) {  // This initialize the "i" and set it to be less than 13 as it increases 
   
pinMode(i, OUTPUT);  // Sets the "i" as an output
   
}  // End of for() loop 
   
}  // End of setup


void loop() {  // This runs the code on loop

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
