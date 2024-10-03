#include <stdio.h>
int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int count[tamanho], i;

    //Guardo a informação
    for(i=0; i<tamanho; i++){
        count[i]=i*2;
    }

    //Imprimir elementos
    for(i=0; i<tamanho; i++){
        printf("%d ", count[i]);
    }

    return 0;
}
