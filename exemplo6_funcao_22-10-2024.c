#include <stdio.h>
//declara��o da fun��o ou
//prot�tipo da fun��o ou
//assinatura da fun��o
int produto(int x);

int main(){

    printf("Valor do produto de %d = %d\n", 10, produto(10));

    return 0;
}

int produto(int x){
    return x*x;
}
