#include<stdio.h>
int main() {
    int N, T;
    
    scanf("%d%d", &N, &T);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0,count = 0;

    for(int i = 0; i < N; i++) {
        sum += arr[i];
        if(sum > T) {
            break;
        }
        count++;
    }
    printf("%d", count);

    return 0;
}