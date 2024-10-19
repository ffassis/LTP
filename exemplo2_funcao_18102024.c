#include <stdio.h>
#include <locale.h>
int maiorTresNumeros(int num1, int num2, int num3);

int main(){
    setlocale(LC_ALL, "portuguese");

    int num1, num2, num3;

    printf("Digite 3 números:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("O maior é: %d", maiorTresNumeros(num1, num2, num3));

    return 0;
}

int maiorTresNumeros(int num1, int num2, int num3){
    int maior = num1;

    if(num2>maior)
        maior = num2;
    if(num3>maior)
        maior = num3;

    return maior;
}
