#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);


    char S[N];

    fgets(S,sizeof(S), stdin);

    int sum = 0;

    for(int i = 0; i < N;i++) {
        int value = S[i] - '0';
        printf("%d\n", value);

        sum += value;
    }

    printf("%d", sum);

    return 0;
}