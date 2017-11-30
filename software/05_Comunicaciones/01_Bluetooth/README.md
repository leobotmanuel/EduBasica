# Bluetooth
El Bluetooth es un estándar de comunicación inalámbrica que permite la transmisión de datos a través de radiofrecuencia en la banda de 2,4 GHz. 

<a href="" target="_blank"><img width="400" height="300" border="0" align="center" src="img/bluetooth.png"/></a>

El módulo de bluetooth en EduBasica se conecta en un zócalo de 4 pines.
-    El pin de transmisión del Bluetooth Tx se conecta al de recepción de Arduino Rx.
-    El pin de recepción del Bluetooth Rx se conecta al de transmisión de Arduino Tx.
-    El pin Vcc del Bluetooth al (+).
-    El pin GND del Bluetooth al (-)
**IMPORTANTE:**
En el momento de cargar el programa desde el Visualino a la placa Arduino hay que desconectar el módulo de Bluetooth para que no interfiera.



<a href="" target="_blank"><img width="109" height="274" border="0" align="center" src="img/bluetooth-hc0x.png "/></a>

El programa para observar su funcionamiento con Visualino:

- prog06_sensorLDR.bly

A través del monitor serie se comprueba que:

- Si recibe luz el valor leído es bajo.

- Si no recibe luz el valor leído es alto.
