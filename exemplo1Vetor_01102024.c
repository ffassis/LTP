#include <stdio.h>
int main(){
    int tamanho = 10;

    int count[tamanho], i;

    for(i=0; i<tamanho; i++){
        count[i]=i;
    }

    for(i=0; i<tamanho; i++){
        printf("%d ", count[i]);
    }

    return 0;
}
