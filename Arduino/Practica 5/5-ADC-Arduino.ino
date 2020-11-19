/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  Implementar una lectura analógica de un potenciómetro y desplegar el valor en 8 LEDs.
**************************************************************************/
int POT = A0;    // Entrada para el potenciómetro
int ValorPOT = 0;  // Variable donde se guardará el valor del potenciómetro
void setup() 
{
   DDRD = B11111111; //Configura puerto D como salida
}

void loop() 
{
   ValorPOT = analogRead (POT); //Leer el valor del potenciómetro
   if (ValorPOT <= 114) //Compara el valor del potenciómetro
   {
      PORTD = 0b00000000;
   }

   else if (ValorPOT <= 228) //Compara el valor del potenciómetro
   {
      PORTD = 0b00000001;
   }

   else if (ValorPOT <= 342) // Compara el valor del potenciómetro
   {
      PORTD = 0b00000011;
   }

   else if (ValorPOT <= 456) // Compara el valor del potenciómetro
   {
      PORTD = 0b00000111;
   }

   else if (ValorPOT <= 570) // Compara el valor del potenciómetro
   {
      PORTD = 0b00001111;
   }

   else if (ValorPOT <= 684) // Compara el valor del potenciómetro
   {
      PORTD = 0b00011111;
   }

   else if (ValorPOT <= 798) // Compara el valor del potenciómetror
   {
      PORTD = 0b00111111;
   }

   else if (ValorPOT <= 912) // Compara el valor del potenciómetro
   {
      PORTD = 0b01111111;
   }

   else if (ValorPOT <= 1023) // Compara el valor del potenciómetro
   {
      PORTD = 0b11111111;
   }
}
