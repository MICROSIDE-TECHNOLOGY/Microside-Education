/*
  AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
  FECHA: JUNIO 2019
*/
/**************************************************************************
  Esta práctica consiste en realizar un control PWM para el control de un LED RGB.
**************************************************************************/
int pwm = 6;                        //pin de salida PWM
int i = 0;                          //varible para que el ciclo de trabajo aumente
const int LEDR = 8;                 //Número del pin para LED
const int LEDV = 9;                 //Número del pin para LED
const int LEDA = 10;                //Número del pin para LED
int VR=0,VA=0,VV=0;                 //Declaramos las variables VR,VA,VV,CONT
void setup()
{
   pinMode (pwm, OUTPUT) ;
   pinMode (5, OUTPUT) ;
   pinMode (LEDR, OUTPUT);          //Inicializa el PIN como una salida digital
   pinMode (LEDV, OUTPUT);          //Inicializa el PIN como una salida digital
   pinMode (LEDA, OUTPUT);          //Inicializa el PIN como una salida digital
}

void loop()
{
   digitalWrite (LEDA, LOW); 
   digitalWrite (LEDV, LOW); 
   digitalWrite (LEDR, HIGH); 

   for (VR= 255; VR>= 0; VR--)           //Ciclo para decrementar el brillo
    {      
      analogWrite (pwm, VR);             //Asigna contador al ciclo de trabajo
      analogWrite (5, 255 - VR);
      delay (5);                         //Retardo
    }
   for (VR = 0; VR <= 255; VR++)          //Ciclo para incrementar el brillo
    {
      
      analogWrite (pwm, VR);              //Asigna contador al ciclo de trabajo
      analogWrite (5, 255 - VR);
      delay (5);                          //Retardo
     }
 
   digitalWrite (LEDA, LOW); 
   digitalWrite (LEDV, HIGH); 
   digitalWrite (LEDR, LOW); 


  for (VV= 255; VV>= 0; VV--)              //Ciclo para decrementar el brillo
   {    
      analogWrite (pwm, VV);              //Asigna contador al ciclo de trabajo
      analogWrite (5, 255 - VV);
      delay (5);                          //Retardo
   }
  for (VV = 0; VV <= 255; VV++)            //Ciclo para incrementar el brillo
   {
     
      analogWrite (pwm, VV);               //Asigna contador al ciclo de trabajo
      analogWrite (5, 255 - VV);
      delay (5);                           //Retardo
   }
   
   digitalWrite (LEDA, HIGH); 
   digitalWrite (LEDV, LOW); 
   digitalWrite (LEDR, LOW); 

   for (VA = 255; VA>= 0; VA--)           //Ciclo para decrementar el brillo
   { 
      analogWrite (pwm, VA);              //Asigna contador al  ciclo de trabajo
      analogWrite (5, 255 - VA);
      delay (5);                           //Retardo
   }
   
    for (VA = 0; VA <= 255; VA++)         //Ciclo para incrementar el brillo
   {   
      analogWrite (pwm, VA);              //Asigna contador al ciclo de trabajo
      analogWrite (5, 255 - VA);
      delay (5);                          //Retardo
   }   
}
