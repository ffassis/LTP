#include <stdio.h>
int main(){
    int n1=5, n2=5;

    if(n1==n2) {//se verdadeiro
        printf("Valores iguais!");
        printf("\nValor de N1 e N2 = %d", n1);
    }
    else if(n1>n2)
        printf("N1 maior");

    else
        printf("N2 maior");

    return 0;
}
