#include<stdio.h>
int main() {
    
    int n;
    scanf("%d", &n);

    int m[n][n];

    for(int i =0; i < n; i++) {
        for(int j = 0; i < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    return 0;
}

/*
becoming a scalar matrix:
1. Diagonal
2. Same diagonal elements
3. All other values are 0;
*/

/*
Kew ekjon shorto manle jodi true hoye jae tahole by default false dhore nibo
 */