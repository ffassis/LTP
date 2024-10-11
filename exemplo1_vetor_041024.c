#include <stdio.h>

int main(){
    int i, tamanho=10;
    int vetor[tamanho];

    for(i=0; i<tamanho; i++)
        vetor[i] = i*2;

    for(i=0; i<tamanho; i++)
        printf("%d ", vetor[i]);

    return 0;
}
