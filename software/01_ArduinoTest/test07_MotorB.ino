/*
  Test del motor B controlado un puente en H
  del C.I. L293D
  Comprueba el funcionamiento del motor B  
  Manuel Hidalgo - LeoBot
  Julio 2014
*/

//Etiquetas de identificación de los pines
const int motorB_Dir1 = 12;        //pines para controlar la direccion de giro
const int motorB_Dir2 = 13;
const int motorB_Velocidad = 11;  //salida PWM para controlar la velocidad

//Variables
int vPWM = 155;    //valor de la velocidad en PWM

void setup(){
  //configuracion de los pines
  pinMode(motorB_Dir1, OUTPUT);
  pinMode(motorB_Dir2, OUTPUT);
  
}

void loop(){
  //Activamos el motor B en un sentido de giro
  digitalWrite(motorB_Dir1,HIGH);
  digitalWrite(motorB_Dir2,LOW); 
  analogWrite(motorB_Velocidad,vPWM);
  delay(5000);                //permanece activado 5s
  
  //Paramos el motor durante 2 segundo
  digitalWrite(motorB_Dir1,LOW);
  digitalWrite(motorB_Dir2,LOW);
  delay(2000);
  
  //Activamos el motor B en un sentido de giro
  digitalWrite(motorB_Dir1,LOW);
  digitalWrite(motorB_Dir2,HIGH); 
  analogWrite(motorB_Velocidad,vPWM);
  delay(5000);                //permanece activado 5s
  
  //Paramos el motor durante 1 segundo
  digitalWrite(motorB_Dir1,LOW);
  digitalWrite(motorB_Dir2,LOW);
  delay(2000);
}
