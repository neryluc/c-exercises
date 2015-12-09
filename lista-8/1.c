#include <stdio.h>

int x(int a){
    int soma = 0;
    while(a > 0){
        soma += a;
        a--;
    }
    return soma;
}

int main(){
    printf("%d\n", x(3));
    return 0;
}