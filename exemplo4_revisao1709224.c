#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero1, numero2;
    printf("Digite dois n�meros: ");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 == numero2){
        printf("N�meros iguais!");
    }
    else if(numero1 > numero2)
        printf("N�mero 1 � maior!");

    else
        printf("N�mero 2 � maior");

    //system("pause");
    return 0;
}

