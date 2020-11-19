/*

AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.

FECHA: JUNIO 2019

*/

/**************************************************************************

Esta práctica consiste en realizar la medición de temperatura por medio de un

sensor LM35 e imprimir la lectura en una pantalla LCD.

**************************************************************************/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float tempCentigrados;
float tempFahrenheit;
int lectura;
int pin_sensor = A0;   //Pin análogo en donde va conectado el sensor

void setup() {

  pinMode(pin_sensor, INPUT);
  lcd.begin(16, 2);
  lcd.print("Sensor de");
  lcd.setCursor(0,1);               //Columna,reglón
  lcd.print("Temperatura LM35");
  delay (2500);
  lcd.clear();

}

void loop() {

  lectura = analogRead(A0);  //Lee los valores del sensor
  tempCentigrados = (5.0 * lectura * 100.0)/1024.0; //Convierte los valores en grados centigrados
  lcd.setCursor(2, 0);
  lcd.print("Temperatura");
  lcd.setCursor(0, 1);
  lcd.print(tempCentigrados);   //Muestra en la pantalla la temperatura en grados Centígrados
  lcd.print(" C ");
  delay(500);

}
