#include <stdio.h>
//declara��o da fun��o ou
//prot�tipo da fun��o ou
//assinatura da fun��o
int produto(int x);

int eh_primo(int num){
int i;
    for(i = 2; i < num; i ++){
        if(num % i == 0)
            return 0;

    }
    return 1;

}

int main(){

    int numero;
    printf("Digite um  n�mero: ");
    scanf("%d", &numero);

    if(eh_primo(numero))
        printf("%d eh primo", numero);

    else
        printf("%d NAO eh primo", numero);

    return 0;
}





