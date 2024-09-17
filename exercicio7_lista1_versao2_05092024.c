//exercício 7 da primeira lista

#include <stdio.h>

int main(){ //linha == i, coluna == j
    int numero, linha=1, coluna=1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while(linha <= numero){
        while(coluna <= numero){
            if(coluna <= linha){
                printf("%d ", coluna);
            }
            coluna++;
        }
        coluna=1;
        printf("\n");

        linha++;
    }

    return 0;
}


