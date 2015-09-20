#include <stdio.h>

int main(){
    int i, maiorNum, menorNum, numeroAtual;
    
    for(i = 0; i < 50; i++){
        printf("Digite o %i numero: ", i + 1);
        scanf("%d", &numeroAtual);
        
        if(i == 0){
            maiorNum = numeroAtual;
            menorNum = numeroAtual;
        } else {
            if(numeroAtual > maiorNum){
                maiorNum = numeroAtual;
            } else if(numeroAtual < menorNum){
                menorNum = numeroAtual;
            }
        }
    }
    
    printf("Maior numero: %d - Menor numero: %d\n\n", maiorNum, menorNum);
    
    return 0;
}