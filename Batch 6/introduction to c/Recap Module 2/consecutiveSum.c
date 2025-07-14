#include<stdio.h>
int main() {
    int T, X, Y, sum = 0;

    // Test case Number
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d%d", &X, &Y);

        if(X > Y) {
            for(int j = Y+1 ; j < X; j++) {
                if(j % 2 != 0) {
                    sum += j;
                }
                printf("%d\n", sum);
            }
        } else {
            for(int j = X + 1; j < Y; j++) {
                if(j % 2 != 0) {
                    sum += j;
                }
                printf("%d\n", sum);
            }
        }
    }


    return 0;
}