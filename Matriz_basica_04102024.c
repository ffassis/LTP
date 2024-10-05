#include<stdio.h>

int main(void){
    int mat[3][3];
    int i,j;

    //Preenchendo a Matriz
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            printf("Digite o numero: ");
            scanf(" %d",&mat[i][j]);
        }
    }

    //Imprimindo Matriz
    printf("Imprimindo Matriz...\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }

}
