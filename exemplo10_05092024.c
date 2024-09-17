//exercício 4 da primeira lista

#include <stdio.h>

int main(){
    int a = 25, b = 10;

    int c = 2 + 3 * b -4 % 3 * a;
    //2 + 3 * 10 -4 % 3 * 25;
    // 2 + (3 * 10) -(4%3) * 25
    // 2 + 30 - 1*25
    //2 + 30 - 25
    // 7

    printf("A = %d, B = %d, C = %d", a, b, c);
}
