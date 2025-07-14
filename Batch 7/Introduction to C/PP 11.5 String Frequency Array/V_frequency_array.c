#include<stdio.h>
int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int arr2[m];
    for(int i = 1; i <= m; i++) {
        arr2[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= m; j++) {
            if(arr[i] == j) arr2[j]++;
        }
    }

    for(int i = 1; i <= m; i++) {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V