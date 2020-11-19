/*
AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
FECHA: JUNIO 2019
*/

/**************************************************************************
Controlar la posición de un servomotor por medio de un potenciometro

utilizando los modulos PWM y ADC.
**************************************************************************/

#include <Servo.h>
 

Servo servoMotor;                           // Declaramos la variable para controlar el servo
int POSICION;
 
void setup() {
  
  servoMotor.attach(9);                    // Iniciamos el servo para que empiece a trabajar con el pin 9
}
 
void loop() {
 
  POSICION = analogRead(A0);              // Lee voltaje del potenciometro
  POSICION = POSICION/3;                  // acopla el paso para el motor
  servoMotor.write(POSICION);             // Desplaza a la posición
  
}
