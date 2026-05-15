#include <stdio.h>
int main ()
{
  int d=0;
  float dis=0,des=0, precio=0, total=0;
  printf ("Bienvenido al programa que mustra el precio final del viaje\n");
  printf ("Introduzca el numero de dias de su estancia\n");
  scanf ( "%d", &d);
  printf ("Introduza la distancia de su destino en kilometros\n");
  scanf ( "%f", &dis);
  precio= 0.23*dis;
  if (d>7) 
  { 
    if (dis>800)
    {
      des= precio*0.3;
    }
  }
  total=precio-des;
  printf ("El precio es de");
  printf (" %f pesos\n", precio);
  printf ("El descuento es de");
  printf (" %f pesos\n", des);
  printf ("El total a pagar es de");
  printf (" %f pesos\n", total);
  return 0;
}
