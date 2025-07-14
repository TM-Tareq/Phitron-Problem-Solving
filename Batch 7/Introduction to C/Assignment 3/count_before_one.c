#include<stdio.h>

int count_before_one(int arr[], int n) {
    
    int i = 0, count = 0;

    while(i < n && arr[i] != 1) {
        count++;
        i++;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = count_before_one(arr, n);

    printf("%d\n", count);

    return 0;
}