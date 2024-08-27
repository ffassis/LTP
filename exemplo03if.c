#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, div, resto;
    float divF;

    printf("Digite um número: ");
    scanf("%d", &n);

    div = n/2; //recebe o resultado da divisão
    resto = n%2; // recebe o resto da divisão
    divF = n/2.0;

    printf("Divisão = %d", div);
    printf("\nResto = %d", resto);
    printf("\nDivisão Real = %.1f", divF);

    if(n%2 == 0)
        printf("\nNúmero Par!");
    else
        printf("\nNúmero ímpar!");

return 0;
}
