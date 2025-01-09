#include<stdio.h>

void reverseArray(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        // array swapping
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[1000];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, N);

    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}