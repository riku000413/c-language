#include <stdio.h>

int main(void){
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    int a[101][101] = {0};
    int b[101][101] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            scanf("%d", &b[i][j]);
        }
    }
    long long c[101][101] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            if(j > 0){
                printf(" ");
            }
            printf("%lld", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}