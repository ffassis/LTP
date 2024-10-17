//criar um VETOR com 5 posições,
//e encontrar o MAIOR valor do vetor e sua POSIÇÃO
#include <stdio.h>
#include <locale.h>
int main(){ int i=0, maior=0, posicao=0, vet[5];
    setlocale(LC_ALL, "portuguese");

    for(i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);

        if(i>0){
            if(vet[i] > maior){
                maior = vet[i];
                posicao = i;
            }
        }
        else{
            maior = vet[i]; //ou maior = vet[0];
        }
        /*
        if(i==0)
            maior = vet[i]; //ou maior = vet[0];
        else if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }*/
    }

    printf("\nMaior: %d", maior);
    printf("\nPosição: %d", posicao+1);

    return 0;
}
