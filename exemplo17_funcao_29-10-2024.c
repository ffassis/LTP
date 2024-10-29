#include <stdio.h>
#include <locale.h>

void preencheVetor(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, tam1=3, tam2=5, tam3=10;
    int vetor1[tam1], vetor2[tam2], vetor3[tam3];

    preencheVetor(vetor1, tam1);
    preencheVetor(vetor2, tam2);
    preencheVetor(vetor3, tam3);

    imprimeVetor(vetor1, tam1);
    imprimeVetor(vetor2, tam2);
    imprimeVetor(vetor3, tam3);

    return 0;
}

    //função para preencher o vetor
    //preciso passar o nome do vetor e seu tamanho
void preencheVetor(int vetor[], int tam){
    int i;
    printf("\n\tVetor\n");
    for(i=0; i<tam; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

    //função para imprimir o vetor
void imprimeVetor(int vetor[], int tam){
    int i;
    printf("\n\tVetor \n");
    for(i=0; i<tam; i++){
        printf("%dº valor: %d\n", i+1, vetor[i]);
    }
}
