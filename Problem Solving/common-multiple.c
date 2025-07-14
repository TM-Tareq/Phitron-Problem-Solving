// #include<stdio.h>
// int main() {
//     int testCase;
//     scanf("%d", &testCase);

//     while(testCase--) {
//         int rslt = 0;
//         int n;
//         scanf("%d", &n);

//         int arr[n];
//         for(int i = 1; i <= n; i++) {
//             scanf("%d", &arr[i]);
//         }

//         int ans = 1;

//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j < i; j++) {
//                 if(arr[i] == arr[j]) ans = 0;
//             }
//             rslt += ans;
//         }
//         printf("%d\n", rslt);
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int rslt = 0;
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++) {
            int ans = 1;
            for (int j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    ans = 0;
                    break;
                }
            }
            rslt += ans;
        }

        printf("%d\n", rslt);
    }

    return 0;
}
