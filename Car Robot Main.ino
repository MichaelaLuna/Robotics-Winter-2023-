/*--- Main Code ---*/

#include "CarRobot.h" // Include the library created

#define MotorA 7 // Initialize motor A1N1 to pin 7 of arduino
#define MotorB 8 // Initialize motor B1N1 to pin 8 of arduino
#define Motor_SpeedA 5 // Initialize motor PWMA to pin 5 of arduino
#define Motor_SpeedB 6 // Initialize motor PWMB to pin 6 of arduino
#define EnablePin 3 // Set pin 3 of arduino as the EnablePin, ("Stby")


CarRobot Move(MotorA, MotorB, Motor_SpeedA, Motor_SpeedB, EnablePin); // Define the class and name it

void setup(){
   Move.init(); // Call the init to initialize
  
} // End of setup

void loop() { // Run the code in loop
  digitalWrite(EnablePin, HIGH); // Set this to HIGH to activate
  Move.Forward(); // Call the Forward method 
  delay(2000);  // Delay for 2 seconds
  Move.Stop();  // Call the Stop method 
  delay(2000);  // Delay for 2 seconds
  
} // End of loop
