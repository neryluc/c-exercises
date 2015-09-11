#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float valorMercadoria, valorFinalAVista, valorAPrazo, valorPrestacoes;
    int numPrestacoes;
	char modoPagamento;
	
	printf("Digite o valor da mercadoria: " );
	scanf("%f", &valorMercadoria);
	
	printf("\nDigite o modo de pagamento, a vista (V) ou parcelado (P): ");
	scanf(" %c", &modoPagamento);

	if(modoPagamento == 'V'){
	   // O valor final é o valor da mercadoria com um desconto de 5%
		valorFinalAVista = valorMercadoria - (valorMercadoria * 0.05);
		printf("\nO valor final da compra eh: R$ %.2f \n\n", valorFinalAVista);
		
	} else if(modoPagamento == 'P'){
		printf("\nQual o numero de prestacoes? ");
		scanf("%d", &numPrestacoes); 
		
		// O valor total a prazo é o valor da mercadoria mais 10%
		valorAPrazo = valorMercadoria + (valorMercadoria * 0.1);
		
		// Aqui eu pego o valor total a prazo e divido pelo numero de prestacoes
		// assim eu tenho o valor de cada prestacao
		valorPrestacoes = valorAPrazo / numPrestacoes;
		
		printf("\nO valor de cada prestacao sera: R$ %.2f \n\n", valorPrestacoes);
		
	}

    
    return 0;
}