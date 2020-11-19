/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
La práctica consiste en controlar el encendido y apagado de un LED incluido
en la tarjeta a través del uso de un teclado matricial de 4x4.
**************************************************************************/
#include "Keypad.h"
int LED = 13;

const byte rowsCount = 4;     //indica el número de filas
const byte columnsCount = 4;  //indica el número de columnas
char keys[rowsCount][columnsCount] =
{
  {'1', '2', '3', 'a'},
  {'4', '5', '6', 'b'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};

const byte rowPins[rowsCount] = {7, 6, 5, 4}; //Indica los pines usados para las filas del teclado
const byte columnsPins[columnsCount] = {3, 2, 1, 0};//Indica los pines usados para las columnas del teclado
Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnsPins, rowsCount, columnsCount);
void setup() {
  pinMode (LED, OUTPUT);
}

void loop() {
  char key = keypad.getKey();
  if (key == '1') {
    digitalWrite (LED, HIGH);
  } else if (key == '0') {
    digitalWrite (LED, LOW);
  }
}
