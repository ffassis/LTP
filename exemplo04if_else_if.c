//Verifica se dois n�meros s�o iguais, ou caso contr�rio qual � o maior
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Digite dois n�meros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2)
        printf("Os n�meros s�o iguais!");
    else if(n1 > n2)
        printf("O n�mero 1 � o maior!");
    else
        printf("O n�mero 2 � o maior!");

return 0;
}
