#include <stdio.h>
int main(){
    int linha=0, coluna=0;
    //linha = i, coluna = j
    for(linha=5; linha>=0;linha--){ //5, 4, 3, 2, 1, 0, -1 acaba
        for(coluna=5; coluna>=linha; coluna--){//
            printf("%d ", coluna); //
        }
        printf("\n");
    }
    for(linha=5; linha>=0;linha--){ //5, 4, 3, 2, 1, 0, -1 acaba
        for(coluna=5; coluna>=linha; coluna--){//
            printf("%d ", coluna); //
        }
        printf("\n");
    }

    return 0;
}
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
5 4 3 2 1 0
*/
