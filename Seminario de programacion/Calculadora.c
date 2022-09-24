/*Número de practica: 12
Titulo de la práctica: Calculadora
Nombre del alumno: Braulio Martinez Carrillo
Fecha: 20/02/19
Descripción de la práctica: Calculadora que hace operaciones basicas
Datos de Entrada: Valores a operar
Datos de Salida: Resultado de los valores en operaciones distintas
Conclusiones y/o comentarios: Es interesante ver como la computadora puede hacer procesos tan bastos y a gran velocidad*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int op,suma,n1,n2,resta,multi,pot,SALIR;
float division,residuo;

do{

system("cls");

printf("Ingrese el tipo de operacion que desee realizar: \n1. Suma \n2. Resta \n3. Multiplicacion \n4. Division \n5. Potencia \n6. Residuo \n7. Salir\n\n");
scanf("%d",&op);

if(op >= 1 && op <= 6){
    printf("Rango correcto\n");
}else{printf("Numero no valido: %d\n",op);}

switch(op){
    case 1:{
        printf("Ingrese los numeros que necesite sumar: \n");

        printf("primer numero: \n");
        scanf("%d",&n1);

        printf("Segundo numero: \n");
        scanf("%d",&n2);

        suma = n1+n2;
        printf("El resultado es: %d \n\n",suma);
    }break;

    case 2:{
        printf("Ingrese los numeros que necesite restar: \n");

        printf("primer numero: \n");
        scanf("%d",&n1);

        printf("Segundo numero: \n");
        scanf("%d",&n2);

        resta = n1-n2;
        printf("El resultado es: %d \n\n",resta);
    }break;

    case 3:{
        printf("Ingrese los numeros que necesite multiplicar: \n");

        printf("primer numero: \n");
        scanf("%d",&n1);

        printf("Segundo numero: \n");
        scanf("%d",&n2);

        multi = n1*n2;
        printf("El resultado es: %d \n\n",multi);
    }break;

    case 4:{
        printf("Ingrese los numeros que necesite dividir: \n");

        printf("primer numero: \n");
        scanf("%d",&n1);

        printf("Segundo numero: \n");
        scanf("%d",&n2);

        division = n1/n2;
        printf("El resultado es: %.4f \n\n",division);
    }break;

    case 5:{
        printf("Ingrese un numero y una potencia: \n");

        printf("primer numero: \n");
        scanf("%d",&n1);

        printf("Potencia: \n");
        scanf("%d",&n2);

        pot = pow (n1,n2);
        printf("El resultado es: %d \n\n",pot);
    }break;

    case 6:{
        printf("Ingrese dos numeros para obtener su residuo: \n");

        printf("Primer numero: \n");
        scanf("%d",&n1);

        printf("Segundo numero: \n");
        scanf("%d",&n2);

        residuo = n1%n2;
        printf("El resultado es: %.2f\n\n",residuo);
    }break;
}
printf("Desea salir del programa? \n1. Si \n2. No\n");
scanf("%d",&SALIR);

}while(SALIR != 1);
return 0;
}
