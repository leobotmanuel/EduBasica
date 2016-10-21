
//programa de test de servo en EduBasica
//asociado al pin D7
// Autor: LeoBot -- código de dominio publico
// Septiembre 2016

#include <Servo.h> //libreria para uso de servos

Servo servoPinD7;  //declaracion objeto Servo

int pos = 0;      //variable de posicion del servo

void setup() {
  servoPinD7.attach(7);  //adjunta el servo al pin D7, asociado al objeto Servo

}

void loop() {
  for (pos = 0; pos <= 179; pos += 1) { // da valor a 'pos' desde 0 hasta 180 grados
                                        //en pasos de 1 grado
    servoPinD7.write(pos);      // llama a servo para ir a la posicion dada por la variable 'pos'
    delay(15);               // espera 15ms para que el servo se posicione
  }
  for (pos = 179; pos >= 0; pos -= 1) { // da valor a 'pos' desde 180 hasta 0 grados
    servoPinD7.write(pos);              // llama a servo para ir a la posicion dada por la variable 'pos'
    delay(15);                       // espera 15ms para que el servo se posicione
  }
 
  
}

