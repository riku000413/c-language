#include <stdio.h>

int count = 0;

int FIB(int n){
    count++;
    
    if(n == 1 || n == 2){
        return 1;
    }

    return FIB(n - 1) + FIB(n - 2);
}

int main(void){
    int F, n;
    scanf("%d", &n);

    F = FIB(n);

    printf("%d %d\n", F, count);

    return 0;
}