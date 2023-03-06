

/*
 * 
 */
 
void setup() { // put your setup code here, to run once:

for(int i = 0; i<13; i++){
pinMode(i, OUTPUT);
}

}

void loop() { // put your main code here, to run repeatedly:

//Start of 0
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP 
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9 
digitalWrite(12,LOW); // G #10
// Start of 1
delay(1000); 
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4 
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,LOW); // G #10
//Start of 2
delay(1000); 
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,LOW); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 3
delay(1000); 
digitalWrite(5,LOW); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 4
delay(1000);
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 5
delay(1000);
digitalWrite(5,LOW); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,LOW); // B #6 
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 6
delay(1000);
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP 
digitalWrite(9,LOW); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 7
delay(1000);
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,LOW); // G #10
//Start of 8
delay(1000);
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
//Start of 9
delay(1000);
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2 
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
delay(1000);

}
