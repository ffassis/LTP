#include <stdio.h>
int main(){

    int numero;
    printf("Adivinhe o n�mero (dica: � 42): ");
    scanf("%d", &numero);

    while (numero != 42){
        printf("Errado! Tente novamente: ");
        scanf("%d", &numero);
    }
    printf("Parab�ns, voc� acertou!\n");



return 0;
}
