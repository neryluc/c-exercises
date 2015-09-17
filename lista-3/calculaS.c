#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, n, s = 0;
	
	printf("Digite um valor N inteiro e maior do que zero: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		s = s + (i / (n - (i - 1)));
	}

	printf("O valor de S eh: %d.", s);

	printf("\n\n");
	return 0;
}

