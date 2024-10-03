#include <stdio.h>

int main(){
    int i=3, a=0, b=0;

    a = --i;
    b = i--;
    //a = 2, b=2, i=1
    printf("i = %d", i);
    printf("\n--------------");
    printf("\na = %d", a);
    printf("\n--------------");
    printf("\nb = %d", b);
    printf("\n--------------");

    return 0;
}
