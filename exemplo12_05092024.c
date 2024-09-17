//exercício 7 da primeira lista

#include <stdio.h>

int main(){ //linha == i, coluna == j
    int numero, i=0;

    do{
        printf("Digite o nome do produto: \n");
        printf("Digite o preço do produto: \n");

        printf("\nDigite 0 para sair \nDigite 1 para cadastrar novo produto:\n");
        scanf("%d", &i);

    }while(i);

    return 0;
}


