#include<stdio.h>
int main() {
    int N, X,Y;
    scanf("%d%d%d", &N, &X, &Y);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i = 0; i < N; i++) {
        if(arr[i] >= X && arr[i] <= Y) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}