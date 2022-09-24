/*N�mero: 19
Titulo de la pr�ctica: Tabla pitagorica
Nombre del alumno: Braulio Mart�nez Carrillo
Fecha: 07/03/19
Descripci�n de la pr�ctica: Programa que imprime la tabla pitagorica
Datos de Entrada:
Datos de Salida: Tabla pitagorica
Conclusiones y/o comentarios: Buena practica me gusto usar el dise�o*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("  X|");
    for(int e = 1; e <= 10;e++){
        printf("%3d|", e);
    }
    printf("\n---+---------------------------------------|");
    printf("\n");
    for(int i = 1; i <= 10; i++){
        printf("%3d|",i);
        for(int j = 1; j <= 10; j++){
            printf("%3d|", i*j);
        }
        printf("\n");
    }
    printf("---+---------------------------------------|");

return 0;
}
