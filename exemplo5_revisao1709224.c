//programa que imprime os m�ltiplos de 1 at� um n�mero digitado
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero=0, i=1;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
/*
    while(i <= numero){
        if(numero%i == 0)
            printf("%d ", i);

        i++;
    }
*/
    for(i=1 ;i <= numero; i++){
        if(numero%i == 0)
            printf("%d ", i);
    }

    return 0;
}

