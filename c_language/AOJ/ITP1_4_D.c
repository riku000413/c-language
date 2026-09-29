#include <stdio.h>

int main(void){
    int n, x;
    int min = 1000000;
    int max = -1000000;
    long long sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        
        sum = sum + x;
        
        if(min > x){
            min = x;
        }

        if(max < x){
            max = x;
        }
    }
printf("%d %d %lld\n", min, max, sum);

return 0;
}