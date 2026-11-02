#include <stdio.h>

void SumAndDifference(int *pa, int*pb){
    int sum = *pa + *pb;
    int diff = *pa - *pb;

    *pa = sum;
    *pb = diff;
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    SumAndDifference(&a, &b);

    printf("%d %d\n", a, b);
    
    return 0;
}