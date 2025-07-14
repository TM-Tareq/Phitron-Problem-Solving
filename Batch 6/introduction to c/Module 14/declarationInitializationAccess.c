#include<stdio.h>
int main() {
     int a[2][3] = {{1, 2, 3}, {2, 3, 5}};
    //  1 2 3
    //  2 3 5


    // for 2D array size row * column

    int arr[3][5];

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 5; j++) {
            printf("i = %d, j = %d, address = %d || ", i, j, &arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}