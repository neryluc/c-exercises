#include <stdio.h>

void jogo_da_senha(){
    int senhaInvalida = 1;
    int tentativas = 5;
    int tentativa_atual = 1;
    int senha;
    int senha_advinha;
    int jogador2_venceu = 0;
    int jogarDeNovo = 1;
    
    while(jogarDeNovo){
    
    while(senhaInvalida){
        printf("Jogador 1 - Digite a senha (entre 1 a 100): ");
        scanf("%d", &senha);
        
        if(senha >= 1 && senha <= 100)
            senhaInvalida = 0;
    }
    
    while(tentativa_atual <= tentativas){
        printf("\nJogador 2 - Tente adivinhar a senha (tentativa %d de %d): ", tentativa_atual, tentativas);
        scanf("%d", &senha_advinha);
        
        if(senha_advinha == senha){
            printf("Parabens! Voce acertou!");
            break;
        } else if(senha_advinha == (senha + 1) || senha_advinha == (senha - 1)){
            printf("TA QUENTE!");
        } else {
            printf("Passou longe...");
        }
        
        if(tentativa_atual == tentativas){
            printf("\nVoce perdeu! :(");
        }
        
        tentativa_atual++;
    }
    
    
    printf("Jogar de novo (0 ou 1)? \n");
    scanf("%d", &jogarDeNovo);
    if(jogarDeNovo){
        senhaInvalida = 1;
        tentativa_atual = 1;
    }
}
    
    printf("\n");
}

int main(){
    jogo_da_senha();
    return 0;
}