#include <stdio.h>

int main(Void){
    int a, b, A;
    char op;


    for(;;){
        scanf("%d %c %d", &a, &op, &b);

        if(op == '?'){
            break;
        }

        if(op == '+'){
            A = a + b;
        }else if(op == '-'){
            A = a - b;
        }else if(op == '*'){
            A = a * b;
        }else if(op == '/'){
            A = a/ b;
        }

        printf("%d\n", A);
    }
    return 0;
}