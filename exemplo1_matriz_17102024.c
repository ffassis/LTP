#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //i ou lin representa linha
    //j ou col representa coluna
    int lin=0, col=0, maiorValor=0, posicao[1][1];;
    int mat[2][3];

    for(lin=0; lin<2; lin++){
        for(col=0; col<3; col++){
            printf("Digite o valor da posição %d %d: ", lin, col);
            scanf("%d", &mat[lin][col]);

        if(lin == 0 && col == 0)
            maiorValor = mat[lin][col];
        else if(mat[lin][col] > maiorValor){
            maiorValor = mat[lin][col];
        }
        }
    }

    for(lin=0; lin<2; lin++){
        for(col=0; col<3; col++){
            //printf("Valor da posição %d %d: ", lin, col);
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }

    printf("\nMaior: %d", maiorValor);

    return 0;
}
