#include <stdio.h>
int main(){

    int numero;
    printf("Adivinhe o número (dica: é 42): ");
    scanf("%d", &numero);

    while (numero != 42){
        printf("Errado! Tente novamente: ");
        scanf("%d", &numero);
    }
    printf("Parabéns, você acertou!\n");



return 0;
}
