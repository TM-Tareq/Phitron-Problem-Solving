/*
No return parameter means void type function
 */


#include<stdio.h>

void alphaCheck(char c) {
    
    if('a' <= c && c <= 'z') {
        printf("Lower\n");
    } else {
        printf("Upper\n");
    }
}

int main() {
    // int a, b;

    // scanf("%d %d", &a, &b);

    alphaCheck('a');
    alphaCheck('A');
    alphaCheck('2');
    alphaCheck(2);

    return 0;
}