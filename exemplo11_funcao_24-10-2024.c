#include <stdio.h>
void funcaoTroca(int a, int b) {
int temp = a; // a=10 , b=20
    a = b;
    b = temp;
    printf("Dentro da Função: x = %d, y = %d\n", a, b);
}
int main() {
    int x = 10, y = 20;
    funcaoTroca(x, y);
    printf("Dentro do main: x = %d, y = %d\n", x, y);
    return 0;
}
