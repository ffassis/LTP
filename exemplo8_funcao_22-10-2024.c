#include <stdio.h>
//declara��o da fun��o ou
//prot�tipo da fun��o ou
//assinatura da fun��o
int calculo(int x);

int main(){
    int b=10;

    printf("Valor do produto de %d = %d\n", b, calculo(b));

    return 0;
}

int calculo(int x){
    return 5+20*x;
}
