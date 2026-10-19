#include<stdio.h>

int main(void){
    int c;
    int count[26] = {0};
    while(scanf("%c", &c) != EOF){
        if('A' <= c && c <= 'Z'){
            c += ('a' - 'A');
        }

        if('a' <= c && c <= 'z'){
            count[c - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        printf("%c : %d\n", 'a' + i, count[i]);
    }
    return 0;
}