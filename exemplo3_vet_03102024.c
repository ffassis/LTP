#include <stdio.h>

int main(){
    int i, cont = 0, soma=0, tamanho = 100000;
    double idade[tamanho];


    for(i=0; i<tamanho; i++){
        idade[i] = tamanho - i;

        soma = soma + idade[i];
    }

    printf("\n----------------------\n");
    //printf("Soma = %d", soma);
    printf("\n----------------------\n");

    for(i=0; i<tamanho; i++){
        printf("%lf\n", idade[i]);
    }
    printf("\n----------------------\n");
return 0;

}
