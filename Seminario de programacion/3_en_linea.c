/*Número: 30
Titulo de la práctica: Gato(tres en linea)
Nombre del alumno: Braulio Martinez Carrillo
Fecha: 03/05/19
Descripción de la práctica: Se tiene un tablero de 3*3 en donde compite el usuario y la maquina la maquina genera un espacio
aleatorio y pone un O en el espacio mientras que el usuario pone X en el espacio elegido el que complete 3 posiciones iguales
gana
Datos de Entrada: Posiciones en la matriz
Datos de Salida: La matriz como gato, los procesos de la maquina los turnos y marcadores
Conclusiones y/o comentarios: Un programa mas dificil de lo habitual pero que disfrute mucho haciendo ademas de que use nuevas
funciones y palabras*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//Prototipos
void gotoxy (int x, int y);
void dibujarMatriz(char AR1[3][3]);
void inicializarMatriz(char AR1[3][3]);
int ganadorU(char AR1[3][3]);
int ganadorPC(char AR1[3][3]);

void dibujarMatriz(char AR1[3][3]){
    gotoxy(70,2);  printf("   EJE  X");
    gotoxy(70,3);  printf(" |-----------|");
    gotoxy(70,4);  printf("E| %c | %c | %c |",AR1[0][0],AR1[0][1],AR1[0][2]);
    gotoxy(70,5);  printf("J|-----------|");
    gotoxy(70,6);  printf("E| %c | %c | %c |",AR1[1][0],AR1[1][1],AR1[1][2]);
    gotoxy(70,7);  printf(" |-----------|");
    gotoxy(70,8);  printf("Y| %c | %c | %c |",AR1[2][0],AR1[2][1],AR1[2][2]);
    gotoxy(70,9);  printf(" |-----------|");
}
void gotoxy (int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
void inicializarMatriz(char AR1[3][3]){
    for(int i=0;i<=2;i++){
        for(int c=0;c<=2;c++){
            AR1[i][c] = ' ';
        }
    }
}
int ganadorU(char AR1[3][3]){
    if(AR1[0][0]=='X'&&AR1[0][1]=='X'&&AR1[0][2]=='X'){
        gotoxy(0,1); printf("El usuario gana\n");
        return 1;
        }else if(AR1[1][0]=='X'&&AR1[1][1]=='X'&&AR1[1][2]=='X'){
            gotoxy(0,1); printf("El usuario gana\n");
            return 1;
            }else if(AR1[2][0]=='X'&&AR1[2][1]=='X'&&AR1[2][2]=='X'){
                gotoxy(0,1); printf("El usuario gana\n");
                return 1;
                }else if(AR1[0][0]=='X'&&AR1[1][1]=='X'&&AR1[2][2]=='X'){
                    gotoxy(0,1); printf("El usuario gana\n");
                    return 1;
                    }else if(AR1[0][2]=='X'&&AR1[1][1]=='X'&&AR1[2][0]=='X'){
                        gotoxy(0,1); printf("El usuario gana\n");
                        return 1;
                        }else if(AR1[0][0]=='X'&&AR1[1][0]=='X'&&AR1[2][0]=='X'){
                            gotoxy(0,1); printf("El usuario gana\n");
                            return 1;
                            }else if(AR1[0][1]=='X'&&AR1[1][1]=='X'&&AR1[2][1]=='X'){
                                gotoxy(0,1); printf("El usuario gana\n");
                                return 1;
                                }else if(AR1[0][2]=='X'&&AR1[1][2]=='X'&&AR1[2][2]=='X'){
                                    gotoxy(0,1); printf("El usuario gana\n");
                                    return 1;
    }
    return 0;
}
int ganadorPC(char AR1[3][3]){
    if(AR1[0][0]=='O'&&AR1[0][1]=='O'&&AR1[0][2]=='O'){
        gotoxy(0,2); printf("La maquina gana\n");
        return 1;
        }else if(AR1[1][0]=='O'&&AR1[1][1]=='O'&&AR1[1][2]=='O'){
            gotoxy(0,2); printf("La maquina gana\n");
            return 1;
            }else if(AR1[2][0]=='O'&&AR1[2][1]=='O'&&AR1[2][2]=='O'){
                gotoxy(0,2); printf("La maquina gana\n");
                return 1;
                }else if(AR1[0][0]=='O'&&AR1[1][1]=='O'&&AR1[2][2]=='O'){
                    gotoxy(0,2); printf("La maquina gana\n");
                    return 1;
                    }else if(AR1[0][2]=='O'&&AR1[1][1]=='O'&&AR1[2][0]=='O'){
                        gotoxy(0,2); printf("La maquina gana\n");
                        return 1;
                        }else if(AR1[0][0]=='O'&&AR1[1][0]=='O'&&AR1[2][0]=='O'){
                            gotoxy(0,2); printf("La maquina gana\n");
                            return 1;
                            }else if(AR1[0][1]=='O'&&AR1[1][1]=='O'&&AR1[2][1]=='O'){
                                gotoxy(0,2); printf("La maquina gana\n");
                                return 1;
                                }else if(AR1[0][2]=='O'&&AR1[1][2]=='O'&&AR1[2][2]=='O'){
                                    gotoxy(0,2); printf("La maquina gana\n");
                                    return 1;
    }
    return 0;
}

   /*EJE  X
 |-----------|
E| X | O | O |
J|-----------|
E| X | O | X |
 |-----------|
Y| X | O | X |
 |-----------|*/

int main(){
    int i,c,u=0,u1=0,pc,pc1,turnos = 0,S,Mpc = 0,Mu = 0;
    char AR1[3][3];

    do{
        system("cls");
        turnos = 0;
        //Inicializar matriz
        inicializarMatriz(AR1);

        while(turnos<=9){
            gotoxy(0,19); printf("          ");
            gotoxy(0,19); printf("Turnos: %d",turnos);
            dibujarMatriz(AR1);
            int bandera = 0;
            while(bandera == 0){
                gotoxy(0,0); printf("Ingrese la posicion de la matriz para fila(X): ");
                scanf("%d",&u);
                gotoxy(0,1); printf("Ingrese la posicion de la matriz para columna(Y): ");
                scanf("%d",&u1);

                if(u>=0&&u<=2){
                    printf("\nPosicion valida para X\n");
                }else{
                    printf("\nPosicion no valida para X el rango es: >= 0 y <= 2 su rango fue %d\n",u);
                    }
                if(u1>=0&&u1<=2){
                    printf("\nPosicion Valida para Y\n");
                }else{
                    printf("\nPosicion no valida para Y el rango es: >= 0 y <= 2 su rango fue %d\n",u1);
                    }
                    system("pause");
                    system("cls");

                if(AR1[u][u1] == ' '){
                    AR1[u][u1] = 'X';
                    bandera = 1;
                    turnos++;
                }else{
                    printf("\n\n\nLa posicion esta ocupada intente con otra posicion\nSu ultima posicion fue: %d,%d\n",u,u1);
                    bandera = 0;
                }
                system("cls");
                dibujarMatriz(AR1);
            }
            if(ganadorU(AR1)){
                Mu += 1;
                dibujarMatriz(AR1);
                break;
            }

            //Limpiar pantalla
            gotoxy(0,0); printf("                                                         ");
            gotoxy(0,1); printf("                                                         ");
            dibujarMatriz(AR1);

            if(turnos >= 9){
                break;
            }

            Sleep(1000);
            int bandera2 = 0;
            while(bandera2 == 0){
                srand(time (NULL));
                pc = rand() % 3;
                pc1 = rand() % 3;

                gotoxy(0,1); printf("Turno de la maquina...\n");
                Sleep(500);
                gotoxy(0,1); printf("                       ");

                gotoxy(0,20); printf("             ");
                gotoxy(0,21); printf("             ");
                gotoxy(0,20); printf("Proceso PC 1: %d",pc);
                gotoxy(0,21); printf("Proceso PC 2: %d",pc1);

                if(AR1[pc][pc1] == ' '){
                    AR1[pc][pc1] = 'O';
                    bandera2 = 1;
                    turnos++;
                }else{
                    bandera2 = 0;
                }
            }
            if(ganadorPC(AR1)){
                Mpc += 1;
                dibujarMatriz(AR1);
                break;
            }
        }

        gotoxy(0,5); printf("Desea seguir jugando?\n1. Si\n2. No\n");
        scanf("%d",&S);
    }while(S == 1);
    system("cls");

    gotoxy(3,1); printf("---> Marcador Global <---\n\nUsuario: %d juego(s)\n\nMaquina: %d juego(s)\n\nDe %d juego(s)",Mu,Mpc,Mu+Mpc);

    if(ganadorPC(AR1)&&ganadorU(AR1)){
        printf("Empate");
    }

    printf("\n\nGracias por jugar!\n");
    system("pause");
    system("cls");

    return 0;
}
