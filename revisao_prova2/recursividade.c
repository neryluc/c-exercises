#include <stdio.h>

int func(int i){
    int soma = 0;
    
    while(i > 0){
        soma += i;
        i--;
    }
    
    return soma;
}

int main(){
    printf("%d\n", func(3));    
    return 0;
}