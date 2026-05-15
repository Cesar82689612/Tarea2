#include <stdio.h>

int main ()
{ 
    int arr[10]; 
    int *ap;
    int indice, v, cont=0;
    printf("Introduce 10 numeros enteros:\n");
    for (indice = 0; indice < 10; indice++)
    { 
        scanf("%d", &arr[indice]); 
    }
    printf ("Introduce el valor que se desea buscar en el arreglo\n");
    scanf ("%d", &v);
    ap=arr;
    for (indice=0; indice<10; indice++)
    {
      if (*ap== v)
      {
        cont++;
      }
    ap=ap+1;
    }
    printf("\nLas veces que se repide %d son:\n", v);
    printf ("%d", cont);
    return 0;
}
