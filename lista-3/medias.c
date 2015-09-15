#include <stdio.h>
#include <stdlib.h>

int main(){
    int  somaMediaAritmetica = 0, somaMediaPonderada = 0, contador = 1, a;
    
    do{
        printf("Digite um valor: ");
        scanf("%d", &a);
        
        if(a >= 0){
            somaMediaAritmetica = somaMediaAritmetica + a;
            somaMediaPonderada = somaMediaPonderada + (a * contador);
            
            printf("\nMedia aritmetica ate entao: %d", somaMediaAritmetica / contador);
            printf("\nMedia ponderada ate entao: %d", somaMediaPonderada / contador);
            
            printf("\n\n");
            contador++;
        }
    } while(a >= 0);
    
    return 0;
}