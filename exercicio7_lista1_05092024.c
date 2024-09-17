//exercício 7 da primeira lista

#include <stdio.h>

int main(){ //linha == i, coluna == j
    int numero, linha=1, coluna=1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(linha = 1; linha <= numero; linha++){
        for(coluna = 1; coluna <= numero; coluna++){
            if(coluna <= linha){
                printf("%d ", linha);
            }
        }
        coluna=1;
        printf("\n");
    }

/*
    while(linha <= numero){
        while(coluna <= numero){
            if(coluna <= linha){
                printf("%d ", linha);
            }
            coluna++;
        }
        coluna=1;
        printf("\n");

        linha++;
    }
*/
    return 0;
}

