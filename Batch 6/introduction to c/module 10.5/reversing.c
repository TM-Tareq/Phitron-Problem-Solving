#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for(int i=0, j = N - 1; i < j; i++, j --) {
        A[j] = a[i];
    }
    
    for(int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

// i > N && j <= 0