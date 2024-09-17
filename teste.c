#include <stdio.h>
#include <string.h> // Inclua essa biblioteca para usar strcmp

int main() {
    char senha[6];  // Ajuste o tamanho para 6 para incluir o caractere nulo '\0'
    char senha_1[6]; // Ajuste o tamanho para 6 para incluir o caractere nulo '\0'

    printf("Digite uma senha de 5 dígitos: ");
    scanf("%5s", senha); // Usando %5s para ler até 5 caracteres, deixando espaço para o caractere nulo

    printf("Confirme: ");
    scanf("%5s", senha_1); // Usando %5s para ler até 5 caracteres, deixando espaço para o caractere nulo

    // Use strcmp para comparar as strings
    if (strcmp(senha, senha_1) == 0) {
        printf("Senha correta\n");
    } else {
        printf("Senhas não coincidem\n");
    }

    return 0;
}


