#include<stdio.h>

// using recursion

// void peakMountain(int x, int peakNumber) {
//     // for(int i = 1; i <= peakMountain; i++) {
//     //     printf("%d", i);
//     // }

//     if(x == peakNumber) {
//         return;
//     }

//     printf("%d ", x);

//     peakMountain(x + 1, peakNumber);

    

//     printf("%d ", x);
// }

int main() {
    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++) {
        int n;

        scanf("%d", &n);

        // peakMountain(1, n);

        for(int j = 1; j <= n; j++){
            printf("%d ", j);
        }
        for(int j = n - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}