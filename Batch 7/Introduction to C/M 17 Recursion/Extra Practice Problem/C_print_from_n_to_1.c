#include<stdio.h>

void recu(int i, int n) {
    if(i > n) return;

    recu(i + 1, n);

    printf("%d", i);
    if(i != 1) printf(" ");
}

int main() {
    int n;
    scanf("%d", &n);

    recu(1, n);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C