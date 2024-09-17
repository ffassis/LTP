#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero1, numero2;
    printf("Digite dois números: ");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 == numero2){
        printf("Números iguais!");
    }
    else if(numero1 > numero2)
        printf("Número 1 é maior!");

    else
        printf("Número 2 é maior");

    //system("pause");
    return 0;
}

