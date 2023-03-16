// Define pin numbers for each segment and common pin
int segmentA = 10;
int segmentB = 9;
int segmentC = 7;
int segmentD = 6;
int segmentE = 5;
int segmentF = 11;
int segmentG = 12;
int commonPin = 8;

void setup() {
  // Set pin modes for each segment and common pin
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(commonPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Display numbers 0-9 using switch case
  for (int i = 0; i < 10; i++) {
    Serial.print("i = ");
    Serial.println(i);
    switch(i) {
      
     case 0:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, HIGH);
        break;
      
      case 1:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, HIGH);
        break;
      
      case 2:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, HIGH);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
        break;

      case 3:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
        break;
       
      case 4:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
        break;
        
      case 5:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
        break;
    
      case 6:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
        break;
   
      case 7:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, HIGH);
        break;
       
      case 8:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
        break;
      
      case 9:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
        break;
  
    }
    delay(1000);
  }
}
