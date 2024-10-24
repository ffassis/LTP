#include <stdio.h>
void funcaoTroca(int a, int b) {
int temp = a; // a=10 , b=20
    a = b;
    b = temp;
    printf("Dentro da funcaoTroca: a = %d, b = %d\n", a, b);
}
int main() {
    int a = 10, b = 20;

   funcaoTroca(a,b);

    return 0;
}
