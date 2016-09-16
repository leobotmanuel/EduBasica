//programa de test de servo en EduBasica
//asociado al pin D7 controla la posicion con potenciometro
// Autor: LeoBot -- código de dominio publico
// Septiembre 2016

#include <Servo.h> //libreria para uso de servos

Servo servoPinD7;  //declaracion objeto Servo

int potpin = 0;  // pin analogico usado para conectar el potenciometro
int val;        // variable que lee el valor del pin analogico

void setup() {
  servoPinD7.attach(7);  //adjunta el servo al pin D7, asociado al objeto Servo

}


void loop() {
  //control del servo pinD7 con el potenciometro
  val = analogRead(potpin);            // lee el valor del potenciometro (valores entre 0 y 1023)
  val = map(val, 0, 1023, 0, 180);     // mapea el valor para usar con el servo (valores entre 0 y 180)
  servoPinD7.write(val);               // pone al servo en la posicion segun el valor de 'val'
  delay(15);                           // espera 15ms para que el servo se posicione

 }

