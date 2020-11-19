/*

AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.

FECHA: JUNIO 2019

*/

/**************************************************************************

Esta práctica consiste en realizar la medición de temperatura por medio de un

sensor DS18B20 e imprimir la lectura en una pantalla LCD.

**************************************************************************/

#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);                                       //Configuración de los pines para la comunicación con la pantalla.

 

const int pinDatosDQ = 9;                                                      // Pin donde se conecta el bus 1-Wire
 
OneWire oneWireObjeto(pinDatosDQ);                                             // Instancia a las clases OneWire y DallasTemperature
DallasTemperature sensorDS18B20(&oneWireObjeto);

 
void setup()

{

  lcd.begin(16, 2);                                                                    //Indicamos que tenemos una pantalla de 16×2.
  lcd.home();                                                                            //Mover el cursor a la primera posición de la pantalla (0,0).
  sensorDS18B20.begin(); // Iniciamos el bus 1-Wire
  lcd.print("Sensor de");
  lcd.setCursor(0,1);                                                                   //Columna,reglón
  lcd.print("Temperatura DS18");
  delay (2500);
  lcd.clear();
}
 
void loop() {
    
    
    sensorDS18B20.requestTemperatures();                                             // Mandamos comandos para toma de temperatura a los sensores
 
   lcd.setCursor(2, 0);
   lcd.print("Temperatura");
   lcd.setCursor(0, 1);
   lcd.print(sensorDS18B20.getTempCByIndex(0));
   lcd.print(" C");
   delay(1000); 
}
