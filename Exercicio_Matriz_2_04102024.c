/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>

int main() {
    int matriz[5][5];

    // Preenchendo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;  // Preenchendo a diagonal principal com 1
            } else {
                matriz[i][j] = 0;  // Preenchendo o restante com 0
            }
        }
    }

    // Imprimindo a matriz
    printf("Matriz 5x5 com diagonal principal 1 e demais elementos 0:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
