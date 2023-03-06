/*
 * 
 */

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

void setup() { // put your setup code here, to run once:

delay(1000);
pinMode(pinA,OUTPUT); // A 
pinMode(pinB,OUTPUT); // B
pinMode(pinC,OUTPUT); // C 
pinMode(pinD,OUTPUT); // D
pinMode(pinE,OUTPUT); // E
pinMode(pinF,OUTPUT); // F
pinMode(pinG,OUTPUT); // G
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D4, OUTPUT);

}

void loop() { // put your main code here, to run repeatedly:

//Start of 0
delay(1);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,HIGH); 
digitalWrite(pinF,HIGH);
digitalWrite(pinG,LOW);
digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
delay(1);
/*
// Start of 1
delay(1000); 
digitalWrite(pinA,LOW); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,LOW);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,LOW); 
digitalWrite(pinG,LOW);  
digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
*/
//Start of 2
delay(1);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,LOW); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,HIGH); 
digitalWrite(pinF,LOW); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
delay(1);
/*
//Start of 3
delay(1000); 
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,LOW); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);


//Start of 4
delay(1000);
digitalWrite(pinA,LOW); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,LOW);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,HIGH); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);


//Start of 5
delay(1000);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,LOW); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,HIGH); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);


//Start of 6
delay(1000);
digitalWrite(pinA,LOW); 
digitalWrite(pinB,LOW); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,HIGH); 
digitalWrite(pinF,HIGH); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);


//Start of 7
delay(1000);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,LOW);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,LOW); 
digitalWrite(pinG,LOW);
digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);

//Start of 8
delay(1000);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,HIGH);  
digitalWrite(pinE,HIGH); 
digitalWrite(pinF,HIGH); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);

//Start of 9
delay(1000);
digitalWrite(pinA,HIGH); 
digitalWrite(pinB,HIGH); 
digitalWrite(pinC,HIGH); 
digitalWrite(pinD,LOW);  
digitalWrite(pinE,LOW); 
digitalWrite(pinF,HIGH); 
digitalWrite(pinG,HIGH);
digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
delay(1000);
*/
}
