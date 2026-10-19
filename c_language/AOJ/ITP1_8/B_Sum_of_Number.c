#include <stdio.h>
int main(void){
    char x;
    int sum = 0;
    while(1){
        scanf("%c", &x);

        if(x == '\n'){
            printf("%d\n", sum);
            sum = 0;
            continue;
        }
        if(x == '0' && sum == 0){
            break;
        }

        sum += (x - '0');
    }
    return 0;
}