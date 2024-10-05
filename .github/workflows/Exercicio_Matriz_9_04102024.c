/*Fa�a um programa para gerar n�meros automaticamente entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela deve conter 5 linhas de 5 n�meros, geramos estes dados de modo a n�o ter n�meros repetidos dentro das cartelas.
O programa deve exibir na tela a cartela gerada.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5];
    int numeros[100] = {0};

    // Inicializando gerador de n�meros aleat�rios
    srand(time(NULL));

    // Gerando os n�meros sem repeti��o
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int numero;
            do {
                numero = rand() % 100;
            } while (numeros[numero] == 1);  // Verificando se o n�mero j� foi gerado

            numeros[numero] = 1;  // Marcando o n�mero como usado
            cartela[i][j] = numero;
        }
    }

    // Imprimindo a cartela de bingo
    printf("Cartela de Bingo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%02d ", cartela[i][j]); //O n�mero total de d�gitos que o n�mero deve ter. Se o n�mero for menor que 2 d�gitos,
                                            //ele ser� preenchido com zeros � esquerda.
        }
        printf("\n");
    }

    return 0;
}
