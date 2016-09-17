/*Test del potenciometro
 En este test tenemos: 
 Entrada analogica, salida analogica, salida puerto serie
 Lee la entrada analogica A0, potenciometro, mapea el resultado a un rango de 0 a 255,
 y lo utiliza para generar PWM en el pin D5.
 Tambien escribe los datos en el monitor serie del IDE.
////////////////////////////////////////////////////////////
In this test:
 *Analog input from the pot (through analog to digital converter) A0.
 *Maps the reading from 0-1023 to 0-255.
 *Generates the PWM over D5.
 *Writes the data on serial monitor.
 *Analog output (using PWM through a digital pin) pin5.
 
 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 Adaptado para el test del potenciometro de EduBasica 
 Manuel Hidalgo - LeoBot. Julio 2014
 Pablo Garcia. May 2015
 
 */

// labels for the pins
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 5; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);  
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);           

  // print the results to the serial monitor:
  Serial.print("potenciometro/pot = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t LED rojo/red = ");      
  Serial.println(outputValue);   

  // wait 10 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(10);                     
}
