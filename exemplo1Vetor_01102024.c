#include <stdio.h>
int main(){
    int tamanho = 10;

    int count[10], i;

    for(i=0; i<=10; i++){
        count[i]=i;
    }

    for(i=0; i<=10; i++){
        printf("%d ", count[i]);
    }

    return 0;
}
