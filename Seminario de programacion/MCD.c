/*Número: Practica 16
Titulo de la práctica: Maximo comun divisor
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 28/02/19
Descripción de la práctica: Programa que calcula el MCD de dos numeros dados por el usuario
Datos de Entrada: El valor de los dos numeros a evaluar
Datos de Salida: El MCD
Conclusiones y/o comentarios: Programa util si deseas sacar rapidamente el MCD de dos numeros*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int n1,n2 = 0,n3 = 0,SALIR;

do{
    system("cls");

    printf("Ingrese dos numeros para calcular su maximo comun divisor\n");

    printf("Primer numero: \n");
    scanf("%d",&n1);

    printf("Segundo numero: \n");
    scanf("%d",&n2);

    if(n1 == n2){
        printf("Sus valores son iguales intente con valores diferentes \n");
    }else{

    if(n1 > n2){
        n3 = n1 % n2;
        while(n3 != 0){
                n1 = n2;
                n2 = n3;
                n3 = n1%n2;
        }
        printf("El MCD es: %d\n\n",n2);
    }else if(n2 > n1){
        n3 = n2%n1;
        while(n3 != 0){
                n2 = n1;
                n1 = n3;
                n3 = n2%n1;
        }
        printf("El MCD es: %d\n\n",n1);
        }}
    system("pause");

}while(SALIR != 1);
return 0;
}
