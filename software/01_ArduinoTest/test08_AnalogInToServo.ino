/*
Sketch Test for transforming EduBasica's analog input (POT or LDR)
into servo position
 */

// include the servo library
#include <Servo.h>

Servo myServo;  // create a servo object 
//select the analog input you want to use to control the pot
//A0= potentiometer ,  A1=LDR
int const potPin = A1; // analog pin used to connect the potentiometer or LDR
int potVal;  // variable to read the value from the analog pin 
int angle;   // variable to hold the angle for the servo motor 

void setup() {
  myServo.attach(7); // attaches the servo on Edubasica's pin 7 
  Serial.begin(9600); // open a serial connection to your computer
}

void loop() {
  potVal = analogRead(potPin); // read the value of the pot/LDR
  // print out the value to the serial monitor
  Serial.print("potVal: ");
  Serial.print(potVal);

  // scale the numbers from the pot 
  //angle = map(potVal, 0, 1023, 0, 179);
  // if you want to use the LDR the mapping depends on the light conditions
  angle = map(potVal, 800, 1000, 0, 179);
  Serial.print(", angle: "); // print out the angle for the servo motor 
  Serial.println(angle); 

  // set the servo position  
  myServo.write(angle);
  // wait for the servo to get there 
  delay(15);
}


