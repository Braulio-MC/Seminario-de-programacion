/*Número: Practica 14
Titulo de la práctica: Tablas de multiplicar
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 28/02/19
Descripción de la práctica: Programa que sirve para calcular la tabla de multiplicar que el usuario desee consultar
Datos de Entrada: NO. de la tabla
Datos de Salida: Tabla de multiplicar del valor ingresado
Conclusiones y/o comentarios: Programa util si se quiere saber la tabla de algun valor grande*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int tabla = 0,tabla2 = 0,contador = 1,SALIR;

do{
    system("cls");

    printf("Ingrese la tabla de multiplicar que desea desplegar: \n");
    scanf("%d",&tabla);

    if(tabla <= 0){
        printf("Entrada no valida: %d\n\n",tabla);
    }else{
        printf("Tabla de multiplicar de: %d\n\n",tabla);
        for(contador = 1; contador <= 10; contador++){
            tabla2 = tabla*contador;
            printf("%d x %d = %d\n",tabla,contador,tabla2);
        }
    }
    system("pause");
}while(SALIR != 1);
return 0;
}
