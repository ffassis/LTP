#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, j=0, qtdeTurmas=2, qtdeAluno=5;
    int turmas[qtdeTurmas][qtdeAluno];

    //preencher a matriz
    printf("\tVetor \n");
    for(i=0; i<qtdeTurmas; i++){
        printf("Digite as %d notas da turma %d.\n", qtdeAluno, i+1);
        for(j=0; j<qtdeAluno; j++){
            printf("Digite a nota do aluno %d. ", j+1);
            scanf("%d", &turmas[i][j]);
        }
    }

    //imprimir a matriz
    for(i=0; i<qtdeTurmas; i++){
        printf("\n****** Notas da turma %d. *******\n", i+1);
        for(j=0; j<qtdeAluno; j++){
            printf("\nNota do aluno %d. %d", j+1, turmas[i][j]);
        }
    }

    return 0;
}
