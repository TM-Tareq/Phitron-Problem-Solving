#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n - 1;

    while(i < j) {
        if(arr[i] != arr[j]) {
            printf("NO");
            return 0;
        } else {
            i++, j--;
        }
    }

    printf("YES");

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G