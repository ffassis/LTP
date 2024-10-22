#include <stdio.h>
//declaração da função ou
//protótipo da função ou
//assinatura da função
int calculo(int x);

int main(){
    int b=10;

    printf("Valor do produto de %d = %d\n", b, calculo(b));

    return 0;
}

int calculo(int x){
    return 5+20*x;
}
