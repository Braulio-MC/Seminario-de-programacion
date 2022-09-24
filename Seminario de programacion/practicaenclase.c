#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int arreglo[] = {10,9,8,7,6,5,4,3,2,1};
    int i, j, n, aux;

    n = 10;
    for(i=1; i<n; i++) {
    j = i;
    aux = arreglo[i];
        while(j>0 && aux<arreglo[j-1]) {
        arreglo[j] = arreglo[j-1];
        j=j-1;
    }
    arreglo[j] = aux;
    }
    printf("\n\nLos elementos ordenados del arreglo son: \n");
    for(i=0; i<n; i++) {
        printf("Elemento [%d]: %d\n", i, arreglo[i]);
    }

    int i,j,n,aux=0,V[100];
    printf("Vector completo\n");
    printf("+-------------------+\n");
    srand(time (NULL));
    n=99;
    for(i=0;i<=99;i++){
        V[i] = rand() % 100;
        printf("[%d] %d\n",i,V[i]);
        if()

    }

return 0;}
