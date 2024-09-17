#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");//não precisa na prova
    int n=0, i=0;

    printf("Digite um número: ");
    scanf("%d", &n);
/*
    while(i <= n){
        if(i%2 == 1)
            printf("%d é ímpar\n", i);

        i++;
    }
*/
    for(i=1; i <= n; i++){
        if(i%2 == 0)
            printf("%d é par\n", i);
    }

    return 0;
}
