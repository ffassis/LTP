/*Leia uma matriz 5 x 5. Leia tamb´em um valor X. O programa dever ´a fazer uma busca
desse valor na matriz e, ao final, escrever a localizac¸ ˜ao (linha e coluna) ou uma mensagem
de “n ˜ao encontrado”.*/

#include <stdio.h>

int main() {
    int matriz[5][5], x, linha = -1, coluna = -1;

    // Lendo a matriz 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Lendo o valor X
    printf("Digite o valor X a ser buscado na matriz: ");
    scanf("%d", &x);

    // Buscando o valor X na matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                linha = i;
                coluna = j;
                break;
            }
        }
    }

    // Resultado
    if (linha != -1 && coluna != -1) {
        printf("Valor %d encontrado na posição [%d][%d]\n", x, linha, coluna);
    } else {
        printf("Valor %d não encontrado na matriz.\n", x);
    }

    return 0;
}
