#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n1, n2;

    printf("Digite dois n�meros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2){
        n1--;
        printf("N�meros iguais");
        printf(" - N1 = %d, N2 = %d", n1, n2);
    }
    else if(n1 > n2){
        n1++;
        printf("N1 maior");
        printf(" - N1 = %d, N2 = %d", n1, n2);
    }
    else {
        n2++;
        printf("N2 maior");
        printf(" - N1 = %d, N2 = %d", n1, n2);
    }
    //printf(" - N1 = %d, N2 = %d", n1, n2);
    return 0;
}
