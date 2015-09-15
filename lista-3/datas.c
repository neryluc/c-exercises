#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano, mes, dia;
    
    printf("Informe uma data no padrao A M D: ");
    scanf("%d %d %d", &ano, &mes, &dia);
    
    if(ano > 0 && (dia > 0 && dia <= 31) && (mes > 0 && mes <= 12)){
        
        // Verificar se eh ano bissexto
        int anoBissexto;
        if(ano % 4 == 0 && !(ano % 100 == 0)){
            anoBissexto = 1;
        } else if(ano % 400 == 0){
            anoBissexto = 1;
        } else {
            anoBissexto = 0;
        }
        
        // Determinando o proximo dia
        if(anoBissexto){
            if(dia < 31 && dia < 29){
                dia++;
            } else if(mes != 2 && dia < 31){
                dia++;
            } else {
                dia = 1;
            }
        } else {
            if(dia < 31 && dia < 28){
                dia++;
            } else if(mes != 2 && dia < 31){
                dia++;
            } else {
                dia = 1;
            }
        }
        
        // Determinando o proximo mes e, caso necessario, novo ano
        if(dia == 1){
            if(mes == 12){
                mes = 1;
                ano++;
            } else {
                mes++;
            }
        }
        
        printf("A nova data eh: %d %d %d", ano, mes, dia);
        
    } else {
        printf("A data eh invalida.");
    }
    
    printf("\n\n");
    return 0;
}