//vari�vel de inicializa��o e de controle (int i=10;)
//vari�vel de controle (condi��o) crit�rio para sair (i >= 0)
//� necess�rio modificar a vari�vel de controle para sair do la�o

//exemplo imprimir de 10 at� 0
#include <stdio.h>
int main(){
    int i=2;
    //vai executar pois i vale 2
    while(i >= 0){
        printf("%d\n", i);
        i--;
        printf("%d\n", i);
    }

    //printf("\nValor de i ao sair do la�o: %d", i);

    //executa pelo menos uma vez
    do{
        printf("%d\n", i);
        i--;
        printf("%d\n", i);
    }while(i >= 0);

    printf("\n\nValor de i ao sair do la�o: %d\n", i);
    /*
        //N�o vai executar pois i vale -2
    for( ; i >= -2; ){
        printf("\nAntes de decrementar %d ", i);
        i--;
        printf("\nAp�s de decrementar %d ", i);
    }
*/
    return 0;
}
