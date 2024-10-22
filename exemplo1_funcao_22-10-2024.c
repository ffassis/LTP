#include <stdio.h>
void imprimir(void){
    printf("Hello World!\n\n");
}

int main(){
    printf("Antes da função!\n\n");

    imprimir();

    printf("Voltando ao main!\n");
    return 0;
}
