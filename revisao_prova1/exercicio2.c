#include <stdio.h>

int main(){
	int i, maior, menor, valor;

	for(i = 0; i < 3; i++){
		printf("Digite um valor: ");
		scanf("%d", &valor);

		if(i == 0){
			maior = valor;
			menor = valor;
		} else{
			if(valor > maior){
				maior = valor;
			} else if(valor < menor){
				menor = valor;
			}
		}
	}

	printf("O maior valor eh: %d", maior);
	printf("\nO menor valor eh: %d", menor);

	printf("\n\n");
	return 0;
}
