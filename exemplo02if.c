#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("N�mero Par!");
    else
        printf("N�mero �mpar!");

return 0;
}
