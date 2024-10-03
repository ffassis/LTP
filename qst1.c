//Programa - while
#include <stdio.h>
int main(){
int i = 1, soma = 0;
    for(i=1; i < 8; i++){
        if(i%2 == 0){
            soma = soma + i;
        }
    }
    printf("%d ",soma);
    return 0;
}
