#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for(int i =0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Implementing frequency Array
    int freq[100000] = {0};

    for(int i = 0; i < n; i++) {
        freq[a[i]] = 1;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d %d \n",i, freq[i]);
    }


    // Checking the prove
    int m;
    scanf("%d", &m);

    for(int i =0; i < m; i++) {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if(freq[x] == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}