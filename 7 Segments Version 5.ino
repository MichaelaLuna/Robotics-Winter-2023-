/* ----- This program is used to control a one digit 7 segment to count from numbers 0-9 using the for loop in the setup. -----
   ----- This means knowing how to set all the pins as an output while putting them in a for() loop that includes:        ----- 
   ----- initialization, condition and incrementation. Also, this is about knowing how to use the for() and switch() case ----- 
   ----- function inside the void loop; also knowing how to put the cases inside and how it can move from one case to the ----- 
   ----- next one. Part of the goal of this is to know the purpose of each pin and know which is connected to which in    -----
   -----     order to which is connected to which in order to know how to diplay  a number from 0-9 in this device.       ----- */
                                                                             
int segmentA = 10; // SegmentA connected to pin 10 of Arduino
int segmentB = 9;  // SegmentB connected to pin 9 of Arduino
int segmentC = 7;  // SegmentC connected to pin 7 of Arduino
int segmentD = 6;  // SegmentD connected to pin 6 of Arduino
int segmentE = 5;  // SegmentE connected to pin 5 of Arduino
int segmentF = 11; // SegmentF connected to pin 11 of Arduino
int segmentG = 12; // SegmentG connected to pin 12 of Arduino
int commonPin =8;  // commonPin connected to pin 8 of Arduino

void setup() {  // This runs the code once

  pinMode(segmentA, OUTPUT); // Sets segment A as an output
  pinMode(segmentB, OUTPUT); // Sets segment B as an output
  pinMode(segmentC, OUTPUT); // Sets segment C as an output
  pinMode(segmentD, OUTPUT); // Sets segment D as an output
  pinMode(segmentE, OUTPUT); // Sets segment E as an output
  pinMode(segmentF, OUTPUT); // Sets segment F as an output
  pinMode(segmentG, OUTPUT); // Sets segment G as an output
  pinMode(commonPin, OUTPUT); // Sets commonPin as an output
}

void loop() {  // This runs the code on loop
  
  for (int i = 0; i < 10; i++) { // This initialize the "i" and set it to be less than 10 as it increases 
    
    switch(i) { // Display numbers 0-9 using switch case
      
     case 0: // First case, show Zero
     
        digitalWrite(segmentA, LOW); // Segment A set to low; turn off
        digitalWrite(segmentB, LOW); // Segment B set to low; turn off
        digitalWrite(segmentC, LOW); // Segment C set to low; turn off
        digitalWrite(segmentD, LOW); // Segment D set to low; turn off
        digitalWrite(segmentE, LOW); // Segment E set to low; turn off
        digitalWrite(segmentF, LOW); // Segment F set to low; turn off
        digitalWrite(segmentG, HIGH); // Segment G set to high; turn on
        
        break; // Continue 
      
      case 1: // Second case, show One
      
        digitalWrite(segmentA, HIGH); // Segment A set to high; turn on
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to low; turn off
        digitalWrite(segmentD, HIGH); // Segment D set to high; turn on
        digitalWrite(segmentE, HIGH); // Segment E set to high; turn on
        digitalWrite(segmentF, HIGH); // Segment F set to high; turn on
        digitalWrite(segmentG, HIGH); // Segment G set to high; turn on
        
        break; // Continue 
      
      case 2: // Third case, show Two
      
        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, HIGH); // Segment C set to high; turn on
        digitalWrite(segmentD, LOW);  // Segment D set to low; turn off
        digitalWrite(segmentE, LOW);  // Segment E set to low; turn off
        digitalWrite(segmentF, HIGH); // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue 

      case 3: // Fourth case, show Three
      
        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, LOW);  // Segment D set to low; turn off
        digitalWrite(segmentE, HIGH); // Segment E set to low; turn off
        digitalWrite(segmentF, HIGH); // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue
        
      case 4: // Fifth case, show Four
      
        digitalWrite(segmentA, HIGH); // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, HIGH); // Segment D set to low; turn off
        digitalWrite(segmentE, HIGH); // Segment E set to low; turn off
        digitalWrite(segmentF, LOW);  // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue
        
      case 5: // Sixth case, show Five

        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, HIGH); // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, LOW);  // Segment D set to low; turn off
        digitalWrite(segmentE, HIGH); // Segment E set to low; turn off
        digitalWrite(segmentF, LOW);  // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue
    
      case 6: // Seventh case, show Six
      
        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, HIGH); // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, LOW);  // Segment D set to low; turn off
        digitalWrite(segmentE, LOW);  // Segment E set to low; turn off
        digitalWrite(segmentF, LOW);  // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue
   
      case 7: // Eighth case, show Seven
      
        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, HIGH); // Segment D set to low; turn off
        digitalWrite(segmentE, HIGH); // Segment E set to low; turn off
        digitalWrite(segmentF, HIGH); // Segment F set to high; turn on
        digitalWrite(segmentG, HIGH); // Segment G set to low; turn off
        
        break; // Continue
       
      case 8: // Ninth case, show Eight 
      
        digitalWrite(segmentA, LOW);  // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);  // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);  // Segment C set to high; turn on
        digitalWrite(segmentD, LOW);  // Segment D set to low; turn off
        digitalWrite(segmentE, LOW);  // Segment E set to low; turn off
        digitalWrite(segmentF, LOW);  // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);  // Segment G set to low; turn off
        
        break; // Continue
      
      case 9: // Tenth case, show Nine
      
        digitalWrite(segmentA, LOW);   // Segment A set to low; turn off
        digitalWrite(segmentB, LOW);   // Segment B set to low; turn off
        digitalWrite(segmentC, LOW);   // Segment C set to high; turn on
        digitalWrite(segmentD, HIGH);  // Segment D set to low; turn off
        digitalWrite(segmentE, HIGH);  // Segment E set to low; turn off
        digitalWrite(segmentF, LOW);   // Segment F set to high; turn on
        digitalWrite(segmentG, LOW);   // Segment G set to low; turn off
        
        break; // Continue
  
    } // End of Cases
    
    delay(1000); // Delay for 1 second
    
  } // End of for() loop
  
} // End of loop
