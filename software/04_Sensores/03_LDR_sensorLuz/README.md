# LDR (light-dependent resistor) sensor de luz
El sensor LDR es un sensor resistivo (fotoresistor), es decir que su resistencia eléctrica varía en función de la luz que recibe.
Es un sensor analógico por lo que, para leer sus medidas, tenemos que conectarlo a una entrada analógica de Arduino.
Si tapamos o acercamos el sensor a la luz veremos cómo cambian las medidas a través del monitor serie. 
<a href="" target="_blank"><img width="354" height="306" border="0" align="center" src="img/LDR.jpg "/></a>

El circuito del sensor LDR en EduBasica es el siguiente:

<a href="" target="_blank"><img width="109" height="274" border="0" align="center" src="img/LDR_esqEdubasica.png "/></a>

El programa para observar su funcionamiento con Visualino:

   [prog06_sensorLDR.bly](EduBasica/software/02_VisualinoTest/prog06_sensorLDR.bly)
  
A través del monitor serie se comprueba que:

   Si recibe luz el valor leído es bajo.

   Si no recibe luz el valor leído es alto.


# Actividad
Programar el encendido de un led con el LDR (simulación día-noche).
