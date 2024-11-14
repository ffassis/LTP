#include <stdio.h>

int main(){
	int i, j, tam, soma=0;
	printf("Digite o tamanho da matriz quadrada: ");
	scanf("%d", &tam);
	
	int matriz[tam][tam];
	//preenchendo a matriz
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i%2==0 && j%2==0)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
			
			soma = soma + matriz[i][j];
		}
	}
	//imprimindo a matriz
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSoma = %d", soma);
	return 0;
}
