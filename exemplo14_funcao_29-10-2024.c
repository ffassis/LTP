#include <stdio.h>

int mudaValor(int a);

int main(){

    int a=10;

    printf("%d", mudaValor(a));
    //a função não altera o valor da variável a
    printf("\n%d", a);

    return 0;
}

int mudaValor(int a){
    return a*a;
}
