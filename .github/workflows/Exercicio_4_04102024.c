/*Fac�a um programa que leia um vetor de 8 posic� �oes e, em seguida, leia tamb�em dois valores
X e Y quaisquer correspondentes a duas posic� �oes no vetor. Ao final seu programa
dever �a escrever a soma dos valores encontrados nas respectivas posic� �oes X e Y .*/

#include <stdio.h>

int main() {
    int vetor[8], x, y;

    // Lendo 8 valores
    for(int i = 0; i < 8; i++) {
        printf("Digite um valor para a posi��o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lendo os valores X e Y
    printf("Digite a posi��o X: ");
    scanf("%d", &x);
    printf("Digite a posi��o Y: ");
    scanf("%d", &y);

    // Somando os valores nas posi��es X e Y
    int soma = vetor[x] + vetor[y];
    printf("Soma dos valores nas posi��es %d e %d: %d\n", x, y, soma);

    return 0;
}
