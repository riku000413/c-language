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
                if((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)){
                    printf("#");
                }
                if((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0)){
                    printf(".");
                }
            }
            printf("\n");
         }
         printf("\n");
    }
    return 0;
}



/* 他のif条件
  (i+j) が偶数なら #、奇数なら . を出力するロジック
  if ((i + j) % 2 == 0) {
      printf("#");
  }
*/