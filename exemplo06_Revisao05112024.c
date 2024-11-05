#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, mat[3][3], soma=0;

    //i indica linha, j indica coluna
    printf("preenchendo a matriz\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }

    printf("\nSoma de toda a matriz: %d.\n", soma);
    return 0;
}
