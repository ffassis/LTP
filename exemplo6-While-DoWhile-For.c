//variável de inicialização e de controle (int i=10;)
//variável de controle (condição) critério para sair (i >= 0)
//é necessário modificar a variável de controle para sair do laço

//exemplo imprimir de 10 até 0
#include <stdio.h>
int main(){
    int i=2;

    //vai rodar até (i > 0) e imprimir o valor de i negativo
    //pode dar um erro quando o valor de i for muito pequeno
    while(i){
        printf("%d\n", i);
        i--;
        //printf("%d\n", i);
    }

    //Não vai rodar
    i=2;
    while(i){
        printf("%d\n", i);
        i--;
        //printf("%d\n", i);
    }
/*
    for( ; 1; ){
        printf("%d\n", i);
        i++;
        //printf("%d\n", i);
    }
*/
    return 0;
}
