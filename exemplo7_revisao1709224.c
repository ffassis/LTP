//programa que imprime os N�O m�ltiplos de 1 at� 10
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero=0, i=1;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
/*
    while(i <= numero){
        if(numero%i == 1 || numero%i == 2 || numero%i == 3 || numero%i == 4)
            printf("%d ", i);

        i++;
    }
*/
/*
    for(i=1; i <= numero; i++){
        if(numero%i == 1 || numero%i == 2 || numero%i == 3 || numero%i == 4)
            printf("%d ", i);
    }
   */
   //SOLU��O MAIS F�CIL E QUE PODE TER NA PROVA
    for(i=1; i <= numero; i++){
        if(numero%i != 0)
            printf("%d ", i);
    }

    return 0;
}

