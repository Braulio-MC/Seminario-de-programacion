#include <pthread.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void gotoxy (int x, int y);
void limpiarTablero(char tablero[8][8]);
void dibujarTablero(char tablero[8][8]);
void inicializarTablero(char tablero[8][8]);
void menuTablero(char tablero[8][8]);
int verificarMatriz(char tablero[8][8]);
void menu();

void gotoxy (int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
void limpiarTablero(char tablero[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            tablero[i][j] = ' ';
        }
    }

}
void dibujarTablero(char tablero[8][8]){
    gotoxy(60,1);  printf("  +-0---1---2---3---4---5---6---7-+");
    gotoxy(60,2);  printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-0",tablero[0][0],tablero[0][1],tablero[0][2],tablero[0][3],tablero[0][4],tablero[0][5],tablero[0][6],tablero[0][7]);
    gotoxy(60,3);  printf("  +-------------------------------+");
    gotoxy(60,4);  printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-1",tablero[1][0],tablero[1][1],tablero[1][2],tablero[1][3],tablero[1][4],tablero[1][5],tablero[1][6],tablero[1][7]);
    gotoxy(60,5);  printf("  +-------------------------------+");
    gotoxy(60,6);  printf("E-| %c | %c | %c | %c | %c | %c | %c | %c |-2",tablero[2][0],tablero[2][1],tablero[2][2],tablero[2][3],tablero[2][4],tablero[2][5],tablero[2][6],tablero[2][7]);
    gotoxy(60,7);  printf("  +-------------------------------+");
    gotoxy(60,8);  printf("J-| %c | %c | %c | %c | %c | %c | %c | %c |-3",tablero[3][0],tablero[3][1],tablero[3][2],tablero[3][3],tablero[3][4],tablero[3][5],tablero[3][6],tablero[3][7]);
    gotoxy(60,9);  printf("  +-------------------------------+");
    gotoxy(60,10); printf("E-| %c | %c | %c | %c | %c | %c | %c | %c |-4",tablero[4][0],tablero[4][1],tablero[4][2],tablero[4][3],tablero[4][4],tablero[4][5],tablero[4][6],tablero[4][7]);
    gotoxy(60,11); printf("  +-------------------------------+");
    gotoxy(60,12); printf("Y-| %c | %c | %c | %c | %c | %c | %c | %c |-5",tablero[5][0],tablero[5][1],tablero[5][2],tablero[5][3],tablero[5][4],tablero[5][5],tablero[5][6],tablero[5][7]);
    gotoxy(60,13); printf("  +-------------------------------+");
    gotoxy(60,14); printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-6",tablero[6][0],tablero[6][1],tablero[6][2],tablero[6][3],tablero[6][4],tablero[6][5],tablero[6][6],tablero[6][7]);
    gotoxy(60,15); printf("  +-------------------------------+");
    gotoxy(60,16); printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-7",tablero[7][0],tablero[7][1],tablero[7][2],tablero[7][3],tablero[7][4],tablero[7][5],tablero[7][6],tablero[7][7]);
    gotoxy(60,17); printf("  +------------ EJE X ------------+");
}
void inicializarTablero(char tablero[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            tablero[i][j] = 'R';
        }
    }

}
void menuTablero(char tablero[8][8]){
    inicializarTablero(tablero);

    gotoxy(60,1);  printf("  +-0---1---2---3---4---5---6---7-+");
    gotoxy(60,2);  printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-0",tablero[0][0],tablero[0][1],tablero[0][2],tablero[0][3],tablero[0][4],tablero[0][5],tablero[0][6],tablero[0][7]);
    gotoxy(60,3);  printf("  +-------------------------------+");
    gotoxy(60,4);  printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-1",tablero[1][0],tablero[1][1],tablero[1][2],tablero[1][3],tablero[1][4],tablero[1][5],tablero[1][6],tablero[1][7]);
    gotoxy(60,5);  printf("  +-------------------------------+");
    gotoxy(60,6);  printf("E-| %c | %c | %c | %c | %c | %c | %c | %c |-2",tablero[2][0],tablero[2][1],tablero[2][2],tablero[2][3],tablero[2][4],tablero[2][5],tablero[2][6],tablero[2][7]);
    gotoxy(60,7);  printf("  +-------------------------------+");
    gotoxy(60,8);  printf("J-| %c | %c | %c | %c | %c | %c | %c | %c |-3",tablero[3][0],tablero[3][1],tablero[3][2],tablero[3][3],tablero[3][4],tablero[3][5],tablero[3][6],tablero[3][7]);
    gotoxy(60,9);  printf("  +-------------------------------+");
    gotoxy(60,10); printf("E-| %c | %c | %c | %c | %c | %c | %c | %c |-4",tablero[4][0],tablero[4][1],tablero[4][2],tablero[4][3],tablero[4][4],tablero[4][5],tablero[4][6],tablero[4][7]);
    gotoxy(60,11); printf("  +-------------------------------+");
    gotoxy(60,12); printf("Y-| %c | %c | %c | %c | %c | %c | %c | %c |-5",tablero[5][0],tablero[5][1],tablero[5][2],tablero[5][3],tablero[5][4],tablero[5][5],tablero[5][6],tablero[5][7]);
    gotoxy(60,13); printf("  +-------------------------------+");
    gotoxy(60,14); printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-6",tablero[6][0],tablero[6][1],tablero[6][2],tablero[6][3],tablero[6][4],tablero[6][5],tablero[6][6],tablero[6][7]);
    gotoxy(60,15); printf("  +-------------------------------+");
    gotoxy(60,16); printf("  | %c | %c | %c | %c | %c | %c | %c | %c |-7",tablero[7][0],tablero[7][1],tablero[7][2],tablero[7][3],tablero[7][4],tablero[7][5],tablero[7][6],tablero[7][7]);
    gotoxy(60,17); printf("  +------------ EJE X ------------+");
}
int verificarMatriz(char tablero[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(tablero[i][j] == ' ')
                return 1;
        }
    }
    return 0;
}
void menu(){
    int opcion;
    char tablero[8][8];

    menuTablero(tablero);

    gotoxy(0,0); printf("\tLAS 8 REINAS");
    gotoxy(0,2); printf("1. Un jugador");
    //gotoxy(0,3); printf("2. Mostrar las 92 posibilidades");
    gotoxy(0,3); printf("3. Salir");
    gotoxy(0,4); printf("- Ingrese la opcion: ");
    gotoxy(20,4); scanf("%i",&opcion);

    system("cls");

    switch(opcion){
        case 1:{
            char tablero[8][8];
            int regreso=0,x,y,usuario=0;

            limpiarTablero(tablero);

            while(usuario <= 8){
                dibujarTablero(tablero);
                gotoxy(0,0); printf("Ingrese la posicion para la reina");
                gotoxy(0,2); printf("Posicion en eje X:");
                gotoxy(18,2); scanf("%i",&x);
                gotoxy(0,3); printf("Posicion en eje Y:");
                gotoxy(18,3); scanf("%i",&y);
                gotoxy(18,2); printf("     ");
                gotoxy(18,3); printf("     ");

                if(tablero[y][x] == ' '){
                    //Abajo Y
                    for(int i=y+1;i<=7;i++){
                        if(tablero[i][x] != 'R'){
                            tablero[i][x] = 176;
                        }
                    }
                    //Arriba Y
                    for(int i=y-1;i>=0;i--){
                        if(tablero[i][x] != 'R'){
                            tablero[i][x] = 176;
                        }
                    }
                    //Derecha X
                    for(int i=x+1;i<=7;i++){
                        if(tablero[y][i] != 'R'){
                            tablero[y][i] = 176;
                        }
                    }
                    //Izquierda X
                    for(int i=x-1;i>=0;i--){
                        if(tablero[y][i] != 'R'){
                            tablero[y][i] = 176;
                        }
                    }
                    //Diagonal izquierda hacia arriba 1
                    int yy = y;
                    for(int i=x;i>=0;i--){
                        if(tablero[yy][i] != 'R'){
                            tablero[yy][i] = 176;
                        }
                        yy--;
                    }
                    //Diagonal de izquierda hacia arriba 2
                    int yy4 = y;
                    for(int i=x;i<=7;i++){
                        if(tablero[yy4][i] != 'R'){
                            tablero[yy4][i] = 176;
                        }
                        yy4--;
                    }
                    //Diagonal de derecha hacia abajo 1
                    int yy3 = y;
                    for(int i=x;i>=0;i--){
                        if(tablero[yy3][i] != 'R'){
                            tablero[yy3][i] = 176;
                        }
                        yy3++;
                        if(yy3 > 7)break;
                    }
                    //Diagonal derecha hacia abajo 2
                    int yy2 = y;
                    for(int i=x; i<=7; i++){
                        if(tablero[yy2][i] != 'R'){
                            tablero[yy2][i] = 176;
                        }
                        yy2++;
                        if(yy2 > 7)break;
                    }
                    tablero[y][x] = 'R';
                    usuario++;

                    if(!verificarMatriz(tablero) && usuario < 8){
                        gotoxy(0,5); printf("La matriz se ha llenado y no has ganado aun");
                        gotoxy(0,6); system("pause");
                        gotoxy(0,5); printf("                                            ");
                        gotoxy(0,6); printf("                                              ");
                        limpiarTablero(tablero);
                        usuario = 0;
                    }
                    if(usuario == 8){
                        gotoxy(0,5); printf("Conseguiste posicionar correctamente las reinas");
                        gotoxy(0,6); system("pause");
                        gotoxy(0,5); printf("                                                 ");
                        gotoxy(0,6); printf("                                                 ");
                        while(regreso <= 3){
                            gotoxy(0,16); printf("Regresando al menu...");
                            Sleep(1000);
                            regreso++;
                        }
                        system("cls");
                        menu();
                    }

                }else{gotoxy(0,5); printf("Posicion ocupada por una reina ingrese otra posicion");
                    gotoxy(0,6); system("pause");
                    gotoxy(0,5); printf("                                                       ");
                    gotoxy(0,6); printf("                                                       ");
                }
                gotoxy(0,15); printf("Turnos: %i",usuario);
            }
        }break;
        /*case 2:{
            char tablero[8][8];
            int x,y,posibilidades=0;

            while(posibilidades < 93){
                srand(time(NULL));
                dibujarTablero(tablero);

                for(int i=1;i<=8;i++){
                    x = rand() % 7;
                    y = rand() % 7;
                    gotoxy(0,2); printf("%i",x);
                    gotoxy(0,3); printf("%i",y);
                    //limpiarTablero(tablero);
                    if(tablero[y][x] = ' '){
                        //Abajo Y
                        for(int i=y+1;i<=7;i++){
                            if(tablero[i][x] != 'R'){
                                tablero[i][x] = 176;
                            }
                        }
                        //Arriba Y
                        for(int i=y-1;i>=0;i--){
                            if(tablero[i][x] != 'R'){
                                tablero[i][x] = 176;
                            }
                        }
                        //Derecha X
                        for(int i=x+1;i<=7;i++){
                            if(tablero[y][i] != 'R'){
                                tablero[y][i] = 176;
                            }
                        }
                        //Izquierda X
                        for(int i=x-1;i>=0;i--){
                            if(tablero[y][i] != 'R'){
                                tablero[y][i] = 176;
                            }
                        }
                        //Diagonal izquierda hacia arriba 1
                        int yy = y;
                        for(int i=x;i>=0;i--){
                            if(tablero[yy][i] != 'R'){
                                tablero[yy][i] = 176;
                            }
                            yy--;
                        }
                        //Diagonal de izquierda hacia arriba 2
                        int yy4 = y;
                        for(int i=x;i<=7;i++){
                            if(tablero[yy4][i] != 'R'){
                                tablero[yy4][i] = 176;
                            }
                            yy4--;
                        }
                        //Diagonal de derecha hacia abajo 1
                        int yy3 = y;
                        for(int i=x;i>=0;i--){
                            if(tablero[yy3][i] != 'R'){
                                tablero[yy3][i] = 176;
                            }
                            yy3++;
                            if(yy3 > 7)break;
                        }
                        //Diagonal derecha hacia abajo 2
                        int yy2 = y;
                        for(int i=x; i<=7; i++){
                            if(tablero[yy2][i] != 'R'){
                                tablero[yy2][i] = 176;
                            }
                            yy2++;
                            if(yy2 > 7)break;
                        }
                        tablero[y][x] = 'R';
                        posibilidades++;

                        if(!verificarMatriz(tablero) && posibilidades < 8){
                            gotoxy(0,5); printf("La matriz se ha llenado y no ha ganado aun");
                            gotoxy(0,6); system("pause");
                            gotoxy(0,5); printf("                                            ");
                            gotoxy(0,6); printf("                                              ");
                            limpiarTablero(tablero);
                            posibilidades = 0;
                        }
                    }
                }
                gotoxy(0,6); system("pause");
                gotoxy(0,5); printf("Posibilidad: %i",posibilidades);
            }
        }break;*/
        case 3:{
            gotoxy(0,5); printf("GRACIAS POR JUGAR");
        }break;
    }
}
int main(){

    menu();

    gotoxy(0,25); return 0;
}
