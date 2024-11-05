#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, mat[3][3], soma=0;

    //i indica linha, j indica coluna
    //preenchendo a matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    //imprimindo a matriz em ordem crescente
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma %d.\n", soma);
    return 0;
}
