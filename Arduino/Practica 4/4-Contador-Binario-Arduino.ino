/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
Implementar un contador binario que incrementará cada vez que se presione un botón,
este será configurado como entrada digital. Para visualizar
el conteo se utilizan LEDs.
**************************************************************************/
const int BOTON = 8;      //Número del pin para BOTON
int EstadoBoton = 0;
char cont = 0;

void setup() 
{
   DDRD = B11111111; //Configura puerto D como salida
   pinMode (BOTON, INPUT_PULLUP); //Inicializa el PIN como entrada con pullup
}

void loop() 
{
   EstadoBoton = digitalRead (BOTON); //Leer estado del botón
   if (EstadoBoton == LOW)
   {
      //Pregunta el estado del botón
      cont++;    //Incrementa el contador
      PORTD = cont;   //Despliega el valor a PORTD
      delay (5);    //Retardo de 5ms
      while (!digitalRead (BOTON)); //Espera ser soltado el botón
      delay (5);    //Retardo de 5ms
   }
}