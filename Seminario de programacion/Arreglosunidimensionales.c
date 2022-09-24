#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int VA[10],VB[10],VC[10],indice,num,SALIR;

    srand(time (NULL));

    do{
    system("cls");
    printf("    VA\t VB   VC = VA+VB \n");
    printf("  +----------------------+\n");

    for(indice=0;indice<10;indice++){
        VA[indice] = rand() % 100;
        VB[indice] = rand() % 100;
        VC[indice] = VA[indice] + VB[indice];
        printf("[%d] %2d\t %2d\t %2d\n",indice,VA[indice],VB[indice],VC[indice]);

     }
     printf("Que numero desea buscar? \n");
     scanf("%d",&num);
     for(indice=0;indice<=9;indice++){
        if(num == VA[indice]){
            printf("Su valor esta en %d y su numero %d de VA\n",indice,VA[indice]);
        }else if(num == VB[indice]){
            printf("Su valor esta en %d y su numero %d de VB\n",indice,VB[indice]);
            }else if(num == VC[indice]){
                printf("Su valor esta en %d y su numero %d de VC\n",indice,VC[indice]);
                }else{printf("Su valor no se encuentra en esta posicion %d\n",indice);}
     }
     printf("Desea buscar otro numero\n1. Si\n2. No\n");
     scanf("%d",&SALIR);

    }while(SALIR == 1);
    printf("Gracias por usar el programa\n");
return 0;}
