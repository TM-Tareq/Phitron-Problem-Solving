#include<stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = add(a, b);

    printf("%d\n", sum);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A