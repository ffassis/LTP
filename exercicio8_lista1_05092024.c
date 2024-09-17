//exercício 7 da primeira lista
/* exemplo caso numero = 3
1
12
123
*/

#include <stdio.h>

int main(){ //linha == i, coluna == j
    int numero, linha=1, coluna=1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(linha = 1; linha <= numero; linha++){
        for(coluna = 1; coluna <= numero; coluna++){
            if(coluna <= linha){
                printf("%d ", coluna);
            }
        }
        coluna=1;
        printf("\n");
    }
//1, 2, 3, 4, 5 finaliza
//linha 1, coluna 1,2,3,4, (5 finaliza laço coluna)
//linha 2, coluna 1,2,3,4, (5 finaliza laço coluna)
//linha 3, coluna 1,2,3,4, (5 finaliza laço coluna)
//linha 4, coluna 1,2,3,4, (5 finaliza laço coluna)
//linha 5, finaliza
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

