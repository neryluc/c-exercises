#include <stdio.h>

int main(){
    int x = 10;
    int *pont;
    
    printf("%d\n", x); // Exibe 10
    printf("%p\n", &x); // Exibe o endereco de memoria de x
    
    pont = &x;
    //pont = x;
    
    printf("%p\n", pont); // Exibe o endereco de memoria de X
    printf("%i\n", *pont); // Exibe 10, o valor da variavel X
    printf("%p\n", &pont); // Exibe o endereco de memoria de pont
    
    return 0;
}