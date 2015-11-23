#include <stdio.h>

void calculaTermos(int a, int b, int c){
    int i;
    int ultimo;
    
    printf("%d  %d  %c ", a, b, c);
    
    for(i = 0; i < 20; i++){
        ultimo = a + b + c;
        printf("%d  ", ultimo);
        
        a = b;
        b = c;
        c = ultimo;
    }
}

int main(){
    int a, b, c;
    
    printf("Digite o primeiro termo: ");
    scanf("%d", &a);
    printf("Digite o segundo termo: ");
    scanf("%d", &b);
    printf("Digite o terceiro termo: ");
    scanf("%d", &c);
    
    calculaTermos(a, b, c);
    
    printf("\n");
    return 0;
}