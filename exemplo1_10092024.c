#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");//n�o precisa na prova
    int n=0, i=0;

    printf("Digite um n�mero: ");
    scanf("%d", &n);
/*
    while(i <= n){
        if(i%2 == 1)
            printf("%d � �mpar\n", i);

        i++;
    }
*/
    for(i=1; i <= n; i++){
        if(i%2 == 0)
            printf("%d � par\n", i);
    }

    return 0;
}
