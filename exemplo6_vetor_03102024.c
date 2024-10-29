#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, tam=5;
    int vetor[tam];

    //preencher o vetor
    for(i=0; i<tam; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    //imprimir o vetor
    for(i=0; i<tam; i++){
        printf("%dº valor: %d\n", i+1, vetor[i]);
    }

    return 0;
}
