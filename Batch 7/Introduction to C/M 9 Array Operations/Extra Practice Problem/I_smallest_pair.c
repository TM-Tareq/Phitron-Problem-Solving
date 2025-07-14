#include<stdio.h>
#include<limits.h>

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

        int sm_sum = INT_MAX;

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                if(sum < sm_sum) sm_sum = sum;
            }
        }

        printf("%d\n", sm_sum);
    }

    return 0;
}