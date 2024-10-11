//buscar um valor na matriz
#include <stdio.h>

int main(){
    int i=0, j=0, c=0, linha=4, coluna=3, numero=0, cont=0;
    int matriz[linha][coluna];

    printf("Digite o valor para buscar na matriz: ");
    scanf("%d", &numero);

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            //matriz[i][j] = c++;
            matriz[i][j] = i*j;
        }
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    //procurando o valor na matriz
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if(numero == matriz[i][j]){
                // printf("\nValor na posição linha: %d coluna: %d\n", i, j);
                printf("\nValor na posição linha: %d coluna: %d\n", i+1, j+1);
                cont++;
            }
        }
    }

    if(cont == 0)
        printf("\nValor não esta na matriz!\n");
    return 0;
}
