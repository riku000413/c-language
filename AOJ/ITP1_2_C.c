#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        int d = a;
        a = b;
        b = d;
    }
    if(b > c){
        int e = b;
        b = c;
        c = e;
    }
    if(a > b){
        int f = a;
        a = b;
        b = f;
    }
    printf("%d %d %d\n", a, b, c);
    
    return 0;


}