#include<stdio.h>
int main() {
    int A, B, C;

    scanf("%d%d%d",&A, &B, &C);

    // if A is the lowest
    if(A <= B && A <= C) {
        if(B <= C) {
            printf("%d\n%d\n%d\n", A, B, C);
        } else {
            printf("%d\n%d\n%d\n", A, C, B);
        }

    } 
    // if B is the lowest
    else if(B <= A && B <= C) {
        if(A <= C) {
            printf("%d\n%d\n%d\n", B, A, C);
        } else {
            printf("%d\n%d\n%d\n", B, C, A);
        }
    }
    // if C is the lowest
    else {
        if(A <= B) {
            printf("%d\n%d\n%d\n", C, A, B);
        } else {
            printf("%d\n%d\n%d\n", C, B, A);
        }
    }

    printf("\n");

    printf("%d\n%d\n%d", A, B, C);
    return 0;
}

// C > 