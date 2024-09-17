#include <stdio.h>
int main() {
    int soma = 0;
    int i;

    for (i = 1; i <= 7; i++) {

         //(6/2= resto 0?)
        if(i%2==0){
            //soma =  12
            soma = soma + i;

        }
    }

    printf("A soma dos números pares de 1 a 5 é: %d\n", soma);
    return 0;
}
