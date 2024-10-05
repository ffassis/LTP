/*Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>

int main() {
    int matriz[4][4];

    // Preenchendo a matriz com o produto do valor da linha e da coluna
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = i * j;
        }
    }

    // Imprimindo a matriz
    printf("Matriz com o produto da linha e coluna:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
