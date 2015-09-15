#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("Esta pessoa tem %d anos e eh maior de idade", idade);
    } else {
        printf("Esta pessoa tem %d anos e nao eh maior de idade", idade);
    }
    
    printf("\n\n");
    return 0;
}