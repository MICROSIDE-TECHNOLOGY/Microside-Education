/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
Controlar el encencido y apagado de un led, por medio de la lectura de un puerto ADC
**************************************************************************/
int POT = A0;    // Entrada para el potenciometro
int ValorPOT = 0;  // Variable donde se guardara el valor del potenciometro
const int ledPin =  13;      // Pin del LED
void setup() 
{
   pinMode (ledPin, OUTPUT);
}

void loop() 
{
   ValorPOT = analogRead (POT); //Leer el valor del potenciometro
   if (ValorPOT >= 512) // Compara el valor del potenciometro
   {
      digitalWrite (ledPin, HIGH); //Enciende el led
   }
   else
   {
      digitalWrite (ledPin, LOW); //Apaga el led
   }
}
