#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    char c;
    
    printf("Digite um numero inteiro positivo maior que zero: ");
    scanf("%d", &n);
    
    printf("Digite um caracter: ");
    
    // Limpar o buffer de memoria para que o proximo scanf não leia o \n da entrada anterior
    __fpurge(stdin);
    
    scanf("%c", &c);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%c", c);
        }
        printf("\n");
    }
    
    return 0;
}