/*

AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.

FECHA: JUNIO 2019

*/

/**************************************************************************

En esta práctica se usa el módulo PWM (Pulse Width Modulation), para el aumento y disminución de la

velocidad, así como cambia el sentido de giro.

**************************************************************************/


#include <Servo.h>                           // Incluímos la librería para poder controlar el servo
Servo servoMotor;                            // Declaramos la variable para controlar el servo
 
void setup() {
  servoMotor.attach(9);                      // Iniciamos el servo para que empiece a trabajar con el pin 9
}
 
void loop() {
  servoMotor.write(0);                        // Desplazamos a la posición 0º
  delay(1000);                                // Esperamos 1 segundos
  servoMotor.write(90);                       // Desplazamos a la posición 90º
  delay(1000);                                // Esperamos 1 segundo
  servoMotor.write(180);                      // Desplazamos a la posición 180º
  delay(1000);                                // Esperamos 1 segundo
}
