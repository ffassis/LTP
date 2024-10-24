#include <stdio.h>
void funcaoTroca(int a, int b) {
int temp = a; // a=10 , b=20
    a = b;
    b = temp;
    printf("Dentro da funcaoTroca: a = %d, b = %d\n", a, b);
}
int main() {
    int a = 10, b = 20;
    funcaoTroca(a, b);
    printf("Dentro do main: a = %d, b = %d\n", a, b);

    return 0;
}
