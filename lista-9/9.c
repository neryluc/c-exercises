#include <stdio.h>

int serie(int n){
    if(n > 0)
        return ((1 + (n * n)) / n) + serie(n - 1);
    else
        return 0;
}

int main(){
    printf("%d\n", serie(1));
    return 0;
}