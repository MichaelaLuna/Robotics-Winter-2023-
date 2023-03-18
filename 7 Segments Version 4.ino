/* ----- This program is used to control a one digit 7 segment to count from numbers 0-9 using the for loop in the setup. -----
   ----- This means knowing how to set all the pins as an output while putting them in a for() loop that includes:        ----- 
   ----- initialization, condition and incrementation. Also, this is about knowing how to create a function for each      ----- 
   ----- movement and knowing how to call them in the loop after.Part of the goal of this is to know the purpose of each  -----
   ----- pin and know which is connected to which in order to which is connected to which in order to know how to diplay  -----
   -----                                      a number from 0-9 in this device.                                           ----- */
   

void setup() {  // This runs the code once

for(int i = 0; i<13; i++) {  // This initialize the "i" and set it to be less than 13 as it increases 
   
pinMode(i, OUTPUT);  // Sets the "i" as an output
   
}  // End of for() loop 
   
}  // End of setup

void Zero (){ // This is the Function for Zero
  
digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Zero

void One(){ // This is the Function for One
  
digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function One

void Two(){ // This is the Function for Two
  
digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, LOW); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Two

void Three(){ // This is the Function for Three
  
digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Three

void Four(){ // This is the Function for Four
  
digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6,  LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Four

void Five(){ // This is the Function for Five
  
digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9,  LOW); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Five

void Six(){ // This is the Function for Six
  
digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9,  LOW); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10, LOW); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Six

void Seven(){ // This is the Function for Seven
  
digitalWrite(5, LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11, LOW); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12, LOW); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Seven

void Eight(){ // This is the Function for Eight
  
digitalWrite(5, HIGH); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6, HIGH); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G

} // End of Function Eight

void Nine(){ // This is the Function for Nine
  
digitalWrite(5,  LOW); // The #1 pin of the 7 Segment; Pin that will activate Led E
digitalWrite(6,  LOW); // The #2 pin of the 7 Segment; Pin that will activate Led D
digitalWrite(7, HIGH); // The #4 pin of the 7 Segment; Pin that will activate Led C
digitalWrite(8, HIGH); // The #5 pin of the 7 Segment; Pin that will activate Led DP
digitalWrite(9, HIGH); // The #6 pin of the 7 Segment; Pin that will activate Led B
digitalWrite(10,HIGH); // The #7 pin of the 7 Segment; Pin that will activate Led A
digitalWrite(11,HIGH); // The #9 pin of the 7 Segment; Pin that will activate Led F
digitalWrite(12,HIGH); // The #10 pin of the 7 Segment; Pin that will activate Led G
  
} // End of Function Nine

void loop() {  // This runs the code on loop
  
  Zero(); // Calling the Function Zero
  delay(1000); // Delay for 1 second
  
  One(); // Calling the Function One
  delay(1000); // Delay for 1 second
  
  Two(); // Calling the Function Two
  delay(1000); // Delay for 1 second
  
  Three(); // Calling the Function Three
  delay(1000); // Delay for 1 second
  
  Four(); // Calling the Function Four
  delay(1000); // Delay for 1 second
  
  Five(); // Calling the Function Five
  delay(1000); // Delay for 1 second
  
  Six(); // Calling the Function Six
  delay(1000); // Delay for 1 second
  
  Seven(); // Calling the Function Seven
  delay(1000); // Delay for 1 second
  
  Eight(); // Calling the Function Eight
  delay(1000); // Delay for 1 second
  
  Nine(); // Calling the Function Nine
  delay(1000); // Delay for 1 second
  
} // End of loop
