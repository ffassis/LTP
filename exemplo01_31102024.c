#include <stdio.h>

int main(){
    int i, j, mat[3][3];
    //i indica linha, j indica coluna

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(j <= i)
                mat[i][j] = j+1;
            else
                mat[i][j] = 0;
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<=i; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

   // printf("Valor de i: %d e de J: %d", i, j);

    return 0;

}
