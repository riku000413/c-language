#include <stdio.h>

int main(void){
    int H, W;

    for(;;){
    scanf("%d %d", &H, &W);

    if(H == 0 && W == 0){
        break;
    }
    for(int i = 1; i <= H; i++){
        for(int j = 1; j <= W; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    }
}