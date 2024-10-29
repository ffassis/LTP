#include <stdio.h>
#include <locale.h>

void preencheVetor(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, tam=5;
    int vetor[tam];

    preencheVetor(vetor, tam);
    imprimeVetor(vetor, tam);

    return 0;
}

    //fun��o para preencher o vetor
    //preciso passar o nome do vetor e seu tamanho
void preencheVetor(int vetor[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Digite o %d� valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

    //fun��o para imprimir o vetor
void imprimeVetor(int vetor[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d� valor: %d\n", i+1, vetor[i]);
    }
}
