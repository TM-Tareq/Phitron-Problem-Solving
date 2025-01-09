#include<stdio.h>
int main() {
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    if(S == '+') {
        int sum = A + B;
        if(sum == C) {
            printf("Yes");
        } else {
            printf("%d",sum);
        }
    }
    if(S == '-') {
        int difference = A - B;
        if(difference == C) {
            printf("Yes");
        } else {
            printf("%d",difference);
        }
    }
    if(S == '*') {
        int mul = A * B;
        if(mul == C) {
            printf("Yes");
        } else {
            printf("%d",mul);
        }
    }

    return 0;
}