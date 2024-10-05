#include <stdio.h>
int main(){
    int tamanho=5;

    int vetor[tamanho], i;

    for(i=0; i<tamanho; i++){
        vetor[i]=(i+1)*(i+1);
    }

    for(i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
