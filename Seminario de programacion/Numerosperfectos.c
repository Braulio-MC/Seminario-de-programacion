/*Número: 18
Titulo de la práctica: Numeros perfectos
Nombre del alumno: Braulio Martínez Carrilo
Fecha: 05/03/19
Descripción de la práctica: Programa que calcula los numeros perfectos del 1 al 10000
Datos de Entrada:
Datos de Salida: Numeros perfectos
Conclusiones y/o comentarios: Pense que eran mas numeros pero resulto que solo son 4*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num,cont,suma,SALIR;

printf("Numeros perfectos del 1 al 10000:\n\n");
for(num = 1; num < 10000; num++){
    suma = 0;
    for(cont=1;cont<=num/2;cont++){
        if(num%cont == 0){
            suma+=cont;}}
    if(suma == num){
        printf("%d\n",num);}
}
system("pause");
return 0;
}
