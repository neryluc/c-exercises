#include <stdio.h>

int calcula(int n){
    if(n > 0)
        return n % 10 + calcula(n / 10);
    else
        return 0;
}

int main(){
    printf("%d\n", calcula(1235));
    return 0;
}