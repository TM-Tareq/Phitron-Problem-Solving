#include<stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        long long fact = 1;

        for(int j = 1; j <= N; j++) {
            fact *= j;
        }

        printf("%lld\n", fact);
    }
}