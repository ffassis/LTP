#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;

    printf("-----Lista de Produtos------\n");
    printf("C�digo - Produto \t Valor\n");
    printf("\n000001 - Tomate\t\t R$ 50,00");
    printf("\n000002 - Ma�a\t\t R$ 30,00");
    printf("\n000003 - Banana\t\t R$ 20,00");
    printf("\n000004 - Laranja\t R$ 10,00");
    printf("\n----------------------------\n");

    printf("\nDigite o c�digo do produto: \n");

    //continua o sistema .....

return 0;
}
