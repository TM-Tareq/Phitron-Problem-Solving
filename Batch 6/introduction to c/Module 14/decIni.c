#include<stdio.h>
int main() {
    int a[3] [5]; // here means I need 3 array. I will store 5 data in Each

    // Also array tell how many rows I will use
    // 2nd one will tell about column
    
    // In short: 3 ta array 5 ta kore data

    for(int i =0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("i = %d, address = %d || ", i, j, &a[3][5]);
        }

        printf("\n");
    }

    return 0;
}