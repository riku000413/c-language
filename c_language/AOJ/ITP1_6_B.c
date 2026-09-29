#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

     int cards[4][14] = {0};
     for(int i = 0; i < n; i++){
        char skin;
        int number;
        scanf(" %c %d", &skin, &number);

        int s;
        if(skin == 'S'){
            s = 0;
        }else if(skin == 'H'){
            s = 1;
        }else if(skin == 'C'){
            s = 2;
        }else{
            s = 3;
        }
        cards[s][number] = 1;
     }

     char skins[4] = {'S', 'H', 'C', 'D'};

     for(int s = 0; s < 4; s++){
        for(int number = 1; number <= 13; number++){
            if(cards[s][number] == 0){
                printf("%c %d\n", skins[s], number);
            }
        }
     }
     return 0;
}