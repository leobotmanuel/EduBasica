/*Test del sensor LDR
 En este test tenemos: 
 Entrada analogica, salida analogica, salida puerto serie
 Lee la entrada analogica A1, LDR,adapta y mapea el resultado a un rango de 0 a 255,
 y lo utiliza para generar PWM en el pin D5.
 Tambien escribe los datos en el monitor serie del IDE.
  
 El circuito:
 *Divisor de tension: +5V - R10 - LDR - masa.
 *Terminal del conectado a la entrada analogica A1. 
 * Led rojo conectado a D5, pin digital de salida.
////////////////////////////////////////////////////////////////////////////////// 
 Sketch Test for the LDR:
 *Analog input from the LDR (through analog to digital converter) A1.
 *Maps the reading from 0-1023 to 0-255.
 *Generates the PWM over D5.
 *Writes the data on serial monitor.
 *Analog output (using PWM through a digital pin) pin5.
   
 Manuel Hidalgo - LeoBot.  Julio 2014
 Pablo Garcia - May 2015
 */

// Etiquetas de identificacion de los pines // label for pins connections
const int inAnaLDR = A1;     // Entrada analogica sensor LDR // analog input for LDR
const int outAnaLedRojo = 5; // Salida analogica (PWM) al led rojo // analog output (using PWM) for red LED

int valorSensorLDR = 0;     // Lectura del valor del sensor LDR // for reading sensor's value
int valorPWM = 0;          // Valor de salida PWM (salida analogica) al pin 5. Led rojo // mapped value to 0-255

void setup() {
  // inizialización de comunicaciones monitor serie a 9600 bps: // init communications at 9600 bauds per second
  Serial.begin(9600); 
}

void loop() {
  // lee el valor analogico del LDR, A1. // reading on analog 1 pin
  valorSensorLDR = analogRead(inAnaLDR);            
  // mapea el rango de los valores de lectura del LDR, 
  //que pueden ser diferentes por la luz recibida (los 2 primeros datos se deben de cambiar)
  //al rango de valores de salida PWR en el pin 5 (salida analogica)
  ///////////////////////////////////////////////////////////////////////
  /*we have to map the read values to the PWM signal, but the input values will change with different light conditions
  so you have to check the values using the serial monitor to obtain an accurate low and high values (first 2 numbers) */
  valorPWM = map(valorSensorLDR, 615, 1010, 0, 255);  
  // salida analogica PWM //write analog
  analogWrite(outAnaLedRojo, valorPWM);

  //Escribe los resultados en el monitor serie. // Writing the values over serial monitor
  Serial.print("valor entrada LDR / input value = ");  
  Serial.print(valorSensorLDR);      
  Serial.print("\t LED rojo/red = ");      
  Serial.println(valorPWM);   

  // Espera 10 milisegundos para que el conversor ADC haga la nueva lectura // waits 10 ms for the ADC makes a new reading
  delay(10);                     
}
