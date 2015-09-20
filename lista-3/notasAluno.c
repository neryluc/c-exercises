#include <stdio.h>

int main(){
    int codigo, i;
    float notaA, notaB, notaC, mediaPonderada;
    
    do{
        printf("Digite o codigo do aluno: ");
        scanf("%d", &codigo);
        
        if(codigo != 0){
           printf("Digite a primeira nota do aluno: ");
           scanf("%f", &notaA);
           
           printf("Digite a segunda nota do aluno: ");
           scanf("%f", &notaB);
           
           printf("Digite a terceira nota do aluno: ");
           scanf("%f", &notaC);
           
           if((notaA > notaB) && (notaA > notaC)){
                mediaPonderada = ( (notaA * 4) + (notaB * 3) + (notaC * 3) ) / (4 + 3 + 3);
           } else if((notaB > notaA) && (notaB > notaC)){
               mediaPonderada = ( (notaB * 4) + (notaA * 3) + (notaC * 3) ) / (4 + 3 + 3);
           } else {
               mediaPonderada = ( (notaC * 4) + (notaA * 3) + (notaB * 3) ) / (4 + 3 + 3);
           }
           
           printf("\nCodigo do aluno: %d - Notas: %f, %f, %f - Media: %f.\n", codigo, notaA, notaB, notaC, mediaPonderada);
           
           if(mediaPonderada >= 5.0){
               printf("O aluno esta APROVADO.\n\n");
           } else {
               printf("O aluno esta REPROVADO.\n\n");
           }
           
        }
    } while(codigo != 0);
    
    return 0;
}