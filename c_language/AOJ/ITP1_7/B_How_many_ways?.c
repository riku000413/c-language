#include <stdio.h>

int main(void){
    int n, x;
    while(1){
        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0){
            break;
        }

        int c = 0;

        for(int i = 3; i <= n; i++){
            for(int j = 2; j < i; j++){
                for(int k = 1; k < j; k++){
                    if(i + j + k == x){
                        c++;
                    }
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}