#include<stdio.h>

void recu(int arr[], int n, int idx) {
    if(idx == n) return;

    recu(arr, n, idx + 1);

    if(arr[idx] % 2 == 0) printf("%d", arr[idx]);
    
    if(arr[idx] != n) printf(" ");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    recu(arr, n, 0);

    return 0;
}