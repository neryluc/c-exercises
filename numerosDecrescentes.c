#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numA, numB, numC, numD;
    
    printf("Digite o primeiro numero: \n");
    scanf("%f", &numA);
    printf("Digite o segundo numero: \n");
    scanf("%f", &numB);
    printf("Digite o terceiro numero: \n");
    scanf("%f", &numC);

    if((numA > numB) && (numB > numC)){
        printf("Digite o quarto numero: \n");
        scanf("%f", &numD);
        
        if(numD >= numA){
            printf("%f, %f, %f, %f\n", numC, numB, numA, numD);
        } else if(numD >= numB){
             printf("%f, %f, %f, %f\n", numC, numB, numD, numA);
        } else if(numD >= numC){
             printf("%f, %f, %f, %f\n", numC, numD, numB, numA);
        } else {
             printf("%f, %f, %f, %f\n", numD, numC, numB, numA);
        }
    } else {
        printf("Os numeros NAO estao em ordem decrescente!\n");
    }
    
    return 0;
}
