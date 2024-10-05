/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ ˜ao (linha e a coluna) do
maior valor.*/

#include <stdio.h>

int main() {
    int matriz[4][4], maior, linha = 0, coluna = 0;

    // Lendo a matriz 4x4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Encontrando o maior valor e sua localização
            if (i == 0 && j == 0) {
                maior = matriz[i][j];  // Inicializando com o primeiro valor
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    // Imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultado
    printf("Maior valor: %d na posição [%d][%d]\n", maior, linha, coluna);

    return 0;
}
