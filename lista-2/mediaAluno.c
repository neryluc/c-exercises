#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1, nota2, media;
    
    printf("Informe as notas das duas avaliacoes parciais: ");
    scanf("%d %d", &nota1, &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if(media >= 7){
        printf("O aluno obteve media %d e esta %s.", media, "aprovado");
    } else {
        printf("O aluno obteve media %d e esta %s.", media, "reprovado");
    }
    
    printf("\n\n");
    return 0;
}