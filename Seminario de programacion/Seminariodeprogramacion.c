#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
//Areadeuntriangulo

int base = 0, h = 0, resul = 0;

printf("   --> Area de un triangulo <--\n\n");

printf("Ingrese dos numeros para determinar el area de un triangulo\n\n");
printf("Ingrese el valor de base: \n");
scanf("%d",&base);
printf("Ingrese numero de altura: \n");
scanf("%d",&h);

resul = base*h;
resul = resul/2;

printf("El resultado es: %d\n\n",resul);

//Promedio

float a = 0,b = 0,c = 0,d = 0;

printf("   --> Promedio <--\n\n");

printf("Ingrese la calificacion de los 3 semestres: \n");

scanf("%f""%f""%f",&a,&b,&c);

d = a+b+c;
d = d/3;

printf("El resultado es: %.2f\n\n\n",d);

//Area de un cuadrado

int ac = 0;

printf("   --> Area de un cuadrado <--\n\n");

printf("Ingrese un numero entero\n""Este numero servira para calcular el area de un cuadrado\n\n");
scanf("%d",&ac);

ac = pow (ac,2);

printf("El resultado es: %d\n\n",ac);

//Volumen de una esfera

float pi = 4.1888;
int radio = 0,resultado = 0;

printf("   --> Volumen de una esfera <--\n\n");

printf("Ingrese un numero este servira de radio para la esfera\n");
scanf("%d",&radio);

resultado = pi*radio;
resultado = pow(resultado,3);

printf("El resultado es: %d\n\n",resultado);

//Area de un circulo

float pi2 = 3.1416, resultado2 = 0;
int radio2 = 0;

printf("   --> Area de un circulo <--\n\n");

printf("Ingrese un numero entero este servira de radio para el circulo: \n");
scanf("%d",&radio2);

resultado2 = radio2*pi2;
resultado2 = pow (resultado2,2);

printf("El resultado es: %.2f\n\n",resultado2);

//Area de un trapecio

int bm = 0,bma = 0,al = 0, resul2 = 0;

printf("   --> Area de un trapecio <--\n\n");

printf("Ingrese datos de base menor, base mayor y altura para calcular el area del trapecio: \n""Ingrese base menor: \n");
scanf("%d",&bm);

printf("Ingrese base mayor: \n");
scanf("%d",&bma);

printf("Ingrese altura: \n");
scanf("%d",&al);

resul2 = bm+bma*al;
resul2 = resul2/2;

printf("El resultado es: %d\n\n",resul2);

//Convertir °C a °F
int gc = 0, gf = 0;

printf("   --> Celsius a Fahrenheit <--\n\n");

printf("Ingrese un numero entero este servira de grados Celsius\n");
scanf("%d",&gc);

gf = gc*9/5+32;

printf("El resultado es: %d grados Fahrenheit\n\n",gf);

//Convertir °F a °C
int gc2 = 0, gf2 = 0;

printf("   --> Fahrenheit a Celsius <--\n\n");

printf("Ingrese un numero entero este servira de grados Fahrenheit\n");
scanf("%d",&gf);

gc = gf-32*5/9;

printf("El resultado es: %d grados Celsius\n\n",gc);
return 0;
}
