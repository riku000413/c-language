#include <stdio.h>

int main(void){
    char c;
    while(1){
        scanf("%c", &c);
        if(c == '\n'){
            break;
        }
        if('a' <= c && c <= 'z'){
            c -= 32;
        }else if('A' <= c && c <= 'Z'){
            c += 32;
        }else{
            c = c;
        }
        printf("%c", c);
    }
    printf("\n");

    return 0;
}