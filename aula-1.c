#include <stdio.h>
int main(){
    int i = 1, soma = 0;

    while (i <= 5) {
        if (i % 2 == 0) {

            soma += i;
        }
        i++;
    }
    printf("Soma = %d", soma);

    return 0;
}
