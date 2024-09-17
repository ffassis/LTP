#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int i=-5, n, soma=0;
    while(i <= 15){
        if(i<15)
            printf(" ");
        if(i==15){
            printf("|\n");
            i=-6;

        }
        i++;
    }
    i=-5;
    while(i <= 65){
        printf("-");
        i++;
    }

    printf("\n");
    i=-5;
    while(i <= 10){
        if(i<10)
            printf("%d, ", i);
        else
            printf("%d.", i);

        i++;
    }

    return 0;
}
