//Leia um vetor de 10 posic¸ ˜oes. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>

int main() {
    int vetor[10], pares = 0;

    // Lendo 10 valores
    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++; // Contando os pares
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}
