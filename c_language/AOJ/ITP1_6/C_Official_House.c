#include <stdio.h>

int main(void){
    int n, b, f, r, v;
    int a[5][4][11] = {0};

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        a[b][f][r] += v;
    }

    for(b = 1; b <= 4; b++){
        for(f = 1; f <= 3; f++){
            for(r = 1; r <= 10; r++){
                printf(" %d", a[b][f][r]);
                }
                printf("\n");
            }
            if(b == 4){
                break;
            }
            printf("####################\n");
    }
    return 0;
}