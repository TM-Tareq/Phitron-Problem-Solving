#include<stdio.h>
int main() {
    // char str[5] = "5";

    // printf("%d", str[0]); // output: ASCII Value


    char str[20];

    int n;

    int num = 0;
    for(int i = 0; i < n; i++) {

        int digit = str[i] - '0';

        num = num * 10 + digit;
    }

    printf("%d\n", num);

    return 0;
}