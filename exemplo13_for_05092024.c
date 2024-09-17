//exercício 7 da primeira lista

#include <stdio.h>

int main(){ //linha == i, coluna == j
    int numero, i=1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i=0; i<=numero; i++){
        printf("%d ", i);

    }

    return 0;
}


