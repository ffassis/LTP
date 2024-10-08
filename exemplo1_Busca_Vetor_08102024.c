#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int Tam = 2;
    int v[Tam];
    int i=0, numero=0, contador=0;

    for(i=0; i<Tam; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\n-------------------------------");
    printf("\nDigite um valor para buscar no vetor: ");
    scanf("%d", &numero);

    for(i=0; i<Tam; i++){
       if(numero == v[i]){
            contador=i+1;
            break;
       }
    }
        if(contador)
            printf("\nValor encontrado na posição %d.\n", contador);

        else
            printf("\nValor NÃO encontrado!\n");

    return 0;
}

