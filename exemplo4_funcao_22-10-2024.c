#include <stdio.h>
//declaração da função ou
//protótipo da função ou
//assinatura da função
int produto(int x);

int main(){
    int b=10;

    printf("Valor do produto de %d = %d\n", b, produto(b));

    return 0;
}

int produto(int x){
    return x*x;
}
