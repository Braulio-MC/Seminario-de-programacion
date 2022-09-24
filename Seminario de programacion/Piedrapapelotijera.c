#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    #define piedra 1
    #define papel 2
    #define tijera 3
    int ele,ele2=1,rondas=0,SALIR,pc,MP=0,PP=0;

    srand(time (NULL));

    do{
        do{
        ele2++;

        system("cls");
        rondas = rondas+1;
        pc = rand() % 3+1;
        printf("%d",pc);

        printf("\t Piedra, Papel o tijera\n");

        printf("Que eliges?\n1. Piedra\n2. Papel\n3. Tijera\n");
        scanf("%d",&ele);

            if(ele<1&&ele>3){
                printf("Rango incorrecto intente de nuevo\n");
                }else if (ele>=1&&ele<=3){printf("Rango correcto\n");}
                system("cls");

            switch(ele){
                case 1:{
                    if(pc==1){
                        printf("Su resultado es empate\n");
                        }else if(pc==2){
                            printf("Usted pierde\n");
                            }else if(pc==3){
                                printf("Usted gana\n");
                                }
                    }break;
                case 2:{
                    if(pc==2){
                        printf("Su resultado es empate\n");
                        }else if(pc==1){
                            printf("Usted gana\n");
                            }else if(pc==3){
                                printf("Usted pierde\n");
                                }
                    }break;
                case 3:{
                    if(pc==3){
                        printf("Su resultado es empate\n");
                        }else if(pc==1){
                            printf("Usted pierde\n");
                            }else if(pc==2){
                                printf("Usted gana\n");
                                }
                    }break;
        }
        }while(ele2==3);

        printf("Desea salir de jugar?\n1. No\n2. Si\n");
        scanf("%d",&SALIR);

        system("cls");
        if(SALIR==2){
            printf("Su numero de rondas es: %d\n",rondas);
        }else if(cont2==1){
                    MP = cont;
                    PP = cont;
                }else{
                    if(cont<=MP){
                        MP = cont;
                    }else if(cont>=PP){
                        PP = cont;
                        }
                    }
    }while(SALIR == 1);
return 0;
}
