#include <stdio.h>
//media entre 2 notas
int main(){
	int i=0, nota=0, soma=0;
	float media = 0;
	for(i=0; i<5; i++){
		printf("Digite a %dª nota", i+1);
		scanf("%d", &nota);
		soma = soma + nota;
	}
	media = (float)soma/i;
	
	printf("Media = %12.2f", media);
}
