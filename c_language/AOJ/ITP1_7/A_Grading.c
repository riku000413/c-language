#include <stdio.h>

int main(void){
    int m, f, r, sum;
    char g;
    for(int i = 1; i <= 50; i++){
        scanf("%d %d %d", &m, &f, &r);
        if(m == -1 && f == -1 && r == -1){
            break;
        }

        sum = m + f;

        if(m == -1 || f == -1){
            g = 'F';
        }else{
        
        if(sum >= 80){
            g = 'A';
        }
        if(65 <= sum && sum < 80){
            g = 'B';
        }
        if(50 <= sum && sum < 65){
            g = 'C';
        }
        if(30 <= sum && sum < 50){
            g = 'D';
            if(r >= 50){
                g = 'C';
            }
        }
        if(sum < 30){
            g = 'F';
        }
    }
        printf("%c\n", g);
    }
    return 0;
}