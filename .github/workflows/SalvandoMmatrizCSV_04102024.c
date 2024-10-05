#include<stdio.h>

int main(void) {
    int mat[3][3];
    int i, j;
    FILE *arquivo;

    // Preenchendo a Matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o numero: ");
            scanf(" %d", &mat[i][j]);
        }
    }

    // Abrindo o arquivo para escrita (modo "w" = write)
    arquivo = fopen("matriz.csv", "w");
    // Verificando se já existem valores no arquivo
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Salvando a Matriz no arquivo CSV
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            fprintf(arquivo, "%d", mat[i][j]); // Escrevendo valor no arquivo
            if (j < 2) {
                fprintf(arquivo, ","); // Adicionando vírgula entre os valores
            }
        }
        fprintf(arquivo, "\n"); // Nova linha após cada linha da matriz
    }

    // Fechando o arquivo
    fclose(arquivo);

    printf("Matriz salva em 'matriz.csv'.\n");

    return 0;
}
