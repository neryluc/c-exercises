#include <stdio.h>

void calculaMedia(float *a, float b, float c, char *opcao){
    float media;
    
    if(*opcao == 'A' || *opcao == 'P'){
        if(*opcao == 'A'){
            media = (*a + b + c) / 3;
            *a = media;
        } else if(*opcao == 'P'){
            media = ( (*a * 5) + (b * 3) + (c * 2) / (5 + 3 + 2) );
            *a = media;
        }
        
        if(media >= 7){
            *opcao = 'V';
        } else if(media < 3){
            *opcao = 'R';
        } else {
            *opcao = 'F';
        }
    }
    
}

int main(){
    float notaA, notaB, notaC;
    int opcao;
    char opcaoChar;
    int lerNota = 1;
    int totalAprovados = 0, totalFinal = 0, totalReprovados = 0;
    
    while(lerNota != 0){
        printf("\nLER NOTA? \n");
        scanf("%d", &lerNota);
        
        if(lerNota != 0){
        
            printf("Digite nota A: \n");
            scanf("%f", &notaA);
            printf("Digite nota B: \n");
            scanf("%f", &notaB);
            printf("Digite nota C: \n");
            scanf("%f", &notaC);
            printf("Digite a opcao (A ou P) para calcular a media: \n");
            
            fseek(stdin,0,SEEK_END);
            scanf("%d", &opcao);
            fseek(stdin,0,SEEK_END);
            
            if(opcao == 1){
                opcaoChar = 'A';
            } else if(opcao == 2){
                opcaoChar = 'P';
            }
            
            calculaMedia(&notaA, notaB, notaC, &opcaoChar);
            
            if(opcaoChar == 'V'){
                totalAprovados++;
            } else if(opcaoChar == 'R'){
                totalReprovados++;
            } else if(opcaoChar == 'F'){
                totalFinal++;
            }
        }
        
    }
    
    printf("Total aprovados: %d \n", totalAprovados);
    printf("Total reprovados: %d \n", totalReprovados);
    printf("Total final: %d \n", totalFinal);
    
    return 0;
}