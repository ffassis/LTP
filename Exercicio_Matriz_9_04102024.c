/*Faça um programa para gerar números automaticamente entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela deve conter 5 linhas de 5 números, geramos estes dados de modo a não ter números repetidos dentro das cartelas.
O programa deve exibir na tela a cartela gerada.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5];
    int numeros[100] = {0};

    // Inicializando gerador de números aleatórios
    srand(time(NULL));

    // Gerando os números sem repetição
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int numero;
            do {
                numero = rand() % 100;
            } while (numeros[numero] == 1);  // Verificando se o número já foi gerado

            numeros[numero] = 1;  // Marcando o número como usado
            cartela[i][j] = numero;
        }
    }

    // Imprimindo a cartela de bingo
    printf("Cartela de Bingo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%02d ", cartela[i][j]); //O número total de dígitos que o número deve ter. Se o número for menor que 2 dígitos,
                                            //ele será preenchido com zeros à esquerda.
        }
        printf("\n");
    }

    return 0;
}
