
/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  El LED incluido en la tarjeta X - UNO cambia entre encendido
  y apagado al presionar un botón
**************************************************************************/
const int LED = 13;       //Número del pin para LED
const int BOTON = 8;      //Número del pin para BOTON
int EstadoBoton = 0;     //Variable para guardar el estado
void setup() 
{
   pinMode (LED, OUTPUT); //Inicializa el PIN como una salida digital
   pinMode (BOTON, INPUT_PULLUP); //Inicializa el PIN como entrada con pullup
}

void loop() 
{
   EstadoBoton = digitalRead (BOTON); //Leer estado del boton
   if (EstadoBoton == LOW)
   {
      //Pregunta el estado del boton
      digitalWrite (LED, HIGH); //Enciende el LED
      } else {
      digitalWrite (LED, LOW); //Apaga el LED
   }
}
