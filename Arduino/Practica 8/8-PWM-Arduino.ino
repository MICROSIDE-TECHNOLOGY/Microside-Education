/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/

/**************************************************************************
 Esta practica consiste en controlar la ilumunación de un led usando el modulo PWM.
**************************************************************************/

int pwm = 6;                          //pin de salida PWM
int i = 0;                            //varible para que el ciclo de trabajo aumente

void setup()
{
 pinMode(pwm,OUTPUT);
  pinMode(5,OUTPUT);
  
}
void loop()
{
  for(i = 0; i <= 255; i++)                   //Bucle para incrementar el brillo
  {                    
         analogWrite(pwm,i);                  //Asigna contador al ciclo de trabajo 
         analogWrite(5,255-i);
         delay(2);                            //Retardo
  }
   for(i = 255; i>= 0 ; i--)                   //Bucle para decrementar el brillo
   {
        analogWrite(pwm,i);                    //Asigna contador al ciclo de trabajo
        analogWrite(5,255-i);
        delay(2);                             //Retardo
   } 
}
