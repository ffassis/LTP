//vari�vel de inicializa��o e de controle (int i=10;)
//vari�vel de controle (condi��o) crit�rio para sair (i >= 0)
//� necess�rio modificar a vari�vel de controle para sair do la�o

//exemplo imprimir de 10 at� 0
#include <stdio.h>
int main(){
    int i=2;
/*
    //vai rodar infinitamente e imprimir o valor de i negativo
    //pode dar um erro quando o valor de i for muito pequeno
    while(1){
        printf("%d\n", i);
        i--;
        //printf("%d\n", i);
    }
    */
    //vai rodar infinitamente e imprimir o valor de i positivo
    //pode dar um erro quando o valor de i for muito grande
    while(1){
        printf("%d\n", i);
        i++;
        //printf("%d\n", i);
    }

    return 0;
}
