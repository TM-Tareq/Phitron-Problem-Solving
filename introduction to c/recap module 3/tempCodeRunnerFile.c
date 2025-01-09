#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int A[1000];

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // 1. Find the minimum value

    int min = A[0];

    for(int i = 0; i < N; i++) {
        if(A[i] < min) {
            min = A[i];
        }
    }
    // 2. Count the frequency of min

    int count = 0;

    for(int i = 0; i < N; i++) {
        if(A[i] == min) {
            count++;
        }
    }

    // 3. Is the frequency odd / even

    if(count % 2 == 0) {
        printf("Unlucky\n");
    } else {
        printf("Lucky\n");
    }
}
