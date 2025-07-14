#include<stdio.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int arr[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int brr[n];

        for(int i = 0; i < n; i++) {
            brr[i] = arr[i];
        }

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] > arr[j]) {
                    int temp = 0;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }
        }


        int crr[n];

        for(int i = 0; i < n; i++) {
            int val = brr[i] - arr[i];
            val = abs(val);
            crr[i] = val;
        }


        for(int i = 0; i < n; i++) {
            printf("%d ", crr[i]);
        }
        printf("\n");
    }

    return 0;
}