#include<stdio.h>
int main() {
    int a = 5;

    int *b = &a;

    printf("%d\n\n", &a);

    printf("%d\n\n", b);

    printf("%d\n\n", *b);

    *b = 6;

    printf("%d", *b);

    return 0;
}