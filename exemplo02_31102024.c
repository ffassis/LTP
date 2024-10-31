#include <stdio.h>

int main(){
    int i, j, mat[3][4];
    //i indica linha, j indica coluna

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            if(i == j)
                mat[i][j] = 2;
            else
                mat[i][j] = 0;
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
printf("Valor de i: %d e de J: %d", i, j);
    return 0;

}
