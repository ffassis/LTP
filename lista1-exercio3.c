#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int senha, senhaCadastrada = 123;

    printf("Sistema Banc�rio:\n\n");
    printf("Digite sua senha para acessar o sistema: ");
    scanf("%d", &senha);

    if(senha == senhaCadastrada)
        printf("Senha est� correta! Acesso Permitido!\n");
    else
        printf("Senha est� inccorreta! Acesso Negado!\n");

 /*   ou
    if(n != senhaCadastrada)
        printf("Senha est� inccorreta! Acesso Negado!\n");

    else
        printf("Senha est� correta! Acesso Permitido!\n");

    */

    return 0;
}
