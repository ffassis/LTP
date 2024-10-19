#include <stdio.h>

int main(){
    int i, j, jogador = 4, partidas = 5;
    //jogador indica as linhas, ou seja, quantidade de jogadores
    //partidas indica as colunas, ou seja, quantidade de partidas por jogador
    int pontos[jogador][partidas];

    for(i=0; i<jogador; i++){ //i indica linhas
        for(j=0; j<partidas; j++){ //j indica colunas
            if(i%2 == 0 && j%2 == 0) //verificando se i e j são pares
                pontos[i][j] = 2; //preenchendo a matriz com 2 quando i e j par
            else
                pontos[i][j] = 0; //preenchendo a matriz
        }
    }
    printf("|---|---|---|---|---|\n");
    for(i=0; i<jogador; i++){ //i indica linhas
        for(j=0; j<partidas; j++){ //j indica colunas
            if(j==0)
            printf("|");
            printf("%2d |", pontos[i][j]); //imprimindo a matriz
        }
        printf("\n");
        printf("|---|---|---|---|---|\n");
    }

    return 0;
}


