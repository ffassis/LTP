#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("Número Par!");
    else
        printf("Número Ímpar!");

return 0;
}
