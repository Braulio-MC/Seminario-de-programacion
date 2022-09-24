#include <stdio.h>
#include <stdlib.h>

int main(){
//Diferencia de numeros

int a = 0, b = 0,r = 0;

printf("Ingrese dos numeros para determinar la diferencia entre ellos\n");
scanf("%d",&a);

printf("Ingrese el segundo numero: \n");
scanf("%d",&b);

r = a-b;

if(a > b){
    printf("El resultado es: %d\n",r);
}else{printf("El resultado es: %d",r);}
return 0;}
