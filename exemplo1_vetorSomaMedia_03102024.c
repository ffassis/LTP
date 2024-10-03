#include <stdio.h>

int main(){
    int idade[10];
    int i, soma=0;

    for(i = 0; i < 10; i++){
        scanf("%d", &idade[i]);
        soma = soma + idade[i]; //soma += idade[i];
    }
    printf("\n----------\nSoma = %d\n----------\n", soma);

    double media = soma / 10.0;

    printf("\n----------\nMédia = %.2lf\n----------\n", media);

    int qtd_acima_media = 0;

    for(i = 0; i < 10; i++){
        if(idade[i] > media)
            qtd_acima_media++;
    }
    printf("Ha %d pessoa(s) acima da media.", qtd_acima_media);

    return 0;
}
