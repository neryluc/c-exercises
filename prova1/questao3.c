#include <stdio.h>

int main(){
    int i, idade, maiorIdade, menorIdade, totalMaior = 0, totalMenor = 0, eleitores = 0;
    
    for(i = 0; i < 5; i++){
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        
        if(idade >= 0 && idade <= 120){
            if(idade >= 18 && idade <= 60){
                printf("Esse eleitor pode votar.");
                eleitores++;
                
                if(i == 0){
                    maiorIdade = idade;
                    menorIdade = idade;
                    totalMenor++;
                    totalMaior++;
                } else{
                    if(idade == maiorIdade){
                        maiorIdade = idade; totalMaior++;
                    }else if(idade > maiorIdade){
                        maiorIdade = idade; totalMaior = 1;
                    }else if(idade == menorIdade){
                        menorIdade = idade; totalMenor++;
                    }else if(idade < menorIdade){
                        menorIdade = idade; totalMenor = 1;
                    }
                }
            } else {
                printf("\nEsse eleitor ainda nao pode votar.");
            }
        }
    }
        
    printf("\n\n>>>>>>Menor idade: %d", menorIdade);
    printf("\n>>>>>>Eleitores com essa idade %d", totalMenor);
    
    printf("\n\n");

    printf(">>>>>>Maior idade: %d", maiorIdade);
    printf("\n>>>>>>Eleitores com essa idade %d", totalMaior);
    
    printf("\n\n");
        
    return 0;
}