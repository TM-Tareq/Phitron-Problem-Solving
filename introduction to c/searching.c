#include<stdio.h>

int Searching(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    int mid;

    while( start <= end) {

        mid = (start + end) / 2;

        if(arr[mid] > key) {
        start = mid + 1;

    } else if (arr[mid] < key) {
        end = mid - 1;

    } else {
        return mid;
    }

    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int foundIndex = Searching(arr, n, key);

    printf("%d", foundIndex);

}