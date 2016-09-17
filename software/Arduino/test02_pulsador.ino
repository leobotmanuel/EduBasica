/*
test de prueba del pulsador de EduBasica
Test sketch for switch
julio 2013 - Manuel Hidalgo
junio 2015 - Pablo Garcia
programa de dominio publico
*/

//asignacion de etiquetas // labels
int pinPulsador = 2; // pin pulsador // pin for the switch
int ledR = 5; // pin Red LED // pin for the red LED

//declaracion de variables/variables
int estado;    //guarda el estado del pulsador // for storing the switch's state (ON/OFF)

void setup() {
  //configuracion de E/S a los pines // INPUT/OUTPUT setup for pins
  pinMode(ledR, OUTPUT);      
  pinMode(pinPulsador, INPUT);     
}

void loop(){
  // lee el estado del pulsador // reads the state of the switch
  estado = digitalRead(pinPulsador);

  //Si el pulsador ON // if switch is ON (pressed)
  if (estado == HIGH) {     
    // led rojo ON   // red LED ON 
    digitalWrite(ledR, HIGH);  
  } 
  else { //IF switch is OFF (not pressed)
    // led rojo OFF:
    digitalWrite(ledR, LOW); 
  }
}
