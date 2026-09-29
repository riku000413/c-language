#include <stdio.h>

int main(void){
    double r, V, L;
    double pi = 3.141592653589793;

    scanf("%lf", &r);
    
    V = pi * r * r;
    L = 2 * pi * r;

    printf("%.5lf %.5lf\n", V, L);

    return 0;
}