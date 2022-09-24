/*Número de practica: 10
Titulo de la práctica: Tipo de triangulo
Nombre del alumno: Braulio Martinez Carrillo
Fecha: 11/02/19
Descripción de la práctica: Programa que al ser ejecutado recibe 3 medidas y apartir de esas 3 medidas determinar el
tipo de tringulo conforme el valor que recibe cada lado
Datos de Entrada: Medidas de los lados
Datos de Salida: Determinar el tipo de tringulo
Conclusiones y/o comentarios: Programa interesante y util para categorizar tringulos*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 0,b = 0,c = 0,SALIR;

do{

system("cls");

printf("Ingrese 3 valores para determinar el tipo de triangulo: \n\n");
printf("Ingrese el primer cateto: \n");
scanf("%d",&a);

printf("Ingrese el segundo cateto: \n");
scanf("%d",&b);

printf("Ingrese la hipotenusa: \n");
scanf("%d",&c);

if(a == b && b == c){
    printf("Su triangulo es equilatero\n\n");
}else if(a != b && b != c && a != c){
    printf("Su triangulo es escaleno\n\n");
}else if(a = b && a != c){
    printf("Su triangulo es isosceles\n\n");
    }else{printf("No se puede determinar el triangulo\n\n");}

printf("Desea salir de programa:\n 1.Si\n 2.No\n");
scanf("%d",&SALIR);

}while(SALIR != 1);

return 0;
}
