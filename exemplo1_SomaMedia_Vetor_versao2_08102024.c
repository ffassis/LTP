#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int Tam = 2;
    int v[Tam];
    int i=0;
    float soma=0, media = 0;

    for(i=0; i<Tam; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &v[i]);
        soma = soma + v[i];
    }

    printf("\n-------------------------------");

    printf("\nSoma: %.0f", soma);

    media = soma/Tam;

    printf("\nMédia: %.2f", media);

    return 0;
}

