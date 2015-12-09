#include <stdio.h>

int conta(int k, int n){
    if(k == n){
        return 1;
    } else if(n == 0){
        return 0;
    } else {
        if(n % 10 == k){
            return 1 + conta(k, n / 10);
        } else {
            return conta(k, n / 10);
        }
    }
}

int main(){
    int k, n;
    
    printf("Digite k (1 a 9): ");
    scanf("%d", &k);
    printf("Digite n (n > 0): ");
    scanf("%d", &n);
    
    if(k < 1 || k > 9){
        printf("Valor de K invalido.\n");
    } else if(n <= 0){
        printf("Valor de n invalido.\n");
    } else {
        printf("RESULTADO: %d \n", conta(k, n));
    }
    
    return 0;
}