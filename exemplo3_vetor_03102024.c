#include <stdio.h>
//armazenar e imprimir os valores 0 1 2 3 4

int main(){
    int i;

    for(i=0; i<10; i++){
        if(i%2 == 0)
            printf("%d ", i);
    }

    return 0;
}
