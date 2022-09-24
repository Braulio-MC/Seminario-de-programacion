#include <stdio.h>
#include <stdlib.h>

int main(){

    int f,b,c=5,sel,SALIR;

    printf("Selecciona la figura que desea desplegar\n");

    printf(" 1. Cuadro completo\n 2. Contorno del cuadrado\n 3. Triangulo superior izquierdo\n 4. Triangulo superior derecho\n 5. Triangulo inferior izquierdo\n 6. Triangulo inferior derecho\n 7. Diagonal de izquierda a derecha \ \n 8. Diagonal de derecha a izquierda /\n 9. Cruz X \n 10. Salir \n");
    scanf("%d",&sel,sel <= 10?'***':'**');

    do{
        system("cls");

        switch(sel){

            case 1:{
                printf("Dibujo de cuadrado completo:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",b <= c?'*':' ');}
                printf("\n");}
                }break;
            case 2:{
                printf("Dibujo de contorno de cuadrado:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",f==1||f==c||b==1||b==c?'*':' ');}
                printf("\n");}
                }break;
            case 3:{
                 printf("Dibujo de triangulo superior izquierdo:\n");
                for(f=1;f<=c;f++){
                    for(b=c;b>=1;b--){
                        printf("%c",f<=b&&b<=c||b>c&&f<c*2+b?'*':' ');}
                printf("\n");}
                }break;
            case 4:{
                printf("Dibujo de triangulo superior derecho:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",f<=b&&b<=c||b>c&&f<c*2+b?'*':' ');}
                printf("\n");}
                }break;
            case 5:{
                printf("Dibujo de triangulo inferior izquierdo:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",b<=f&&f<=c||f>c&&b<c*2-f?'*':' ');}
                printf("\n");}
                }break;
            case 6:{
                printf("Dibujo de triangulo inferior derecho:\n");
                for(f=1;f<=c;f++){
                    for(b=5;b>=1;b--){
                        printf("%c",b<=f&&f<=c||f>c&&b<c*2-f?'*':' ');}
                printf("\n");}
                }break;
            case 7:{
                printf("Dibujo de diagonal de izquierda a derecha:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",f==b?'*':' ');}
                printf("\n");}
                }break;
            case 8:{
                printf("Dibujo de diagonal de derecha a izquierda:\n");
                for(f=1;f<=c;f++){
                    for(b=5;b>=1;b--){
                        printf("%c",f==b?'*':' ');}
                printf("\n");}
                }break;
            case 9:{
                printf("Dibujo de cruz:\n");
                for(f=1;f<=c;f++){
                    for(b=1;b<=c;b++){
                        printf("%c",f==b?'*':' ');}
                printf("\n");}
                }break;
            }
        system("pause");
    }while(SALIR == 10);
return 0;
}
