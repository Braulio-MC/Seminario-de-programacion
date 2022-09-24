/*Número: 20
Titulo de la práctica: Fibonacci
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 10/03/19
Descripción de la práctica: Porgrama que muestra los elementos que desee el usuario en serie de Fibonacci
Datos de Entrada: N. de elementos
Datos de Salida: Serie de Fibonacci
Conclusiones y/o comentarios: Programa que me resulto entretenido*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c,num,cont,SALIR;

  do{
      system("cls");
      a=0;
      b=1;

      printf("Cuantos elementos deseas visualizar en la serie? \n");
      scanf("%d",&num);

      for (cont=1;cont<=num;cont=cont+1)
      {
          c = a+b;
          printf("%3d| ",c);
          a = b;
          b = c;
      }printf("\n");
      system("pause");
  }while(SALIR != 1);
return 0;
}
