#include<stdio.h>
#include<limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a[50];
        for(int i = 0; i < 50; i++) {
            scanf("%d", a[i]);
        }
        int fashionableValue = INT_MIN;
        int maxVal = 0;
        int i = 0;
        int j = i + 1;
        int b[50] = INT_MIN, c[50] = INT_MIN;
        for(; i < 50; i++) {
            for(; j < 50; j++) {
                maxVal = a[i] + a[j];
                if(maxVal > fashionableValue) fashionableValue = maxVal;
            }
            b[i] = a[i];
            c[j] = a[j];
        }
        for(int i = 0; i < 50; i++) {
            if(fashionableValue % 2 != 0) {
                a[i] = b[i] = 0;
                for(; j < 50; j++) {
                    maxVal = a[i] + a[j];
                    if(maxVal > fashionableValue) fashionableValue = maxVal;
                }
            }
        }
    }

    return 0;
}




#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[55];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int mn = a[0], mx = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] < mn) mn = a[i];
            if (a[i] > mx) mx = a[i];
        }
        if ((mn + mx) % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}


// https://codeforces.com/contest/2110/problem/A