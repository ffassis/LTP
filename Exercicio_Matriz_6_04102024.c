/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posic¸ ˜ao
das matrizes lidas.*/

#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];

    // Lendo a primeira matriz 4x4
    printf("Digite os valores da primeira matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Lendo a segunda matriz 4x4
    printf("Digite os valores da segunda matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Gerando a terceira matriz com os maiores valores de cada posição
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    // Imprimindo a terceira matriz
    printf("Matriz resultante com os maiores valores de cada posição:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
