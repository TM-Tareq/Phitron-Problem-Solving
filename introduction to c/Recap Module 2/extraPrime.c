#include<stdio.h>
int main() {
    int X;
    scanf("%d", &X);

    for(int i = 2; i <= X; i++) {
        if(X % 1 == 0 && X % X == 0 && X % i != 0) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
}