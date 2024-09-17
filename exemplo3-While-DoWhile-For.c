//variável de inicialização e de controle (int i=10;)
//variável de controle (condição) critério para sair (i >= 0)
//é necessário modificar a variável de controle para sair do laço

//exemplo imprimir de 10 até 0
#include <stdio.h>
int main(){
    int i=2;
    //vai executar pois i vale 2
    while(i >= 0){
        printf("%d\n", i);
        i--;
        printf("%d\n", i);
    }

    //printf("\nValor de i ao sair do laço: %d", i);

    //executa pelo menos uma vez
    do{
        printf("%d\n", i);
        i--;
        printf("%d\n", i);
    }while(i >= 0);

    printf("\n\nValor de i ao sair do laço: %d\n", i);
    /*
        //Não vai executar pois i vale -2
    for( ; i >= -2; ){
        printf("\nAntes de decrementar %d ", i);
        i--;
        printf("\nApós de decrementar %d ", i);
    }
*/
    return 0;
}
