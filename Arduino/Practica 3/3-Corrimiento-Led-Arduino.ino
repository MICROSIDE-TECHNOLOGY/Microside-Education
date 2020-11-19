/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  Implementar corrimiento de 8 bits y desplegar el valor en 8 LEDs
**************************************************************************/
void setup() 
{
   DDRD = B11111111; //Configura puerto D como salida
}

void loop() 
{
   PORTD = 0x0D; //Valor inicial del puerto
   while (1)
   {
      PORTD = (PORTD << 1) | (PORTD >> 7); //corrimiento
      delay (200); //Retardo de 200ms
   }
}
