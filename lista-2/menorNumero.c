#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    
    if(a > b){
        printf("%d eh maior do que %d", a, b);
    } else if(a < b){
        printf("%d eh maior do que %d", b, a);
    } else {
        printf("Os valores sao iguais.");
    }
    
    printf("\n\n");
    return 0;
}