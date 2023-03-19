/*--- This is the code for the header ---*/

#ifndef robotClass_h // If not defined
#define robotClass_h // Define this library

#include<Arduino.h>; // Added from Arduino's library


class CarRobot{ // Name and define the class

  private: // The encapsulation
  
    int MotorA; // Initialize MotorA
    int MotorB; // Initialize MotorB
    int Motor_SpeedA; // Initialize Motor_SpeedA
    int Motor_SpeedB; // Initialize Motor_SpeedB
    int EnablePin; // Initialize EnablePin

  public:

    // Constructors
    CarRobot(int motorA, int motorB, int motorSpeedA, int motorSpeedB, int enablePin):
    MotorA(motorA), MotorB(motorB), Motor_SpeedA(motorSpeedA), Motor_SpeedB(motorSpeedB), EnablePin(enablePin) {}
  
  void init(): // Method for initialization
  void Forward(): // Method for going forward
  void Backward(): // Method for going backward
  void Stop(): // Method for stopping
  
}; // End

#endif // End of if not defined
