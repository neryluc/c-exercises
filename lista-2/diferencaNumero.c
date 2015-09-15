#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    if(a > b){
        printf("O maior numero eh %d, o menor numero eh %d e a diferenca entre eles eh %d", a, b, a - b);
    } else if(a < b){
        printf("O maior numero eh %d, o menor numero eh %d e a diferenca entre eles eh %d", b, a, b - a);
    } else {
        printf("Os numeros sao iguais, a diferenca entre eles eh zero.");
    }
    
    printf("\n\n");
    return 0;
}