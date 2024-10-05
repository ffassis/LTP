/*Fac¸a um programa que possua um vetor denominado A que armazene 6 n´umeros inteiros.
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma vari ´avel inteira (simples) a soma entre os valores das posic¸ ˜oes
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ ˜ao 4, atribuindo a esta posic¸ ˜ao o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    // Soma das posições A[0], A[1] e A[5]
    soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n", soma);

    // Modificando a posição 4 para 100
    A[4] = 100;

    // Imprimindo o vetor
    for(int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
