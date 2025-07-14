#include<stdio.h>

void fun(int* x) {
    *x = 20;
    printf("fun function er x er address: %p\n", &x);
}

int main() {
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    printf("Main function er x er address: %p", &x);

    return 0;
}