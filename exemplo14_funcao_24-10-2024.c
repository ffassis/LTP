#include <stdio.h>
#include <locale.h>

float div(int x, int y){
    return x/y;
}

int prod(int x, int y){
    while(1){
        printf("Laço infinito\n");
    }
    return x*y;
}

int soma(int x, int y){
    return x+y;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int a=5, b=2;
    float c;
    c = a/b;
    printf("%f", div(a,b));

    prod(6, 2);

return 0;
}
