#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    if(a%b == 0){
        printf("%d eh divisivel por %d.", a, b);
    } else {
        printf("%d nao eh divisivel por %d.", a, b);
    }
    
    printf("\n\n");
    return 0;
}