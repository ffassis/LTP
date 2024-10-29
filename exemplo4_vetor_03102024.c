#include <stdio.h>
//armazenar e imprimir os valores 0 1 2 3 4

int main(){
    int tamanho = 5;
    int i, vetor[tamanho];

    vetor[0] = 0;
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 3;
    vetor[4] = 4;

    //imprimindo o vetor
    printf("%d ", vetor[0]);
    printf("%d ", vetor[1]);
    printf("%d ", vetor[2]);
    printf("%d ", vetor[3]);
    printf("%d ", vetor[4]);

    return 0;
}
