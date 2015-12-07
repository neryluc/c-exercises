#include <stdio.h>

int capicua(int n){
    if(n > 0){
        
        // Esse trecho serve para saber por quanto que eu devo multiplicar o numero 'n'
        // Por exemplo, se o numero de entrada 'n' for 123, eu deveria multiplicar o ultimo
        // algarismo (3) por 100, pois ainda restam dois outros numeros (12) para somar e inverter
       
        int contador = 1;
        int copiaN = n;
        while((copiaN = copiaN / 10) > 0){
            contador *= 10;
        }
        
        // No final desse while, 'contador' vai ter um valor o qual devo usar para multiplicar
        // Por exemplo, se n = 1, contador = 1 (nao entrou no laço)
        // se n = 12, contador = 10, pois vou pegar o ultimo numero (2) e multiplicar por 10 -> 20
        // se n = 12345, contador = 10000, pois vou pegar o ultimo numero (5) e multiplicar por 10000 -> 50000
    
        // Nessa parte eu multiplico sempre o ultimo algarismo pelo contador, de acordo com a explicação acima
        // E faço uma chamada recursiva a função capicua passando o restante do numero
        // Exemplo: Se N de entrada fosse 123
        //          n = 123, fica: return (3 * 100) + capicua(12)
        //          n = 12, fica return (2 * 10) + capicua(1)
        //          n = 1, fica return (1 * 1) + capicua(0)
        //          n = 0, fica return 0;
        return ((n % 10) * contador) + capicua(n / 10);
    } else {
        return n;
    }
}

int main(){
    // Inicia 'numero'  com -1 apenas para entrar no while na primeira vez
    // Depois que ele entra no while, o usuario que vai fornecer o valor da variavel
    // 'numero'. O laço vai parar quando o valor de 'numero' for 0
    int numero = -1;
    
    // Apenas fica lendo valores do usuario e chamando a função capicua
    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        printf("Capicua recursivo: %d\n", capicua(numero));
    }
    
    return 0;
}