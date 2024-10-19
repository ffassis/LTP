#include <stdio.h>
int calcula_quadrado(int num);

int main(){
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);

    int quad = calcula_quadrado(n1);
    printf("O número %d ao quadrado: %d\n", n1, quad);
    return 0;
}

int calcula_quadrado(int num) {
    return num * num;
}
