#include<stdio.h>
int main() {

    int m, n;
    scanf("%d%d", &n, &m);

    int matrix[n][m];

    if(n == m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
    }

    int flag = 1;

    for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(((i == j) || ((i + j) == n - 1))) {
                    if((matrix[i][j]) != 1) {
                        flag = 0;
                        break;
                    }
                }else {
                    if((matrix[i][j]) != 0) {
                        flag = 0;
                        break;
                    }
                }
            }
    }

    if(flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }


    return 0;
}

// flag = 0 mane amra surutei dhore nicchi j amader matrix ta scalar na. So amra cinta korbo je kokhono scalar hobe kina. Hobe kina-- emon kothate given sorto sobgulo match korte hobe. Jodi ekjoner jpnno match kore