#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[101][101] = {0};
    int b[101] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 1; i <= m; i++){
        scanf("%d", &b[i]);
    }

    int c[101] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            c[i] += a[i][j] * b[j];
        }
        printf("%d\n", c[i]);
    }
    return 0;
}