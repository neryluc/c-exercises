#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, contador = 0;
    
    do{
       printf("Digite um par de valores A e B: ");
       scanf("%d %d", &a, &b);
       
       if(a < b){
           do{
             if(b % 2 == 0){
                 printf("%d ", b);
             }
             b--;
           } while(b >= a);
       } else {
           printf("Eh necessario que A < B");
       }
       
       printf("\n\n");
       contador++; 
    } while(contador < 5);
    
    return 0;
}