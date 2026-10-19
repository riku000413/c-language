#include <stdio.h>

int main(void) {
    char c;
    int sum = 0;

    while (1){
        scanf("%c", &c);
        if (c == '\n') {
            printf("%d\n", sum);
            sum = 0;
            continue;
        }

        if (c == '0' && sum == 0) {
            break;
        }

        sum += (c - '0');
    }

    return 0;
}