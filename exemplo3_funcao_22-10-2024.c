#include <stdio.h>
int produto(int x){
    return x*x;
}

int main(){
    int t, prod;

    printf("digite um valor: ");
    scanf("%d", &t);

    //prod = produto(t);
    //printf("\nValor do produto de %d = %d", t, prod);

    printf("\nValor do produto de %d = %d", t, produto(t));
    return 0;
}
