#include <stdio.h>

int main(){
    int i, j, maior = 0, mat[3][4];
    //i indica linha, j indica coluna

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Digite um número: ");
            scanf("%d", &mat[i][j]);
        }
    }

    maior = mat[0][0];

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            if(mat[i][j] > maior)
                maior = mat[i][j];
        }
    }

    printf("Maior valor: %d ", maior);

    return 0;

}
