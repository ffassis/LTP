#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, div, resto;
    float divF;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    div = n/2; //recebe o resultado da divis�o
    resto = n%2; // recebe o resto da divis�o
    divF = n/2.0;

    printf("Divis�o = %d", div);
    printf("\nResto = %d", resto);
    printf("\nDivis�o Real = %.1f", divF);

    if(n%2 == 0)
        printf("\nN�mero Par!");
    else
        printf("\nN�mero �mpar!");

return 0;
}
