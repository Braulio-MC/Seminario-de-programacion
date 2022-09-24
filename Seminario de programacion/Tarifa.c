#include <stdio.h>
#include <stdlib.h>

int main(){
//Calcular costo de viaje en Uber

int a = 200,d = 0,t = 0,p = 0;

printf("Ingrese la distancia que desee recorrer(km): \n");
scanf("%d",&d);

printf("Ingrese una tarifa: \n");
scanf("%d",&t);

p = d*t+a;

printf("El precio del viaje: %d\n\n",p);

return 0;
}
