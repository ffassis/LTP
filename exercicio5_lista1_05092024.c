//exerc�cio 5 da primeira lista DIVISORES de um n�mero digitado pelo usu�rio

#include <stdio.h>

int main(){
    int numero, i=1;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);
/*
    while(i <= numero){
        if(numero%i == 0){
            printf("%d ", i);
        }
        i++;
    }
*/
    for(i=1; i <= numero; i++){
        if(numero%i == 0)
            printf("%d ", i);
    }

    return 0;
}
