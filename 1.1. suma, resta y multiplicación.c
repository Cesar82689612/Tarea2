#include <stdio.h>
int main ()
{
  int v1, v2, s, r, m;
  printf ("Bienvenido al programa que realiza Suma, Resta y Multiplicación\n");
  printf ("Por favor inserte 1 número\n");
  scanf("%d", &v1);
  printf ("Inserte el otro número\n");
  scanf( "%d", &v2); 
  s= v1+v2;
  printf ("\nLa suma es: %d\n", s);
  r= v1-v2;
  printf ("La resta es: %d\n", r);
  m= v1*v2;
  printf ("La multiplicación es: %d\n", m);   
  return 0;
}
