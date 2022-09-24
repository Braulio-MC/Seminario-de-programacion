#include <stdio.h>
#include <stdlib.h>

int main(){
//Numero mayor o menor

int num = 0;

printf("Ingrese un numero: \n");
scanf("%d",&num);

if(num >= 0){
    printf("El numero es positivo: %d\n\n",num);
}else{printf("Su numero es negativo: %d\n\n",num);}

return 0;
}
