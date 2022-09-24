/*Número: 17
Titulo de la práctica: Primos
Nombre del alumno: Braulio Martínez Carrilo
Fecha: 03/03/19
Descripción de la práctica: Programa que calcula primos
Datos de Entrada: Valor dado por el usuario
Datos de Salida: Si es primo o no
Conclusiones y/o comentarios: Programa util para verificar si un numero es primo o no*/
#include <stdio.h>
#include <stdlib.h>

int main(){

int primo = 0,primo2 = 0,cont = 2;
int bandera = 0,SALIR;

do{
    system("cls");

    printf("ingrese un valor positivo para determinar si es primo \n");
    scanf("%d",&primo);

    printf("Ingresaste el valor: %d\n\n",primo);

    for(cont = 2; cont < primo; cont++){
        primo2 = primo/cont;
        if(primo % cont != 0){
            bandera = 1;
        }else{bandera = 0; break;}

        printf("%d / %d = %d\n",primo,cont,primo2);
    }
    if(bandera){
        printf("Si es un primo\n");
    }else{printf("Su valor no es primo\n");}

    printf("Desea salir?\n 1. Si \n2. No\n");
    scanf("%d",&SALIR);

}while(SALIR != 1);
return 0;
}
