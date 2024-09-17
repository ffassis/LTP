#include <stdio.h>

int main(){
    float valorProduto;
    printf("Valor do Produto: ");
    scanf("%f", &valorProduto);

    if(valorProduto >= 5000){
        printf("------------------------------------------\n");
        printf("Produto com desconto de 20%%");
        printf("\nValor do Produto com desconto: %.2f\n", valorProduto*0.8);
    }
    else if(valorProduto >= 1000){
        printf("------------------------------------------\n");
        printf("Produto com desconto de 10%%");
        printf("\nValor do Produto com desconto: %.2f\n", valorProduto*0.9);
    }
    else{
        printf("------------------------------------------\n");
        printf("Produto com desconto de 5%%");
        printf("\nValor do Produto com desconto: %.2f\n", valorProduto*0.95);
    }

    return 0;
}
