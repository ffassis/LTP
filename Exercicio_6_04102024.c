/*Fac¸a um programa que receba do usu´ ario um vetor com 10 posic¸ ˜oes. Em seguida dever ´a
ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>

int main() {
    int vetor[10], maior, menor;

    // Lendo os valores
    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0]; // Inicializando maior e menor

    // Encontrando o maior e o menor
    for(int i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
