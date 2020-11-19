/*
AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
FECHA: JUNIO 2019
*/

/**************************************************************************
Esta práctica consiste en visualizar un mensaje a través de una pantalla LCD (Liquid Crystal Display) de 16×2.
**************************************************************************/

#include  <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);       //Configuración de los pines para la comunicación con la pantalla.

void setup()
{
  lcd.begin(16, 2); 						//Indicamos que tenemos una pantalla de 16×2.
  lcd.home();								//Mover el cursor a la primera posición de la pantalla (0,0).
}
 
void loop()
{
  lcd.print("   MICROSIDE  ");				//Imprimir MICROSIDE en pantalla.
  lcd.setCursor ( 0, 1 );
  lcd.print("   TECHNOLOGY");				//Imprimir otra cadena en esta posición.
  delay(2000);
  lcd.clear();								//Limpiar pantalla.
  delay(2000);  
  lcd.print("   BIENVENIDO  ");            //Imprimir BIENVENIDO en pantalla.
  delay(2000);
  lcd.clear();								//Limpiar pantalla.
  delay(2000);
}
