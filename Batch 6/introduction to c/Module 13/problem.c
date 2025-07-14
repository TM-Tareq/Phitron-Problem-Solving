#include<stdio.h>

int main() {
    int N, M;

    scanf("%d%d", &N, &M); // 10 - N(array element)

    int mainArray[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &mainArray[i]);
    }

    int freqArray[M + 5];

    // Manually initialize all elements to 0
    for (int i = 0; i < M + 5; i++) {
        freqArray[i] = 0;
    }

    for(int i = 0; i < N; i++) {

        if(mainArray[i] < M + 5) {
            freqArray[mainArray[i] += 1];
        }
    }

    for(int i = 0; i < M; i++) {
        
        printf("%d\n", freqArray[i]);
    }

    return 0;
}