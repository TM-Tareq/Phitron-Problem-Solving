#include<stdio.h>
#include<limits.h>

void min_max(int arr[], int n) {
    int min = INT_MAX, max = INT_MIN;

    for(int i = 0; i < n;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("%d %d\n", min, max);
}


int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min_max(arr, n);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G