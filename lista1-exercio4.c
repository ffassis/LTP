#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a=25, b=10, c=0;

    c = 2+3*b-4%3*a;
    // 2 + (3 * b) - ((4 % 3) * a)
    // 2 + (3 * 10) - ((4 % 3) * 25)
    // 2 + 30 - ((1) * 25)
    // 32 - 25 = 7

    printf("c = %d", c);

    return 0;
}
