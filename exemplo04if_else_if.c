//Verifica se dois números são iguais, ou caso contrário qual é o maior
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2)
        printf("Os números são iguais!");
    else if(n1 > n2)
        printf("O número 1 é o maior!");
    else
        printf("O número 2 é o maior!");

return 0;
}
