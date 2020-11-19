/*
AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
FECHA: JUNIO 2019
*/

/**************************************************************************
En esta práctica se usa el módulo PWM (Pulse Width Modulation), para el aumento y disminución de la
velocidad, así como cambia el sentido de giro.
**************************************************************************/

int MOTOR = 9;       // Nombramos el pin 9
int pinPot = A2;    // Nombramos el pin A2
int valorPot = 0;

void setup()
{
 pinMode(MOTOR, OUTPUT);
}

void loop()
{

valorPot = analogRead(pinPot);                  //Se lee valor del sensor
valorPot = map(valorPot, 0, 1024, 0, 255);     //Convertimos ese valor de 10 bits a 8 bits
analogWrite(MOTOR, valorPot);                 //Mandamos los pulsos al motor
}
