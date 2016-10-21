/*
  Test del motor A controlado un puente en H
  del C.I. L293D
  Comprueba el funcionamiento del motor A  
  EL INTERRUPTOR DE CORRIENTE DE EDUBASICA TIENE QUE ESTAR EN POSICION ON

////////////////////////////////////////////////////////////
  Sketch Test for motorA controlled by L239D H bridge (600mA)
  THE POWER SWITCH PROVIDEED ON EDUBASICA MUST TO BE ON 
  
  Manuel Hidalgo - LeoBot  Julio 2014
  Pablo Garcia - May 2015
*/


//Etiquetas de identificación de los pines // labels for pins
//pines para controlar la direccion de giro // with 2 pins we control de spinning direction
const int motorA_Dir1 = 8;        
const int motorA_Dir2 = 9;
const int motorA_Velocidad = 10;  //salida PWM para controlar la velocidad // PWM for speed

//Variables
int vPWM = 155;    //valor de la velocidad en PWM // PWM speed

void setup(){
  //configuracion de los pines //pins setup
  pinMode(motorA_Dir1, OUTPUT);
  pinMode(motorA_Dir2, OUTPUT);
  
}

void loop(){
  forward();
  delay(4000);              
  stop();
  delay(2000);
  backw();
  delay(4000); 
  stop();
  delay(2000);  
}

void forward(){
    //Activamos el motor A en un sentido de giro
  //spinning direction 1 (high-low)
  digitalWrite(motorA_Dir1,HIGH);
  digitalWrite(motorA_Dir2,LOW); 
  analogWrite(motorA_Velocidad,vPWM);
}
   
void backw(){
    //Activamos el motor A en un sentido de giro
  //spinning direction 1 (high-low)
  digitalWrite(motorA_Dir1,LOW);
  digitalWrite(motorA_Dir2,HIGH); 
  analogWrite(motorA_Velocidad,vPWM);
}

void stop(){
 //Paramos el motor durante 2s //stop for 2 secs
  //STOP (low, low)
  digitalWrite(motorA_Dir1,LOW);
  digitalWrite(motorA_Dir2,LOW);
}

