#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
//Prototipos
void gotoxy (int x, int y);
void decimalRomano(int);
void dibujarConversor();
int romanoDecimal(char [50+1]);
int decimalBinario(int);
int binarioDecimal(int);
//int binarioHexadecimal(char [50+1]);
unsigned long convertidor (unsigned long, int, int);

void gotoxy (int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
int romanoDecimal(char romano[]){
    int resultado=0,valor;
    for(int i=0;i<strlen(romano);i++){
        switch(romano[i]){
            case 'I': valor = 1; break;
            case 'V': valor = 5; break;
            case 'X': valor = 10; break;
            case 'L': valor = 50; break;
            case 'C': valor = 100; break;
            case 'D': valor = 500; break;
            case 'M': valor = 1000; break;
        }
        resultado += valor;
    }
    return resultado;
}
void decimalRomano(int nD){
    int unidades = nD % 10; nD /= 10;
    int decenas = nD % 10; nD /= 10;
    int centenas = nD % 10; nD /= 10;
    int millares = nD % 10; nD /= 10;
    switch(millares){
        case 1:{ printf("M");
        }break;
    }
    switch(centenas){
        case 1:{ printf("C");
        }break;
        case 2:{ printf("CC");
        }break;
        case 3:{ printf("CCC");
        }break;
        case 4:{ printf("CD");
        }break;
        case 5:{ printf("D");
        }break;
        case 6:{ printf("DC");
        }break;
        case 7:{ printf("DCC");
        }break;
        case 8:{ printf("DCCC");
        }break;
        case 9:{ printf("CM");
        }break;
    }
    switch(decenas){
        case 1:{ printf("X");
        }break;
        case 2:{ printf("XX");
        }break;
        case 3:{ printf("XXX");
        }break;
        case 4:{ printf("XL");
        }break;
        case 5:{ printf("L");
        }break;
        case 6:{ printf("LX");
        }break;
        case 7:{ printf("LXX");
        }break;
        case 8:{ printf("LXXX");
        }break;
        case 9:{ printf("XC");
        }break;
    }
    switch(unidades){
        case 1:{ printf("I");
        }break;
        case 2:{ printf("II");
        }break;
        case 3:{ printf("III");
        }break;
        case 4:{ printf("IV");
        }break;
        case 5:{ printf("V");
        }break;
        case 6:{ printf("VI");
        }break;
        case 7:{ printf("VII");
        }break;
        case 8:{ printf("VIII");
        }break;
        case 9:{ printf("IX");
        }break;
    }
}
int decimalBinario(int nD){
    int coeficiente = 1,n=0;
    while(nD != 0){
        n += coeficiente*(nD%2);
        coeficiente*=10;
        nD /= 2;
    }
    return n;
}
int binarioDecimal(int nB){
    int auxiliar=0,decimal=0,resto,contadorD=0;
    auxiliar = nB;
    while(auxiliar){
        contadorD++;
        auxiliar /= 10;
    }
    for(int i=0;i<contadorD;i++){
        resto = nB % 10;
        nB /= 10;
        decimal += resto*pow(2,i);
    }
    return decimal;
}
/*int binarioHexadecimal(char nBcadena[50+1]){
    int contadornB = 0;
    char bits4[4+1] = "";
    char cadenaHex = [50] = "";
    if (strlen(nBcadena) % 4 == 0){
        for(int i=0;i<strlen(nBcadena);i++){
            if(contadornB == 4){
                contadornB = 0;
                bits4 = "";
            }else{
                bits4 += nBcadena[i];
                contadornB++;

                if(strcmp(bits4, '0000') == 0){
                    cadenaHex += "0";
                }else if(strcmp(bits4, "0001") == 0){
                    cadenaHex += "1";
                }else if(strcmp(bits4, "0010") == 0){
                    cadenaHex += "2";
                }else if(strcmp(bits4, "0011") == 0){
                    cadenaHex += "3";
                }else if(strcmp(bits4, "0100") == 0){
                    cadenaHex += "4";
                }else if(strcmp(bits4, "0101") == 0){
                    cadenaHex += "5";
                }else if(strcmp(bits4, "0110") == 0){
                    cadenaHex += "6";
                }else if(strcmp(bits4, "0111") == 0){
                    cadenaHex += "7";
                }else if(strcmp(bits4, "1000") == 0){
                    cadenaHex += "8";
                }else if(strcmp(bits4, "1001") == 0){
                    cadenaHex += "9";
                }else if(strcmp(bits4, "1010") == 0){
                    cadenaHex += "A";
                }else if(strcmp(bits4, "1011") == 0){
                    cadenaHex += "B";
                }else if(strcmp(bits4, "1100") == 0){
                    cadenaHex += "C";
                }else if(strcmp(bits4, "1101") == 0){
                    cadenaHex += "D";
                }else if(strcmp(bits4, "1110") == 0){
                    cadenaHex += "E";
                }else if(strcmp(bits4, "1111") == 0){
                    cadenaHex += "F";
        }
        //sale la variable cadenaHex con el numero convertido
    }else{
        int falta = nBcadena % 4; //saber cuantos ceros faltan
        char nBcadenaNueva[strlen(nBcadena)+falta] = "";

        for(int i = 0; i < falta; i++){
            nBcadenaNueva += "0";
        }
    }
}*/
unsigned long convertidor (unsigned long n1,int base1,int base2) {
    unsigned long alg,mult=1,n2=0;
    while (n1 > 0){
        alg = n1 % base1;
        n1 /= base1;
        n2 += (alg*mult);
        mult *= base2;
    }
    return n2;
}
void dibujarConversor(){
gotoxy(10,1); printf("------------------------------------------------------------------------------------");
    gotoxy(10,2); printf("|               ---> Menu de conversiones de sistemas numericos <--- \n\n");
    for(int i=1;i<25;i++){
        gotoxy(10,i); printf("|\n");
        gotoxy(94,i); printf("|\n");
        gotoxy(10,25); printf("|-----------------------------------------------------------------------------------|");
    }
}
int main(){
    int opcion,i,salir;

    do{
        system("cls");
        dibujarConversor();

        gotoxy(15,4); printf("1. Romano - Decimal\n");
        gotoxy(15,5); printf("2. Decimal\n");
        gotoxy(15,6); printf("3. Binario\n");
        gotoxy(15,7); printf("4. Hexadecimal\n");
        gotoxy(15,8); printf("5. Salir\n");
        gotoxy(15,9); printf("Opcion: ");
        gotoxy(22,9); scanf("%i",&opcion);
        if(opcion == 5){
            system("cls");
            dibujarConversor();
            gotoxy(15,4); printf("Gracias por usar el convertidor");
            gotoxy(10,27); return 0;
        }
        system("cls");

        switch(opcion){
            case 1:{
                char romano[50+1];
                dibujarConversor();
                gotoxy(15,8); printf("Ingrese el numero romano a convertir (Mayusculas): ");
                gotoxy(65,8); scanf("%s",romano);
                gotoxy(54,9); printf("Conversion:%i",romanoDecimal(romano));
            }break;
            case 2:{
                int decimal,nD;
                dibujarConversor();
                gotoxy(15,4); printf("1. Romano\n");
                gotoxy(15,5); printf("2. Binario\n");
                gotoxy(15,6); printf("3. Hexadecimal\n");
                gotoxy(15,7); printf("Opcion: ");
                gotoxy(22,7); scanf("%i",&decimal);
                switch(decimal){
                    case 1:{
                        gotoxy(15,8); printf("Numero a convertir(entero, positivo y debajo de los millares): ");
                        gotoxy(77,8); scanf("%i",&nD);
                        gotoxy(66,9); printf("conversion:"); decimalRomano(nD);
                    }break;
                    case 2:{
                        gotoxy(15,8); printf("Numero a convertir(entero y positivo): ");
                        gotoxy(53,8); scanf("%i",&nD);
                        gotoxy(42,9); printf("conversion:%i",decimalBinario(nD));
                    }break;
                    case 3:{
                        gotoxy(15,8); printf("Numero a convertir(entero y positivo): ");
                        gotoxy(53,8); scanf("%i",&nD);
                        gotoxy(42,9); printf("conversion:%X",nD);
                    }break;
                }
            }break;
            case 3:{
                int binario,nB;
                dibujarConversor();
                gotoxy(15,4); printf("1. Decimal\n");
                gotoxy(15,5); printf("2. Hexadecimal\n");
                gotoxy(15,6); printf("3. Suma de binarios\n");
                gotoxy(15,7); printf("Opcion: ");
                gotoxy(22,7); scanf("%i",&binario);
                switch(binario){
                    case 1:{
                        gotoxy(15,7); printf("Numero a convertir(Binario): ");
                        gotoxy(43,7); scanf("%i",&nB);
                        gotoxy(32,8); printf("conversion:%i",binarioDecimal(nB));
                    }break;
                    case 2:{
                        /*char nBcadena[50+1];
                        gotoxy(15,7); printf("Numero a convertir(Binario): ");
                        gotoxy(43,7); gets(nBcadena);
                        gotoxy(32,8); printf("conversion:%s",binarioHexadecimal(nBcadena));*/
                    }break;
                    case 3:{

                    }
                }
            }break;
            case 4:{
                int hexadecimal,nH;
                dibujarConversor();
                gotoxy(15,4); printf("1. Decimal\n");
                gotoxy(15,5); printf("2. Binario\n");
                gotoxy(15,6); printf("Opcion: ");
                gotoxy(22,6); scanf("%i",&hexadecimal);
                switch(hexadecimal){
                    case 1:{
                        gotoxy(15,7); printf("Introduza el numero Hexadecimal a Convertir:");
                        gotoxy(59,7); scanf("%lx",&nH);
                        gotoxy(48,8); printf("conversion:%1u",nH);
                    }break;
                    case 2:{
                        gotoxy(15,7); printf("Introduza el numero Hexadecimal a Convertir:");
                        gotoxy(59,7); scanf("%lx",&nH);
                        gotoxy(48,8); printf("conversion:%1u",convertidor(nH,2,10));
                    }break;
                }
            }
        }
        gotoxy(15,12); printf("Convertir otro numero?");
        gotoxy(15,13); printf("1. Si");
        gotoxy(15,14); printf("2. No");
        gotoxy(15,15); scanf("%i",&salir);

    }while(salir != 2);
    gotoxy(10,27); return 0;
}
