#include <stdio.h>
//armazenar e imprimir os valores 1 2 3 4 5 6 7 8 9 10

int main(){
    int i, numeros[10];

    for(i=1; i<10; i++){
        numeros[i] = i+1;
    }

    for(i=0; i<10; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}
