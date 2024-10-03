#include <stdio.h>
#include <math.h>
//armazenar e imprimir o valor de i ao cubo

int main(){
    int tamanho = 10;
    int i, vetor[tamanho];

    for(i=0; i<tamanho; i++){
        vetor[i] = pow(i, 3);
        //vetor[i] = i*i*i;
    }
    //imprimindo o vetor
    for(i=0; i<tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
