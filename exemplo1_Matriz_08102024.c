#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int Tam = 3;
    int m[Tam][Tam];
    int i=0, j=0;;

    //preencendo a matriz, i representa linha
    for(i=0; i<Tam; i++){
       for(j=0; j<Tam; j++){
            m[i][j] = 0;
       }
    }

    printf("-----------------\n");
    //imprimindo a matriz, j representa coluna
    for(i=0; i<Tam; i++){
       for(j=0; j<Tam; j++){
            printf("%d ", m[i][j]);
       }
       printf("\n");
    }
    return 0;
}

