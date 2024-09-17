#include <stdio.h>
int main(){
    int linha=0, coluna=0;
    //linha = i, coluna = j
    for(linha=0; linha<=5;linha++){ //0, 1,
        for(coluna=0; coluna<=5; coluna++){//0, 1, 2, 3, 4, 5, 6 , 0,
            printf("* "); //0 1 2 3 4 5
        }
        printf("\n");
    }

    return 0;
}
/*
0 1 2 3 4 5
0 1 2 3 4 5
0 1 2 3 4 5
0 1 2 3 4 5
0 1 2 3 4 5
0 1 2 3 4 5
*/
