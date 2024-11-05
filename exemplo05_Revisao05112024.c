#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, mat[3][3], soma=0;

    //i indica linha, j indica coluna
    printf("preenchendo a matriz\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nImprimindo a matriz em ordem decrescente\n");
    for(i=2; i>=0; i--){
        for(j=2; j>=0; j--){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //printf("\nSoma %d.\n", soma);
    return 0;
}
