#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d", i);
        if(i != n) printf(" ");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B