#include<stdio.h>
int main() {
    int N, K;
    
    scanf("%d%d",&K, &N);

    for(int i = 1; i <= K; i++) {
        for(int j = 1; i <= N;j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}