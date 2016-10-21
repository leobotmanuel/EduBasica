/*
test de prueba de los leds de EduBasica
Test sketch for LEDs
julio 2013 - Manuel Hidalgo
mayo 2015 - Pablo Garcia
programa de dominio publico
*/

//asignacion de etiquetas a los pines de los leds // labels for the pins LEDs are connected to
int ledG = 3; // pin Green LED 
int ledY = 4; // pin Yellow LED
int ledR = 5; // pin Red LED

void setup() {                

  pinMode(ledG, OUTPUT);     
  pinMode(ledY, OUTPUT);     
  pinMode(ledR, OUTPUT); 
  //inicialmente todos los leds apagados // all LEDs off at the beginning
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, LOW);
  digitalWrite(ledR, LOW);
}

void loop(){
  seq();        //runs the sequence function
  delay(2000);  //waits 2 seconds
  flash();      //runs the flashing function

}

void flash(){
  for (int i=0; i<10; i++){//flash 10 times
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledY, HIGH);
  delay(200);
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, LOW);
  delay(200);
  }
}
  
void seq(){
  //enciende los leds en secuencia cada 1s // lights the LEDs in sequence every second
  digitalWrite(ledG, HIGH);
  delay(1000);
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, HIGH);
  delay(1000);
  digitalWrite(ledY, LOW);
  digitalWrite(ledR, HIGH);
  delay(1000);
  digitalWrite(ledR, LOW);
}
