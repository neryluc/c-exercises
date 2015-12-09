#include <stdio.h>

int cubo(int n){
    if(n > 0)
        return (n * n * n) + cubo(n - 1);
    else
        return 0;
}

int main(){
    printf("%d\n", cubo(3));
    return 0;
}