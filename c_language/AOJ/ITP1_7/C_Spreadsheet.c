#include <stdio.h>

int main(void){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[101][101] = {0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
}