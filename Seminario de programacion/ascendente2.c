#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 0,b = 0,c = 0,aux,aux2;

printf("Ingrese tres valores: \n\n");

printf("Primer valor: \n");
scanf("%d",&a);

printf("Segundo valor: \n");
scanf("%d",&b);

printf("Tercer valor: \n");
scanf("%d",&c);

if(a>b){
    aux = a;
    aux2 = b;
    b = a;

    printf("%d%d%d",a,b,c);
}else if(a>c){

}

return 0;}
