#include<stdio.h>

int add() {
    int a, b;

    scanf("%d%d", &a, &b);

    printf("Function called");

    int sum = a + b;

    return sum;
}

int main() {

    printf("Before\n");

    printf("%d\n", add());

    printf("After\n");

    return 0;
}