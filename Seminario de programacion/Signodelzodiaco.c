/*Número de practica: 13
Titulo de la práctica: Signo del Zodiaco
Nombre del alumno: Braulio Martinez Carrillo
Fecha: 20/02/19
Descripción de la práctica: Programa que con base a datos de fecha de cumpleaños identifica tu signo zodiacal
Datos de Entrada: Fecha de cumpleaños
Datos de Salida: Signo zodiacal
Conclusiones y/o comentarios: Buena practica para formar la logica en switch*/


#include <stdio.h>
#include <stdlib.h>

int main(){

int fecha = 0,signo = 0,dia = 0,SALIR;

do{

system("cls");

printf("    ---> Signo del Zodiaco <---\n\n\n");

printf("Ingrese el mes en que cumple anios: \n1. Diciembre a Enero \n2. Enero a Febrero \n3. Febrero a Marzo \n4. Marzo a Abril \n5. Abril a Mayo \n6. Mayo a Junio \n7. Junio a Julio \n8. Julio a Agosto \n9. Agosto a Septiembre \n10. Septiembre a Octubre \n11. Octumbre a Noviembre \n12. Noviembre a Diciembre \n");
scanf("%d",&fecha);

if(fecha >= 1 && fecha <= 12){
    printf("Rango correcto: %d\n\n",fecha);

switch(fecha){
    case 1:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 22){
            printf("Su signo es: Capricornio \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 2:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 20){
            printf("Su signo es: Acuario \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 3:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 20){
            printf("Su signo es: Piscis \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 4:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 21){
            printf("Su signo es: Aries \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 5:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 21){
            printf("Su signo es: Tauro \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 6:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 21){
            printf("Su signo es: Gaminis \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 7:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 22){
            printf("Su signo es: Cancer \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 8:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 23){
            printf("Su signo es: Leo \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 9:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 24){
            printf("Su signo es: Virgo \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 10:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 24){
            printf("Su signo es: Libra \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 11:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 23){
            printf("Su signo es: Escorpio \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}

    case 12:{
        printf("Ingrese el dia de cumpleaños: \n");
        scanf("%d",&dia);

        if(dia >= 1 && dia <= 23){
            printf("Su signo es: Sagitario \n\n");
        }else{printf("Su fecha pertenece a otro signo\n\n");}
    break;}
}
}else{printf("Su rango es incorrecto intentelo de nuevo \n\n");}

system("pause");

printf("Desea salir del programa: \n1. Si \n2. No \n\n");

}while(SALIR != 1);
return 0;
}
