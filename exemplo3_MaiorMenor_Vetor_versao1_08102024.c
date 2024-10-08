#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int Tam = 5;
    int v[Tam];
    int i=0, maior=0, menor=0;

    for(i=0; i<Tam; i++){
       printf("Digite o %dº valor do vetor: ", i+1);
       scanf("%d", &v[i]);

       if(i == 0){
            maior = menor = v[i];
       }
        if(v[i] > maior)
            maior = v[i];

        if(v[i] < menor)
            menor = v[i];
    }

    printf("\n-------------------------------");
    printf("\nMenor: %d", menor);
    printf("\nMaior: %d", maior);

    return 0;
}

