#include <stdio.h>
int main()
{
  int v, op, cont;
  printf ("Ingrese el numero al que se le desarrollara la tabla de multiplicar\n");
  scanf ("%d", &v);
  for (cont=1; cont<=10; cont++)
  {
    op= v*cont;
    printf ("%d x %d = %d \n" , v, cont, op);
  }
  return 0;
}
