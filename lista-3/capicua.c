#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, invertido = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &a);
    
    do{
        invertido = (invertido * 10)  + (a % 10);
        a = a / 10;
    } while(a > 0);
    
    printf("\nInvertido: %d\n\n", invertido);
    
    return 0;
}