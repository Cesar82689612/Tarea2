#include <stdio.h>

int main ()
{ 
    int arr[10]; 
    int *ap;
    int indice, cont1=0, cont2=0, cont3=0;
    printf("Introduce 10 numeros enteros:\n");
    for (indice = 0; indice < 10; indice++)
    { 
        scanf("%d", &arr[indice]); 
    }
     ap=arr;
    for (indice=0; indice<10; indice++)
    {
      if (*ap>0)
      {
        cont1++;
      }
      else 
      if (*ap==0)
      {
        cont2++;
      }
      else 
      {
        cont3++;
      }
    ap=ap+1;
    }
    printf("\nHay %d numeros positivos en el arreglo:\n", cont1);
    printf("\nHay %d numeros positivos en el arreglo:\n", cont2); 
    printf("\nHay %d numeros positivos en el arreglo:\n", cont3);
    return 0;
}
  
