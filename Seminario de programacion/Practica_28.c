#include <stdio.h>
12 #include <stdlib.h>
13 #include <time.h>
14
15 int main(){
16 int a,b,i,c;
17 srand(time(NULL));
18
19 printf("Ingrese el numero de filas: ");
20 scanf("%d",&a);
21
22 printf("Ingrese el numero de columnas: ");
23 scanf("%d",&b);
24 printf("\n");
25
26 int A1[a][b],suma=0,suma2=0,suma3=0;
27
28 printf("\tPosiciones de la matriz\n\n");
29 for(i=0;i<a;i++){
30 for(c=0;c<b;c++){
31 A1[i][c] = rand() % 100;
32 printf("Lo elementos de fila %d y de columna %d son: %d\n",i+1,c+1,A1[i][c]);
33 suma += A1[i][c];
34 }
35 }
36 printf("\n");
37 printf("Matriz\n\n");
38 for(i=0;i<a;i++){
39 for(c=0;c<b;c++){
40 printf("%.2d",A1[i][c]);
41 printf(" ");
42 suma += A1[i][c];
43 }
44 printf("\n");
45 }
46 printf("\n");
47
48 printf("Suma de las filas\n\n");
49 for(i=0;i<a;i++){
50 suma2 = 0;
51 printf("La suma de la fila %d es: ",i+1);
52 for(c=0;c<b;c++){
53 suma2 += A1[i][c];
54 }
55 printf("%d\n",suma2);
56 }
57 printf("\n");
58
59 printf("Suma de las columnas\n\n");
60 for(c=0;c<b;c++){
61 suma3 = 0;
62 printf("La suma de la columna %d es: ",c+1);
63 for(i=0;i<a;i++){
64 suma3 += A1[i][c];
65 }
66 printf("%d\n",suma3);
67 }
68 printf("\n");
69
70 printf("Suma de todos los elementos\n\n");
71 printf("La suma de todos los elementos es: %d\n",suma);
72 return 0;
73 }
