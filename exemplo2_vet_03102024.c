#include <stdio.h>

int main(){
    int tamanho = 5;
    int i, cont = 0, soma=0, idade[tamanho];
    double media;

    for(i=0; i<tamanho; i++){
        printf("Digite a %dª idade: ", i+1);
        scanf("%d", &idade[i]);
        //idade[i] = i*i*i;

        soma = soma + idade[i];
    }

    printf("\n----------------------\n");
    printf("Soma = %d", soma);
    printf("\n----------------------\n");

    for(i=0; i<tamanho; i++){
        printf("%d ", idade[i]);
    }
    printf("\n----------------------\n");
return 0;

}
