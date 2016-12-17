#include <DCMotor.h>

DCMotor motor_izq(M0_EN, M0_D0, M0_D1);
DCMotor motor_der(M1_EN, M1_D0, M1_D1);

#define seguidor 1
#define frenar 2

int s_der_e;
int s_der_i;
int s_izq_i;
int s_izq_e;

int estado = seguidor;

void setup()
{
  
}

void loop()
{
  s_der_e = analogRead(3);
  s_der_i = analogRead(4);
  s_izq_i = analogRead(1);
  s_izq_e = analogRead(5);
  
  if(estado == seguidor)
  {
    if(s_der_i > 25 && s_izq_i > 25)
    {
      motor(-5,-5);
      estado = frenar;
    }
    else if(s_der_e > 25)
    {
      motor(35,50);
    }
    else if(s_izq_e > 25)
    {
      motor(50,35);
    }
    else
    {
      motor(40,40);
    }
  }
}

void motor(int vel1, int vel2)
{
  motor_izq.setSpeed(vel1);
  motor_der.setSpeed(vel2);
}
