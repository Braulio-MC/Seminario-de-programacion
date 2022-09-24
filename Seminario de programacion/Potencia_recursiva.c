#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int p){
  if(p) return base*potencia(base,p-1);
}


int main(){
    printf("%i",potencia(2,3));

    return 0;
}
