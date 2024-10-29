#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, tam1=3, tam2=5, tam3=10;
    int vetor1[tam1], vetor2[tam2], vetor3[tam3];

    //preencher o vetor 1
    printf("\tVetor 1\n");
    for(i=0; i<tam1; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    //preencher o vetor 2
    printf("\n\tVetor 2\n");
    for(i=0; i<tam2; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    //preencher o vetor 3
    printf("\n\tVetor 3\n");
    for(i=0; i<tam3; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor3[i]);
    }
    //imprimir o vetor 1
    printf("\n\tVetor 1\n");
    for(i=0; i<tam1; i++){
        printf("%dº valor: %d\n", i+1, vetor1[i]);
    }
    //imprimir o vetor 2
    printf("\n\tVetor 2\n");
    for(i=0; i<tam2; i++){
        printf("%dº valor: %d\n", i+1, vetor2[i]);
    }
    //imprimir o vetor 3
    printf("\n\tVetor 3\n");
    for(i=0; i<tam3; i++){
        printf("%dº valor: %d\n", i+1, vetor3[i]);
    }

    return 0;
}
