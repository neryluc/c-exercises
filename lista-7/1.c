#include <stdio.h>

int ehDivisivel(int a, int b){
    return ((a % b) == 0);
}

void ordenar(int *a, int *b, int *c){
    int temp;
    
    if(!((*a > *b) && (*b > *c))){
        if(*a < *b){
            temp = *a;
            *a = *b;
            *b = temp;
        }
    
        if(*b < *c){
            temp = *b;
            *b = *c;
            *c = temp;
        }
        
        ordenar(a, b, c);
    }
}

int main(){
    int a = 1, b = 3, c = 2;
    
    ordenar(&a, &b, &c);
    printf("%d %d %d \n", a, b, c);
    return 0;
}