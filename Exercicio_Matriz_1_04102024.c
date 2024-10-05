//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>

int main() {
    int matriz[4][4];
    int count = 0;

    // Lendo a matriz 4x4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                count++;  // Contando valores maiores que 10
            }
        }
    }

    // Resultado
    printf("Quantidade de valores maiores que 10: %d\n", count);

    return 0;
}
