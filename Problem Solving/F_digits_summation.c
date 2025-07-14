#include<stdio.h>
int main() {
    long long int n, m;
    scanf("%lld%lld", &n, &m);

    long long int p = n % 10;
    long long int q = m % 10;
    // int r = n / 10;

    long long int sum = p + q;

    printf("%lld", sum);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F