/* ---- This program is used to control a one digit 7 segment to count from numbers 0-9. ----
   ---- 


void setup() { // put your setup code here, to run once:

for(int i = 0; i<13; i++){
pinMode(i, OUTPUT);
}

}


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
