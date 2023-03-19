/* ---- The goal of this program is to control the motors of the Arduino car robot and to set them to go in certain ----
   ---- directions. It is also about knowing how to use and create functions, to create class which includes the    ----
   ----                     "private" and "public" and know how to use and call them in the main code.              ---- */
   
 
class CarRobot { // Name and define the class
  
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
  

    void init() { // Method for initialization
      for(int i=1; i<9; i++) { // Set the "i" to be equal 1 and less than 9 as it increases
        pinMode(i, OUTPUT); // Set the "i"  as an output
        
      } // End of for() loop
      
      pinMode(EnablePin, OUTPUT); // Set enable pin as an output
      
    } // End of method

    void Forward() { // Name this method Forward
      
      digitalWrite(EnablePin, HIGH); // Set as HIGH to activate
      digitalWrite(MotorA, HIGH);    // Set as HIGH to activate
      digitalWrite(MotorB, HIGH);    // Set as HIGH to activate
      analogWrite(Motor_SpeedA, 100); // Set speed to 100
      analogWrite(Motor_SpeedB, 100); // Set speed to 100
      
    } // End of method

    void Backward() { // Name this method Backward
      
      digitalWrite(EnablePin, HIGH);  // Set as HIGH to activate
      digitalWrite(MotorA, LOW);      // Set as LOW to activate
      digitalWrite(MotorB, LOW);      // Set as LOW to activate
      analogWrite(Motor_SpeedA, 255);  // Set speed to 255
      analogWrite(Motor_SpeedB, 255);  // Set speed to 255
      
    } // End of method

    void Stop() { // Name this method Stop
      
      digitalWrite(EnablePin, HIGH); // Set as HIGH to activate
      digitalWrite(MotorA, HIGH);    // Set as HIGH to activate
      digitalWrite(MotorB, HIGH);    // Set as HIGH to activate
      analogWrite(Motor_SpeedA, 0);  // Set speed to 0
      analogWrite(Motor_SpeedB, 0);  // Set speed to 0
      
    } // End of method
    
}; // End of class

#define MotorA 7 // Initialize motor A1N1 to pin 7 of arduino
#define MotorB 8 // Initialize motor B1N1 to pin 8 of arduino
#define Motor_SpeedA 5 // Initialize motor PWMA to pin 5 of arduino
#define Motor_SpeedB 6 // Initialize motor PWMB to pin 6 of arduino
#define EnablePin 3 // Set pin 3 of arduino as the EnablePin, ("Stby")

CarRobot myCarRobot(MotorA, MotorB, Motor_SpeedA, Motor_SpeedB, EnablePin); // Define the class and name it

void setup() { // Run the code once
  myCarRobot.init(); // Call the init to initialize
  
} // End of setup

void loop() { // Run the code in loop
  digitalWrite(EnablePin, HIGH); // Set this to HIGH to activate
  myCarRobot.Forward(); // Call the Forward method 
  delay(2000);  // Delay for 2 seconds
  myCarRobot.Stop();  // Call the Stop method 
  delay(2000);  // Delay for 2 seconds
  
} // End of loop

