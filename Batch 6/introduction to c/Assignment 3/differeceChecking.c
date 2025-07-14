#include<stdio.h>
int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    int difference = 0;

    if(A > B) {
        difference = A - B;
    } else {
        difference = B - A;
    }

    return 0;
}