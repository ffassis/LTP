#include <stdio.h>

int main(){
    int codProduto, qtdeProduto;
    char nomeProduto[30];
    float valorProduto;

    printf("------------------------------------------\n");
    printf("\tCADASTRO DE PRODUTOS\n");
    printf("\tDigite os Dados dos Produtos\n");
    printf("------------------------------------------\n");
    printf("Código do Produto: ");
    scanf("%d", &codProduto);
    printf("Nome do Produto: ");
    scanf("%s", nomeProduto);
    printf("Quantidade do Produto: ");
    scanf("%d", &qtdeProduto);
    printf("Valor do Produto: ");
    scanf("%f", &valorProduto);
    printf("------------------------------------------\n");
    printf("\tLista dos Produtos\n");
    printf("Código do Produto: %d\n", codProduto);
    printf("Nome do Produto: %s\n", nomeProduto);
    printf("Quantidade do Produto: %d\n", qtdeProduto);
    printf("Valor do Produto: %.1f\n", valorProduto);
    printf("------------------------------------------\n");

    system("pause");
    return 0;
}
