#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i=0, j=0, qtdeTurmas=10, qtdeAluno=20;
    int turma1[qtdeAluno], turma2[qtdeAluno], turma3[qtdeAluno];
    int turma4[qtdeAluno], turma5[qtdeAluno], turma6[qtdeAluno];
    int turma7[qtdeAluno], turma8[qtdeAluno], turma9[qtdeAluno];
    int turma10[qtdeAluno];

    //preencher o vetor 1
    printf("\tVetor \n");
    for(i=0; i<qtdeTurmas; i++){
        //scanf("%d", &turma1[i]);
        //printf("Digite as notas dos alunos da turma %d. Aluno %d", i+1, i+1);
        //scanf("%d", &turma1[i]);
        turma1[i]=i*7;

        //printf("Digite as notas dos alunos da turma %d. Aluno %d", i+2, i+1);
        //scanf("%d", &turma2[i]);
        turma2[i]=i*8;

       // printf("Digite as notas dos alunos da turma %d. Aluno %d", i+3, i+1);
        turma3[i]=i*9;

       // printf("Digite as notas dos alunos da turma %d. Aluno %d", i+4, i+1);
        turma4[i]=i*10;
        turma5[i]=i*11;
        turma6[i]=i*2;
        turma7[i]=i*3;
        turma8[i]=i*4;
        turma9[i]=i*5;
        turma10[i]=i*6;

    }
    //preencher o vetor 2

    //imprimir o vetor 1
    printf("\n\tVetor \n");
    for(i=0; i<qtdeTurmas; i++){
        printf("Notas turma %d\n", i+1);
        for(j=0; j<qtdeTurmas; j++){
            printf("%d\n", turma1[j]);
        }

    }

    return 0;
}
