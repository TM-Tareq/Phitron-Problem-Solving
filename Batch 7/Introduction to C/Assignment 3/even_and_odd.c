#include<stdio.h>

int odd = 0, even = 0;

void odd_even(int n) {
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) odd++;
        else even++;
    }

    printf("%d %d", even, odd);
}

int main() {
    int n;
    scanf("%d", &n);

    

    odd_even(n);

    return 0;
}