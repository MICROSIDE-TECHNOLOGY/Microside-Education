
/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  La práctica consiste en controlar el encendido y apagado del LED incluido
  en la tarjeta X - UNO
**************************************************************************/
const int LED = 13;     //Número del pin para LED
void setup() 
{
   pinMode (LED, OUTPUT); //Inicializa el PIN como una salida digital
}

void loop() 
{
   digitalWrite (LED, HIGH); //Enciende el LED
   delay (1000);    // Espera un tiempo
   digitalWrite (LED, LOW); //Apaga el LED
   delay (1000);    // Espera un tiempo
}
