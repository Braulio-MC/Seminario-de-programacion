
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   int i, n;
   time_t t;

   n = 5;

   /* Inicializar*/
   srand((unsigned) time(&t));

   /* imprimir 5 numeros de 0 a 50*/
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 5+1);
   }

   return(0);
}
