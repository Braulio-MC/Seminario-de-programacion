/*Número: 24
Titulo de la práctica: Cantidad con letra
Nombre del alumno: Braulio Martínez Carrillo
Fecha: 25/03/19
Descripción de la práctica: Programa que al ingresar un valor con unidades de millar centenas decenas y unidades muestra el numero en letra
Datos de Entrada: Valores para unidades de millar centenas decenas y unidades
Datos de Salida: Numero en letra
Conclusiones y/o comentarios: Pense que seria muy dificil pero al final con un poco de logica encontre la manera de hacerlo*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,n2,n3,n4,SALIR;

    do{
    printf("       ---> Convertidor de cantidades con letra <---\n");
    printf("NOTA: La cantidad debe ser de 1 a 9,999\n\n");

    printf("Ingrese las unidades de millar\n");
    scanf("%d",&n);
    system("cls");

    printf("Ingrese las centenas\n");
    scanf("%d",&n2);
    system("cls");

    printf("Ingrese las decenas\n");
    scanf("%d",&n3);
    system("cls");

    printf("Ingrese las unidades\n");
    scanf("%d",&n4);
    system("cls");

    printf("Su numero es: %d,%d%d%d\n\n",n,n2,n3,n4);

    if(n==1){
        printf("Mil ");
        }else if(n==2){
            printf("Dos Mil ");
            }else if(n==3){
                printf("Tres mil ");
                }else if(n==4){
                    printf("Cuatro Mil ");
                    }else if(n==5){
                        printf("Cinco Mil ");
                        }else if(n==6){
                            printf("Seis Mil ");
                            }else if(n==7){
                                printf("Siete Mil ");
                                }else if(n==8){
                                    printf("Ocho Mil ");
                                    }else if(n==9){
                                        printf("Nueve Mil ");
                                        }
    if(n2==1){
        printf("cien ");
        }else if(n2==2){
            printf("Docientos ");
            }else if(n2==3){
                printf("Trescientos ");
                }else if(n2==4){
                    printf("Cuatrocientos ");
                    }else if(n2==5){
                        printf("Quinientos ");
                        }else if(n2==6){
                            printf("Seiscientos ");
                            }else if(n2==7){
                                printf("Setecientos ");
                                }else if(n2==8){
                                    printf("Ochocientos ");
                                    }else if(n2==9){
                                        printf("Novecientos ");
                                        }
    if(n3==1){
        printf("Diez y ");
        }else if(n3==2){
            printf("Veinti");
            }else if(n3==3){
                printf("Treinta y ");
                }else if(n3==4){
                    printf("Cuarenta y ");
                    }else if(n3==5){
                        printf("Cincuenta y ");
                        }else if(n3==6){
                            printf("Sesenta y ");
                            }else if(n3==7){
                                printf("Setenta y ");
                                }else if(n3==8){
                                    printf("Ochenta y ");
                                    }else if(n3==9){
                                        printf("Noventa y ");
                                        }
    if(n4==1){
        printf("Uno ");
        }else if(n4==2){
            printf("Dos ");
            }else if(n4==3){
                printf("Tres ");
                }else if(n4==4){
                    printf("Cuatro ");
                    }else if(n4==5){
                        printf("Cinco ");
                        }else if(n4==6){
                            printf("Seis ");
                            }else if(n4==7){
                                printf("Siete ");
                                }else if(n4==8){
                                    printf("Ocho ");
                                    }else if(n4==9){
                                        printf("Nueve ");
                                        }
    printf("\nDesea ingresar otro numero?:\n1. Si\n2. No\n");
    scanf("%d",&SALIR);
    system("cls");

    }while(SALIR == 1);
    printf("---> Gracias por usar el convertidor <---\n");
return 0;
}
