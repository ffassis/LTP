//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.

#include <stdio.h>

int main() {
    int matriz[3][3], soma = 0;

    // Lendo a matriz 3x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Somando os elementos acima da diagonal principal
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    // Resultado
    printf("Soma dos elementos acima da diagonal principal: %d\n", soma);

    return 0;
}
