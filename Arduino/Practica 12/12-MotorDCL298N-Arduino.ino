/*
AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
FECHA: JUNIO 2019
*/

/**************************************************************************
En esta práctica se usa el módulo PWM (Pulse Width Modulation), para el aumento y disminución de la
velocidad, así como el uso del puente H LM298N para el cambio giro.
**************************************************************************/

int IN_1 = 9;           //Pin de control de dirección 1
int IN_2 = 10;         //Pin de control de dirección 2
int MOTOR = 11;       //Pin de control de velocidad
int SUBE;            //Control e indicador de dirección
int VELOCIDAD;      //Almacena valor de la velocidad
 
 
void setup()
{
  pinMode(IN_1, OUTPUT);            //Configuramos como salida
  pinMode(IN_2, OUTPUT);           //Configuramos como salida
  pinMode(MOTOR, OUTPUT);         //Configuramos como salida
}
 
 
void loop()
{
      digitalWrite(IN_1,1 );                  //Dirección del motor 
      digitalWrite(IN_2,0 );
      SUBE=1;
      while(VELOCIDAD<255 && SUBE){       //Se va incrementando del valor en el PWM hasta el máximo
      VELOCIDAD++;                        //Se incrementa el ciclo de trabajo
      analogWrite(MOTOR,VELOCIDAD);      //Salida Pin D11
      delay(10);                        //Cada 10 mili segundo
      }
      SUBE=0;
      
      while(VELOCIDAD>0 && !SUBE) {      //Se va reduciendo el valor en el PWM hasta el mí­nimo
      VELOCIDAD--;                      //Se reduce el ciclo de trabajo
      analogWrite(MOTOR,VELOCIDAD);    //Salida Pin D11
      delay(10);
      }
      SUBE=1;
      digitalWrite(IN_1,0 );                   //Alto del motor 
      digitalWrite(IN_2,0 );            
 
      delay(1000);
      
      digitalWrite(IN_1,0 );                  //Dirección del motor 
      digitalWrite(IN_2,1 );
      SUBE=1;
      while(VELOCIDAD<255 && SUBE){       //Se va incrementando del valor en el PWM hasta el máximo
      VELOCIDAD++;                       //Se incrementa el ciclo de trabajo
      analogWrite(MOTOR,VELOCIDAD);     //Salida Pin 11
      delay(10);                       //Cada 40 mili segundo
      }
      SUBE=0;
      
      while(VELOCIDAD>0 && !SUBE) {      //Se va reduciendo el valor en el PWM hasta el mí­nimo
      VELOCIDAD--;                      //Se reduce el ciclo de trabajo
      analogWrite(MOTOR,VELOCIDAD);    //Salida Pin 11
      delay(10);
      }
      SUBE=1;
      digitalWrite(IN_1,0 );       //Alto del motor 
      digitalWrite(IN_2,0 ); 
      
      delay(1000);
 
}
