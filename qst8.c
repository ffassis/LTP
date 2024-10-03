//Programa - while
#include <stdio.h>
int main(){
int i = 1, soma =0;
    while (i < 5){
        printf("%d\n",i);
        soma = soma + i;
        i=i+i;

    }

    printf("Soma = %d\n",soma);

    return 0;
}
