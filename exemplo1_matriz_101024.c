#include <stdio.h>

int main(){
    int i=0, j=0, c=0, linha=4, coluna=3;
    int matriz[linha][coluna];

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            //matriz[i][j] = c++;
            matriz[i][j] = ++c;
        }
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
