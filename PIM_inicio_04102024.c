#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 // Limite máximo de produtos

// Estrutura para armazenar informações do produto
typedef struct {
    int id;
    char nome[50];
    float preco_compra;
    float preco_venda;
} Produto;

// Função para comparar nomes dos produtos (usada para ordenar)
int compara_nome(const void *a, const void *b) {
    Produto *prodA = (Produto *)a;
    Produto *prodB = (Produto *)b;
    return strcmp(prodA->nome, prodB->nome);
}

// Função para salvar os produtos em arquivo CSV
void salvar_arquivo(Produto produtos[], int quantidade) {
    FILE *arquivo = fopen("produtos.csv", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Cabeçalho do arquivo
    fprintf(arquivo, "ID,Nome,Preco de Compra,Preco de Venda\n");

    // Salvando os produtos
    for (int i = 0; i < quantidade; i++) {
        fprintf(arquivo, "%d,%s,%.2f,%.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preco_compra, produtos[i].preco_venda);
    }

    fclose(arquivo);
    printf("Dados salvos com sucesso no arquivo produtos.csv!\n");
}

// Função para exibir uma "interface de sistema" simulada
void exibir_layout() {
    system("clear || cls"); // Limpa a tela (funciona no Windows e Unix-like)
    printf("==============================================\n");
    printf("     SISTEMA DE CADASTRO DE PRODUTOS\n");
    printf("==============================================\n\n");
}

// Função principal
int main() {
    Produto produtos[MAX];
    int quantidade = 0, opcao;

    FILE *arquivo = fopen("produtos.csv", "r");

    // Verificando se já existem produtos no arquivo
    if (arquivo != NULL) {
        char linha[100];
        fgets(linha, sizeof(linha), arquivo); // Ignora a primeira linha (cabeçalho)

        while (fscanf(arquivo, "%d,%49[^,],%f,%f\n", &produtos[quantidade].id, produtos[quantidade].nome, &produtos[quantidade].preco_compra, &produtos[quantidade].preco_venda) == 4) {
            quantidade++;
        }
        fclose(arquivo);
    }

    do {
        exibir_layout(); // Exibe o layout do sistema

        // Menu de opções
        printf("1. Adicionar produto\n");
        printf("2. Sair\n");
        printf("----------------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            exibir_layout(); // Exibe o layout novamente antes de cadastrar o produto

            // Cadastro do produto
            Produto novo_produto;
            novo_produto.id = quantidade + 1;

            printf("Digite o nome do produto:\n> ");
            scanf(" %49[^\n]", novo_produto.nome);

            printf("Digite o preco de compra:\n> ");
            scanf("%f", &novo_produto.preco_compra);

            printf("Digite o preco de venda:\n> ");
            scanf("%f", &novo_produto.preco_venda);

            produtos[quantidade] = novo_produto;
            quantidade++;

            // Ordenando os produtos por nome
            qsort(produtos, quantidade, sizeof(Produto), compara_nome);

            // Salvando no arquivo
            salvar_arquivo(produtos, quantidade);

            printf("\nProduto cadastrado com sucesso!\n\n");
            system("pause"); // Pausa no Windows (ou use "read -p 'Pressione Enter...' var" em sistemas Unix-like)
        }

    } while (opcao != 2);

    printf("\nSaindo do sistema... Até mais!\n");
    return 0;
}
