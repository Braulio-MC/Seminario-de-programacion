#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <pthread.h>
//Prototipos
void gotoxy (int x, int y);
void dibujar();
void menu(int);

struct Acusado{
    char nombre[50+1];
    char situacion[50+1];
    char sexo[20+1];
    char nacionalidad[50+1];
    int edad;
    int estatura;

}acusadoR[10];

void gotoxy (int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
void dibujar(){
    srand(time(NULL));
    int reo1 = rand() % 10;
    int reo2 = rand() % 10;
    int reo3 = rand() % 10;
    int T1 = rand() % 3650;
    int T2 = rand() % 3650;
    int T3 = rand() % 3650;
    gotoxy(8,1); printf("--------------------------------------------------------------------------------------");
    gotoxy(8,2); printf("|                              PENAL DE PUENTE GRANDE  \n\n");
    gotoxy(8,3); printf("                               |Verificacion del reo|             ");
    gotoxy(9,4); printf("--------------------------------------------------------------------------------------");
    gotoxy(9,6); printf("--------------------------------------------------------------------------------------");
    for(int i=1;i<25;i++){
        gotoxy(8,i); printf("|\n");
        gotoxy(94,i); printf("|\n");
        gotoxy(8,25); printf("|-------------------------------------------------------------------------------------|");
        gotoxy(52,13); printf("------------------------------------------");
        gotoxy(52,15); printf("------------------------------------------");
        gotoxy(52,19); printf("------------------------------------------");
        gotoxy(52,21); printf("------------------------------------------");
    }
    for(int i=5;i<25;i++){
        gotoxy(51,i); printf("|\n");
    }
    while(T1&&T2&&T3>0){
        gotoxy(58,20); printf("3 reos cercanos a la libertad");
        gotoxy(52,22); printf("- Reo 1: %s   |Tiempo: %i",acusadoR[reo1].nombre,T1--);
        Sleep(1000);
        gotoxy(52,23); printf("- Reo 2: %s   |Tiempo: %i",acusadoR[reo2].nombre,T2--);
        Sleep(1000);
        gotoxy(52,24); printf("- Reo 3: %s   |Tiempo: %i",acusadoR[reo3].nombre,T3--);
        Sleep(1000);
    }
}
void opcionMenu(int menu){
    switch(menu){
        case 1:{
            int celda,confirmacion2,guardando2;
            gotoxy(9,7); printf("- Celda para el reo: ");
            gotoxy(29,7); scanf("%i",&celda);
            gotoxy(9,7); printf("                        ");
            gotoxy(9,5); printf("                Registro\n");
            gotoxy(9,7); printf("- Ingrese el nombre del reo:");
            gotoxy(9,8); gets(acusadoR[celda].nombre);
            gotoxy(9,9); printf("- Ingrese la situacion del reo:");
            gotoxy(9,10); gets(acusadoR[celda].situacion);
            gotoxy(9,11); printf("- Ingrese el sexo del reo:");
            gotoxy(9,12); gets(acusadoR[celda].sexo);
            gotoxy(9,13); printf("- Ingrese la nacionalidad del reo:");
            gotoxy(9,14); gets(acusadoR[celda].nacionalidad);
            gotoxy(9,15); printf("- Ingrese la edad del reo:");
            gotoxy(9,16); scanf("%i",&acusadoR[celda].edad);
            gotoxy(9,17); printf("- Ingrese la estatura del reo(CM):");
            gotoxy(9,18); scanf("%i",&acusadoR[celda].estatura);

            gotoxy(9,20); printf("- Los datos son correctos?");
            gotoxy(9,21); printf("1. Si");
            gotoxy(9,22); printf("2. No");
            gotoxy(9,24); printf("Opcion: ");
            gotoxy(16,24); scanf("%i",&confirmacion2);

            if(confirmacion2 == 1){
                while(guardando2 != 5){
                    gotoxy(36,24); printf("Guardando...");
                    guardando2++;
                    Sleep(500);
                break;}gotoxy(36,24); printf("            ");
            gotoxy(65,5); printf("Datos guardados");
            gotoxy(52,7); printf("- Nombre: %s",acusadoR[celda].nombre);
            gotoxy(52,8); printf("- Situacion: %s",acusadoR[celda].situacion);
            gotoxy(52,9); printf("- Sexo: %s",acusadoR[celda].sexo);
            gotoxy(52,10); printf("- Nacionalidad: %s",acusadoR[celda].nacionalidad);
            gotoxy(52,11); printf("- Edad: %i anios",acusadoR[celda].edad);
            gotoxy(52,12); printf("- Estatura: %i cm",acusadoR[celda].estatura);
            gotoxy(78,9); printf("- Celda: %i",celda);
            }
        break;}
        case 2:{

        }
    }
}
int main(){
    int confirmacion,guardando,menu;
    struct Acusado;
    dibujar();
    gotoxy(9,5); printf("                Registro\n");
    gotoxy(9,7); printf("- Ingrese el nombre del reo:");
    gotoxy(9,8); gets(acusadoR[0].nombre);
    gotoxy(9,9); printf("- Ingrese la situacion del reo:");
    gotoxy(9,10); gets(acusadoR[0].situacion);
    gotoxy(9,11); printf("- Ingrese el sexo del reo:");
    gotoxy(9,12); gets(acusadoR[0].sexo);
    gotoxy(9,13); printf("- Ingrese la nacionalidad del reo:");
    gotoxy(9,14); gets(acusadoR[0].nacionalidad);
    gotoxy(9,15); printf("- Ingrese la edad del reo:");
    gotoxy(9,16); scanf("%i",&acusadoR[0].edad);
    gotoxy(9,17); printf("- Ingrese la estatura del reo(CM):");
    gotoxy(9,18); scanf("%i",&acusadoR[0].estatura);

    gotoxy(9,20); printf("- Los datos son correctos?");
    gotoxy(9,21); printf("1. Si");
    gotoxy(9,22); printf("2. No");
    gotoxy(9,24); printf("Opcion: ");
    gotoxy(16,24); scanf("%i",&confirmacion);

    if(confirmacion == 1){
        while(guardando != 5){
            gotoxy(36,24); printf("Guardando...");
            guardando++;
            Sleep(500);
        break;}gotoxy(36,24); printf("            ");
        gotoxy(65,5); printf("Datos guardados");
        gotoxy(52,7); printf("- Nombre: %s",acusadoR[0].nombre);
        gotoxy(52,8); printf("- Situacion: %s",acusadoR[0].situacion);
        gotoxy(52,9); printf("- Sexo: %s",acusadoR[0].sexo);
        gotoxy(52,10); printf("- Nacionalidad: %s",acusadoR[0].nacionalidad);
        gotoxy(52,11); printf("- Edad: %i anios",acusadoR[0].edad);
        gotoxy(52,12); printf("- Estatura: %i cm",acusadoR[0].estatura);
        gotoxy(78,9); printf("- Celda: 0");
    }
    gotoxy(70,14); printf("Menu");
    gotoxy(52,16); printf("1. Registrar reo");
    gotoxy(52,17); printf("2. Lista de reos");
    gotoxy(52,18); printf("3. Itinerario de los reos");
    gotoxy(78,17); printf("Opcion: ");
    gotoxy(85,17); scanf("%i",&menu);
    system("cls");

    dibujar();
    opcionMenu(menu);

    gotoxy(8,27); return 0;
}
