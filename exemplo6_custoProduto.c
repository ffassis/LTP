#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float custo=0, precoVenda=0.0, margemLucro=1.3;

    printf("------------------------------------------\n");

    printf("Digite o preço de custo: ");
    scanf("%f", &custo);

    precoVenda = custo * margemLucro;

    printf("------------------------------------------");
    printf("\nValor de venda do produto: %.2f\n", precoVenda);
    printf("------------------------------------------");

    return 0;
}
