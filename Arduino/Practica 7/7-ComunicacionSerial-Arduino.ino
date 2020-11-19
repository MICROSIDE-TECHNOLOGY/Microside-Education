/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  Implementar comunicación serial para enviar un comando simple para prender y 
  apagar un LED incluido en la tarjeta X - UNO, y un segundo comando para 
  preguntar el estado de un botón.
**************************************************************************/
const int LED = 13;                    //Número del pin para LED
const int BOTON = 8;                   //Número del pin para BOTÓN
int EstadoBoton = 0;                   //Variable para guardar el estado
void setup() 
{
   pinMode (BOTON, INPUT_PULLUP);                   //Inicializa el PIN como entrada con pull - up
   pinMode (LED, OUTPUT);                           //Inicializa el PIN como una salida digital
   Serial.begin (9600);                             //Inicializa el puerto serie a 9600 baud
}

void loop() 
{
   if (Serial.available () )                      //Pregunta si ha recibido algún dato
   {   
      char Caracter = Serial.read ();              //guarda el caracter
      if (Caracter == '1')
      {
         digitalWrite (LED, HIGH);               //Enciende el LED
      }

      else if (Caracter == '0')
      {
         digitalWrite (LED, LOW);               //Apaga el LED
      }

      else if (Caracter == '?')
      {
         EstadoBoton = digitalRead (BOTON);    //Leer estado del botón
         if (EstadoBoton == HIGH)
         {
            //Pregunta el estado del botón
            Serial.print ("0");               //Envía un 0 si el botón no está presionado
            } else {
            Serial.print ("1");               //Envía un 1 si el botón está presionado
         }
      }
   }
}
