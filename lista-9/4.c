#include <stdio.h>

int potencia(int k, int n){
    if(n > 0){
        return k * potencia(k, n - 1);
    } else {
        return 1;
    }
}

int main(){
    int k, n;
    
    printf("Digite k e n: \n");
    scanf("%d", &k);
    scanf("%d", &n);
    
    printf("Resultado: %d \n", potencia(k, n));
    return 0;
}