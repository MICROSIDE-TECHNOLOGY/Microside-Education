/*

AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.

FECHA: JUNIO 2019

*/

/**************************************************************************

Esta práctica consiste en realizar el envio de datos por medio de un módulo

Bluetooth, usando el protocolo de comunicación serial UART, para enviar un

comando simple para prender y apagar un LED incluido en los módulos X-UNO, X-MEGA o X-NANO

y un segundo comando para preguntar el estado de un botón.

**************************************************************************/

#include <SoftwareSerial.h>
int led1 = 13;
int data;

const int BOTON = 8; //Número del pin para BOTÓN
int EstadoBoton = 0; //Variable para guardar el estado

void setup()
{
  Serial.begin(9600);       //configura comunicación serial  
  pinMode(led1,OUTPUT);    //configura pin como salida para el LED
  pinMode (BOTON, INPUT_PULLUP);  //Inicializa el PIN como entrada con pull - up
}
 
void loop()
{
  while(Serial.available())                           //espera recibir un dato del Bluetooth
  {
    data = Serial.read();                           //lee el dato recibido
    if(data == '1')                               
    {
      
        digitalWrite(led1,HIGH);               //enciende el LED
        Serial.println("LED encendido");    //imprime en el monitor serial
 
    }
    if(data == '0')                              
    {
      
        digitalWrite(led1,LOW);            //apaga el LED
        Serial.println("LED apagado");
       
    }
    else if(data == '?')                              
    {
       EstadoBoton = digitalRead (BOTON);               //Leer estado del botón
          if (EstadoBoton == HIGH)                                         //Pregunta el estado del botón
           {     
            Serial.println ("0");                                      //Envía un 0 si el botón no está presionado
          } 
          else
          {
          Serial.println ("1");                         //Envía un 1 si el botón está presionado
          }
    }
  }
}
