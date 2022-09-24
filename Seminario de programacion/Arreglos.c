#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

     int vector[10],in,suma;
     float cont=0;

     srand(time (NULL));

     for(in=0;in<10;in++){
        vector[in] = rand () % 100;
        printf("[%d] %d\n",in,vector[in]);
     }printf("\n");

     printf("--- Pares ---\n");
     for(in=0;in<10;in++){
        if(vector[in] % 2 == 0){
            printf("[%d] %d\n",in,vector[in]);
            suma += vector[in];
            cont++;
        }
     }
    printf("Suma: %d\n",suma);
    printf("Promedio: %.2f\n",suma/cont);

return 0;}

