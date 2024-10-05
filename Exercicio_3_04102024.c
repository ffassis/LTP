/*Ler um conjunto de n´umeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos t ˆem
10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main() {
    float vetor[10], quadrado[10];

    // Lendo 10 números reais
    for(int i = 0; i < 10; i++) {
        printf("Digite um número real: ");
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i]; // Calculando o quadrado
    }

    // Imprimindo os dois vetores
    printf("Vetor original e seus quadrados:\n");
    for(int i = 0; i < 10; i++) {
        printf("Vetor[%d] = %.2f, Quadrado[%d] = %.2f\n", i, vetor[i], i, quadrado[i]);
    }

    return 0;
}

