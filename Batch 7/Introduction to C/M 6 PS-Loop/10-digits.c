#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);


    while(t--) {
        int num;
        scanf("%d", &num);

        if(num == 0) {
            printf("%d", num);
        } else {
            while(num != 0) {
            int mod = num % 10;
            num = num / 10;
            printf("%d ", mod);
        }
        printf("\n");
        }
    }

    return 0;
}