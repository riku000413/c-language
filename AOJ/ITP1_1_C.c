#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    int V = a * b;
    int L = a * 2 + b * 2;
    printf("%d %d\n", V, L);
    return 0;
}