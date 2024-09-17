//exercício 6 da primeira lista - tabuada de número
#include <stdio.h>

int main(){
    int numero, i=0, tabuada;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Exemplo com while()\n");
    while(i <= 10){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
        //printf("%d x %d = %d\n", numero, i, numero*i);

        i++;
    }

    printf("Exemplo com for()\n");
    for(i = 0; i <= 10; i++){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
        //printf("%d x %d = %d\n", numero, i, numero*i);
    }

    i=0;
    printf("Exemplo com (do while())\n");
    do{
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
        //printf("%d x %d = %d\n", numero, i, numero*i);

        i++;
    }while(i <= 10);

    return 0;
}
