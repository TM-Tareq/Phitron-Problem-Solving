#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = c - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W