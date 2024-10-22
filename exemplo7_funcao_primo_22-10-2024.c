#include <stdio.h>
//declaração da função ou
//protótipo da função ou
//assinatura da função
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
    printf("Digite um  número: ");
    scanf("%d", &numero);

    if(eh_primo(numero))
        printf("%d eh primo", numero);

    else
        printf("%d NAO eh primo", numero);

    return 0;
}





