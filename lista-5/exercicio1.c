#include <stdio.h>

int ehPar(int a){
    return (a % 2 == 0);
}

int ehDivisivelPor3(int a){
    return (a % 3 == 0);
}

int ehDivisivelPor5(int a){
    return (a % 5 == 0);
}

int ehPrimo(int a){
    int i, primo = 1;
    
    for(i = a - 1; i > 1; i--){
        if(a % i == 0){
            primo = 0;
            break;
        }
    }
    
    return primo;
}

int ehPerfeito(int a){
    int somaDivisores = 0, i;
    
    for(i = a - 1; i > 0; i--){
        if(a % i == 0){
            somaDivisores += i;
        }
    }
    
    return (somaDivisores == a);
}

int main(){
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if(ehPar(numero))
        printf("\nO numero eh par.");
    else 
        printf("\nO numero NAO eh par.");
    
    if(ehDivisivelPor3(numero))
        printf("\nO numero eh divisivel por 3.");
    else 
        printf("\nO numero NAO eh divisivel por 3.");
    
    if(ehDivisivelPor5(numero))
        printf("\nO numero eh divisivel por 5.");
    else 
        printf("\nO numero NAO eh divisivel por 5.");
    
    if(ehPerfeito(numero))
        printf("\nO numero eh perfeito.");
    else
        printf("\nO numero NAO eh perfeito.");
    
    if(ehPrimo(numero))
        printf("\nO numero eh primo.");
    else 
        printf("\nO numero NAO eh primo.");
    
    printf("\n");
    return 0;
}