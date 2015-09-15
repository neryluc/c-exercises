#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroEntrada, divisor;
    
    printf("Digite um numero: ");
    scanf("%d",&numeroEntrada);
    
    divisor = numeroEntrada;
    
    if(numeroEntrada > 0){
        do{
            divisor--;
        } while(divisor > 1 && (numeroEntrada % divisor != 0));
        
        if(divisor == 1){
            printf("\nO numero eh primo.\n\n");
        } else {
            printf("\nO numero nao eh primo.\n\n");
        }
    } else {
         printf("\nO numero nao eh primo.\n\n");
    }
    
    return 0;
}