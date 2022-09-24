#include <stdlib.h>
#include <stdio.h>

int main(){

int a = 0,b = 0,c = 0,SALIR;

do{
system("cls");

printf("Ingrese 3 numeros para determinar su forma ascendente\n\n");

printf("Ingrese el primer numero: \n");
scanf("%d",&a);

printf("Ingrese el segundo numero: \n");
scanf("%d",&b);

printf("Ingrese el tercer numero: \n");
scanf("%d",&c);

if(a > b && b > c){
    printf("Forma 1: \n%d\n%d\%d\n",a,b,c);
    }else if(b > a && a > c){
        printf("Forma 2: \n%d\n%d\n%d\n",b,a,c);
    }else if(c > a && a > b){
        printf("Forma 3: \n%d\n%d\n%d\n",c,a,b);
    }else if(c > b && b > a){
        printf("Forma 4: \n%d\n%d\n%d\n",c,b,a);
    }else if(b > c && c > a){
        printf("Forma 5: \n%d\n%d\n%d\n",b,c,a);
    }else if(a > c && c > b){
        printf("Forma 6: \n%d\n%d\n%d\n",a,c,b);
}else{printf("Forma incorrecta\n\n");}

printf("Quiere salir del programa?\n 1.Si\n 2. No\n\n");
scanf("%d",&SALIR);

}while(SALIR != 1);

return 0;
}
