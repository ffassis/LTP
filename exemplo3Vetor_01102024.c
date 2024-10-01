#include <stdio.h>
int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int count[tamanho], i;

    for(i=0; i<tamanho; i++){
        scanf("%d", &count[i]);
    }

    for(i=0; i<tamanho; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}
