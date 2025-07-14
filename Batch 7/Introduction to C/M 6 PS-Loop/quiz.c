#include<stdio.h>
int main() {
    // int i = 3;
    // while(i <= 5) {
    //     for(int j = 0; j < i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    //     i++;
    // }

    // int i = -3;
    // while(i < 0) {
    //     for(int j = 0; j < 5; j++) {
    //         printf("#");
    //     }
    //     i--;
    // }

    for(int i = 0; i <= 10; i++) {
        if(i > 2) {
            continue;
        }
        printf("hi ");
    }

    return 0;
}