#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++) {
        if(arr[i] < 1) {
            printf("Entry-level candidate\n");
        } else if(arr[i] >= 1 && arr[i] <= 3) {
            printf("Junior candidate\n");
        } else if(arr[i] >= 4 && arr[i] <= 7) {
            printf("Mid-level candidate\n");
        } else {
            printf("Senior candidate\n");
        }
    }

    return 0;
}

// arr[i] >= X && arr[i] <= Y)