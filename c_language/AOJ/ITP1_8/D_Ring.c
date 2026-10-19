#include<stdio.h>
#include<string.h>

int main(void){
    char s[101] = {0};
    char s2[201] = {0};
    char p[101] = {0};

    scanf("%s", s);
    scanf("%s", p);

    sprintf(s2, "%s%s", s, s);

    if(strstr(s2, p) != NULL){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
