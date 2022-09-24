#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char pal [50];
    int x,y,i;
    x = pal[0];
    y = strlen(pal)+1;

    printf("Ingrese una frase para saber si es palindromo: ");
    gets(pal);

    for(x;x<=y;x++){
        for(y;y>=x;y--){
            if(pal[x] == ' '){
                x++;
            }else if(pal[y] == ' '){
                y--;
            }
        }
    }
    if(tolower(pal[x]) != tolower(pal[y])){
        printf("Su frase no es palindromo\n");
    }else{printf("Su frase si es palindromo\n");}
    return 0;
}
