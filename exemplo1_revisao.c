#include <stdio.h>

int main(){
	int i=0;
		
	while(i<5){
		printf("%d ", i);
		i = i + 1;
	}
	i = 2 + 3 * 5 - 4 % 3 * 2;
	printf("\n\ni = %d ", i);
}
