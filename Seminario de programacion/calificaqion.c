/*Número de practica: 9
Titulo de la práctica: Calificar un curso
Nombre del alumno: Braulio Martinez Carrillo
Fecha: 11/02/19
Descripción de la práctica: Programa que funciona para calcular una calificacion en dos modalidades por ponderacion
y por el promedio de las 3 calificaciones
Datos de Entrada: Calificaciones
Datos de Salida: Calificacion ponderada y promedio de las 3 calificaciones
Conclusiones y/o comentarios: Fue interesante hacer este programa ya que usamos en buena manera if que nos sirve para practicar*/

#include <stdio.h>
#include <stdlib.h>

int main(){
//Calificacion

int a = 0, b = 0,c = 0,r1 = 0,r2 = 0,r3 = 0, rg = 0,rg2 = 0;

printf("Ingrese la calificacion de el primer parcial: \n");
scanf("%d",&a);

printf("Ingrese la calificacion del segundo parcial: \n");
scanf("%d",&b);

printf("Ingrese la calificacion del proyecto final: \n");
scanf("%d",&c);

r1 = a*.40;
r2 = b*.40;
r3 = c*.20;

printf("La calificacion del primer parcial es: %d de 40%\n\n",r1);
printf("La calificacion del segundo parcial es: %d de 40%\n\n",r2);
printf("La calificacion del proyecto final es: %d de 20%\n\n",r3);

rg = r1+r2+r3;

if(rg >= 60 && rg <= 100){
    printf("Su calificaciones es aprobatoria: %d\n\n",rg);
}else if (rg >= 0 && rg <= 59){
    printf("Su calificacion es reprobatoria: %d\n\n",rg);
}else {printf("Su calificacion no es correcta\n\n");}

printf("La calificacion total es: %d de 100%\n\n",rg);

rg2 = a+b+c;
rg2 = rg2/3;

printf("El promedio de las 3 calificaciones es: %d\n\n",rg2);

if(rg2 >= 60 && rg2 <= 100){
    printf("Su calificacion es aprobatoria: %d\n\n",rg2);
}else if(rg2 >= 0 && rg2 <= 59){
    printf("Su calificacion es reprobatoria: %d\n\n",rg2);
}else {printf("Su calificacion no es correcta\n\n");}
return 0;
}
