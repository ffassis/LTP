#include <stdio.h>

int main(){
    int i, j, jogador = 4, partidas = 5;
    //jogador indica as linhas, ou seja, quantidade de jogadores
    //partidas indica as colunas, ou seja, quantidade de partidas por jogador
    int pontos[jogador][partidas];

    for(i=0; i<jogador; i++){ //i indica linhas
        for(j=0; j<partidas; j++){ //j indica colunas
            pontos[i][j] = (i+1)*j; //preenchendo a matriz
        }
    }

    for(i=0; i<jogador; i++){ //i indica linhas
        for(j=0; j<partidas; j++){ //j indica colunas
            printf("%2d ", pontos[i][j]); //imprimindo a matriz
        }
        printf("\n");
    }

    return 0;
}


