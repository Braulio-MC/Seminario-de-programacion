/*Número: 22
Titulo de la práctica: Adivinar un numero
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 18/03/19
Descripción de la práctica: Programa que pide un numero al usuario y lo va comparando con el numero que es el que tiene que acertar
y si su numero es menor al que se pide imprime un mensaje que dice que su numero es menor en caso contrario imprime un mensaje que dice
su numero es mayor al que se busca
Datos de Entrada: Valor para acertar
Datos de Salida: Numero de intentos, mejor puntuacion, peor puntuacion y numero de juegos
Conclusiones y/o comentarios: Programa muy entretenido me gusto hacerlo ademas de usar una biblioteca mas y la palabra reservada rand y srand*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n,n2,n3,cont=0,cont2=0,MP=0,PP=0,adivinar,SALIR;
    n2 =101;
    srand(time (NULL));

    do{
        n3 = rand () % 100+1;
        cont = 0;
        cont2 = cont2+1;
        system("cls");

        for(adivinar=1;adivinar<=n2;adivinar++){
            cont = cont+1;
            printf("En que numero estoy pensando?\n");
            scanf("%d",&n);
            system("cls");

            if(n==n3){
                printf("--> Acertaste el numero! <--\n");
                printf("Tu numero de intentos fue: %d\n",cont);
                if(cont2==1){
                    MP = cont;
                    PP = cont;
                }else{
                    if(cont<=MP){
                        MP = cont;
                    }else if(cont>=PP){
                        PP = cont;
                        }
                    }
            break;}
                else if(n<n3){
                    system("cls");
                    printf("Sigue intentando tu numero es menor\n");
                    }else if(n>n3){
                        printf("Sigue intentando su numero es mayor\n");
                    }
        }system("pause");
        printf("Desea seguir jugando?\n1. Si\n2. No\n");
        scanf("%d",&SALIR);
    }while(SALIR != 2);
    system("cls");

    printf("Tu numero de juegos es: %d\n",cont2);
    printf("La mejor puntuacion fue: %d\n",MP);
    printf("La peor puntuacion fue: %d\n",PP);
    printf("Gracias por jugar!\n");
return 0;
}
