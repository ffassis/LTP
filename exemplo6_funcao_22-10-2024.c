#include <stdio.h>
//declaração da função ou
//protótipo da função ou
//assinatura da função
int produto(int x);

int main(){

    printf("Valor do produto de %d = %d\n", 10, produto(10));

    return 0;
}

int produto(int x){
    return x*x;
}
