#include <stdio.h>
int calcula_quadrado(int num);

int main(){
    int n1;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    int quad = calcula_quadrado(n1);
    printf("O n�mero %d ao quadrado: %d\n", n1, quad);
    return 0;
}

int calcula_quadrado(int num) {
    return num * num;
}
