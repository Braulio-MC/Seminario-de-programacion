/*Número: Practica 15
Titulo de la práctica: Factorial
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 28/02/19
Descripción de la práctica: Programa util para calcular el factorial de un valor cualquiera ingresado por el usuario
Datos de Entrada: Valor
Datos de Salida: Factorial del valor ingresado
Conclusiones y/o comentarios: Programa que me resulto un poco dificil al principio pero estuvo bien*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num = 0,contador = 0,res = 0,SALIR;

do{
    system("cls");

    printf("Ingrese un numero para determinar su factorial: \n");
    scanf("%d",&num);

    if(num < 0){
        printf("Entrada no valida\n\n");
    }else{

    contador = num-1;
    res = num;

    printf("%d! = %d ",num,num);

    do{
        printf("* %d ",contador);
        res = res*contador;
        contador--;

    }while(contador >= 1);

    printf(" = %d\n\n",res);}

    system("pause");

}while(SALIR != 0);


return 0;
}
