//Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
#include <stdio.h>

int main() {
    int valores[6];

    // Lendo 6 valores
    for(int i = 0; i < 6; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    // Imprimindo os valores
    printf("Valores lidos:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

