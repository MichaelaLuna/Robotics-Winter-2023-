/* The goal of this program is to see understand and explore capacitors with RC time constants using Arduino UNO;
   also, to learn how capacitors work, the concept of RC time constants,and how these constants change with different 
   resistor and capacitor values. All of this would be done by using the Arduino UNO to measure and visualize the 
   charging and discharging of a capacitor in an RC circuit. The theme of this is knowing how to properly 
   use the basics like setting a variable with an integer value, the Serial begin() and Serial print(), analogRead()
   and the float.

                                              --- This is the code ---                                        */
                                              
const int readPin = A0;                          // Assign readPin to A0

void setup() {                                   // Run the code once
  
Serial.begin(9600);                              // Open the Serial Monitor at 9600 bauds rate

}                                                // End of setup

void loop (){                                    // Run the code in loop
  
 int sensorValue = analogRead(readPin);          // Assign the new variable sensorValue to the value that will be read by A0
 float voltage = sensorValue * (5.0 / 1023.0);   // Multiply that value to this to get the voltage value
 Serial.println(voltage);                        // Print the calculate value in the serial monitor
 delay(100);                                     // Delay for 100ms
 
}                                                // End of loop
