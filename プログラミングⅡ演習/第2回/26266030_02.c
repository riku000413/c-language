#include<stdio.h>

int main(void){
    int x;
    scanf("%d", &x);
     for(int i = 1; i <= x; i++){
        if(i % 3 == 0 && i % 5 != 0){
            printf("Fizz\n");
        }else if(i % 5 == 0 && i % 3 != 0){
            printf("Buzz\n");
        }else if(i % 3 == 0 && i % 5 == 0){
            printf("FIzzBuzz\n");
        }else{
            printf("%d\n", i);
        }
     }
     return 0;
}