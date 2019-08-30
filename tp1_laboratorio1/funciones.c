#include "funciones.h"

float sumar(float x, float y) {
  return x+y;
}

float restar(float x, float y) {
  return x-y;
}

float multiplicar(float x, float y) {
  return x*y;
}

float dividir(float x, float y)
{
  return x/y;
}

int factorialA(int x)
{
int r1;
if(x==0)
return 1;
r1=x* factorialA(x-1);
return (r1);
}

int factorialB(int y)
{
int r2;
if(y==0)
return 1;
r2=y* factorialA(y-1);
return (r2);
}
