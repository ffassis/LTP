//variável de inicialização e de controle (int i=10;)
//variável de controle (condição) critério para sair (i >= 0)
//é necessário modificar a variável de controle para sair do laço

//exemplo imprimir de 10 até 0
#include <stdio.h>
int main(){
    int i=2;
    //vai executar pois i vale 2
    while(i >= 0){
        printf("\nValor do i dentro do WHILE antes de decrementar %d ", i);
        i--;
        printf("\nValor do i dentro do WHILE APÓS decrementar %d ", i);
    }

    printf("\nValor de i ao sair do laço: %d", i);

    //executa pelo menos uma vez
    do{
        printf("\nValor do i dentro do (do While) antes de decrementar %d ", i);
        i--;
        printf("\nValor do i dentro do (do While) após decrementar %d ", i);
    }while(i >= 0);

    printf("\nValor de i ao sair do laço: %d", i);
        //Não vai executar pois i vale -2
    for( ; i >= -2; ){
        printf("\nValor do i dentro do FOR antes de decrementar %d ", i);
        i--;
        printf("\nValor do i dentro do FOR APÓS decrementar %d ", i);
    }

    return 0;
}
