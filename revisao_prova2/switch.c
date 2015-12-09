#include <stdio.h>

int main(){
    int opcao;
    int numA, numB;
    
    while(opcao != 4){
        printf("1 - adicao \n");
        printf("2 - subtracao \n");
        printf("3 - multiplicacao \n");
        printf("4 - encerrar \n");
        
        scanf("%d", &opcao);
        
        if(opcao != 4){
            printf("Valor 1: \n");
            scanf("%d", &numA);
            printf("Valor 2: \n");
            scanf("%d", &numB);
            
            switch(opcao){
                case 1: printf("%d \n", numA + numB);
                break;
                case 2: printf("%d \n", numA - numB);
                break;
                case 3: printf("%d \n", numA * numB);
                break;
                default: printf("Opcao invalida!\n");
            }
        }
    }
    
    return 0;
}