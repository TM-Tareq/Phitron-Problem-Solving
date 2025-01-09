#include<stdio.h>

void fun(int n) {
    if(n == 0) {
        return;
    }

    printf("%d\n", n);

    fun(n - 1);
}



int main() {

    int n = 7;

    fun(n);

    return 0;
}