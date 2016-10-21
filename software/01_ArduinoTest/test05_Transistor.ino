/*
  Test del transistor controlado desde el pin 6
  Sirve para controlar dispositivos que necesitan más 
  intesidad de corriente que la que pueda proporcionar
  una salidad de Arduino (> 40mA).
  Ejemplo: relé, motor dc,...
  EL INTERRUPTOR DE CORRIENTE DE EDUBASICA TIENE QUE ESTAR EN POSICION ON
  /////////////////////////////////////////////////////
  Sketch test for TIP121 transistor connected though digital 6 pin
  Arduino is only giving 40mA, so you can use this to activate/deactivate
  another more powerful device as rele, dc motor...
  THE POWER SWITCH PROVIDEED ON EDUBASICA MUST TO BE ON 
  
  Manuel Hidalgo - LeoBot. Julio 2014
  Pablo Garcia. May 2015
*/

//Etiquetas de identificación de los pines // labels for pins
const int baseTrt = 6;    //salida digital, pin 6, conectado a la R6 de la base del transistor
                          //digital output, pin 6, connected to resistor R6 (in the base of the transistor)
const int pinLedV = 3;    //salida digital,pin 3, led verde // output for the green LED (on digital pin3)


void setup(){
  //configuracion de los pines // pin setup
  pinMode(baseTrt, OUTPUT);
  pinMode(pinLedV, OUTPUT);
}

void loop(){
  //Activamos el transitor // activates the transistor for 5 seconds
  digitalWrite(baseTrt,HIGH);
  digitalWrite(pinLedV,HIGH);  //led verde ON
  delay(5000);                //permanece activado 5s
  
  //Desactivamos el transistor //deactivate transistor for 5 seconds
  digitalWrite(baseTrt,LOW);
  digitalWrite(pinLedV,LOW);  //led verde OFF
  delay(5000);                //permanece desactivado 5s
}
