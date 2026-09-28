#include<stdio.h>

int main(void){
    signed short int x = 32000;
    for(int i = 0; i<1000; i++){
        x++;
        printf("%d: %d\n", i, x);
    }
    return 0;
}