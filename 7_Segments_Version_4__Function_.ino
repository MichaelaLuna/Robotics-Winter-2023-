
void setup() { // put your setup code here, to run once:

for(int i = 0; i<13; i++){
pinMode(i, OUTPUT);
}
}

void Zero (){
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP 
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9 
digitalWrite(12,LOW); // G #10
}

void One(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4 
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,LOW); // G #10
}

void Two(){
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,LOW); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,HIGH); // G #10
}

void Three(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,HIGH); // G #10
}

void Four(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
}

void Five(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,LOW); // B #6 
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
}

void Six(){
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP 
digitalWrite(9,LOW); // B #6
digitalWrite(10,LOW); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
}

void Seven(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,LOW); // F #9
digitalWrite(12,LOW); // G #10
}

void Eight(){
delay(1000);
digitalWrite(5,HIGH); // E #1
digitalWrite(6,HIGH); // D #2
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
}

void Nine(){
digitalWrite(5,LOW); // E #1
digitalWrite(6,LOW); // D #2 
digitalWrite(7,HIGH); // C #4
digitalWrite(8,HIGH); // DP
digitalWrite(9,HIGH); // B #6
digitalWrite(10,HIGH); // A #7
digitalWrite(11,HIGH); // F #9
digitalWrite(12,HIGH); // G #10
}

void loop() { // put your main code here, to run repeatedly:
  Zero();
  delay(1000);
  One();
  delay(1000);
  Two();
  delay(1000);
  Three();
  delay(1000);
  Four();
  delay(1000);
  Five();
  delay(1000);
  Six();
  delay(1000);
  Seven();
  delay(1000);
  Eight();
  delay(1000);
  Nine();
  delay(1000);
}
