#include <stdio.h>

int main(){
    float valorProduto, valorComDesconto;
    printf("Valor do Produto: ");
    scanf("%f", &valorProduto);

    if(valorProduto >= 5000){
        printf("------------------------------------------\n");
        printf("Produto com desconto de 20%%");
        valorComDesconto = (valorProduto*80)/100;
        printf("\nValor do Produto com desconto: %.2f\n", valorComDesconto);
    }
    else if(valorProduto >= 1000){
        printf("------------------------------------------\n");
        valorComDesconto = (valorProduto*90)/100;
        printf("Produto com desconto de 10%%");
        printf("\nValor do Produto com desconto: %.2f\n", valorComDesconto);
    }
    else{
        printf("------------------------------------------\n");
        printf("Produto com desconto de 5%%");
        valorComDesconto = (valorProduto*95)/100;
        printf("\nValor do Produto com desconto: %.2f\n", valorComDesconto);
    }
    system("pause");
    return 0;
}
