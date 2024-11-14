#include <stdio.h>

int main(){
	int i, j, tam;
	printf("Digite o tamanho da matriz quadrada: ");
	scanf("%d", &tam);
	
	int matriz[tam][tam];
	//preenchendo a matriz
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i==j)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
		}
	}
	//imprimindo a matriz
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
