#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lw = arr[0];
    int pos = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < lw) {
            lw = arr[i];
            pos = i;
        }
    }

    printf("%d %d", lw, pos  + 1);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E