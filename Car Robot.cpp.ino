/*--- This is the code for the cpp ---*/

#include "CarRobot.h" // Include the folder from this project

//Constructors
CarRobot::CarRobot(int motorA, int motorB, int motorSpeedA, int motorSpeedB, int enablePin):
MotorA(motorA), MotorB(motorB), Motor_SpeedA(motorSpeedA), Motor_SpeedB(motorSpeedB), EnablePin(enablePin) {}

void CarRobot::init(){ // Define the init from this constructor
   for(int i=1; i<9; i++) { // Set the "i" to be equal 1 and less than 9 as it increases
        pinMode(i, OUTPUT); // Set the "i"  as an output
        
      } // End of for() loop
      
      pinMode(EnablePin, OUTPUT); // Set enable pin as an output
      
    } // End of method

void CarRobot::Forward() { // Define the Forward from this constructor
      
      digitalWrite(EnablePin, HIGH); // Set as HIGH to activate
      digitalWrite(MotorA, HIGH);    // Set as HIGH to activate
      digitalWrite(MotorB, HIGH);    // Set as HIGH to activate
      analogWrite(Motor_SpeedA, 100); // Set speed to 100
      analogWrite(Motor_SpeedB, 100); // Set speed to 100
      
    } // End of method

void CarRobot::Backward() { // Define the Backward from this constructor
      
      digitalWrite(EnablePin, HIGH);  // Set as HIGH to activate
      digitalWrite(MotorA, LOW);      // Set as LOW to activate
      digitalWrite(MotorB, LOW);      // Set as LOW to activate
      analogWrite(Motor_SpeedA, 255);  // Set speed to 255
      analogWrite(Motor_SpeedB, 255);  // Set speed to 255
      
    } // End of method

void CarRobot::Stop() { // Name this method Stop
      
      digitalWrite(EnablePin, HIGH); // Set as HIGH to activate
      digitalWrite(MotorA, HIGH);    // Set as HIGH to activate
      digitalWrite(MotorB, HIGH);    // Set as HIGH to activate
      analogWrite(Motor_SpeedA, 0);  // Set speed to 0
      analogWrite(Motor_SpeedB, 0);  // Set speed to 0
      
    } // End of method
