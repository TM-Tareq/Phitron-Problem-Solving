#include<stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    if(r == c) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if((i = j) || ((i + j) == r - 1)) {
                    if(arr[i][j] != 1) flag = 0;
                } else {
                    arr[i][j] != 0;
                    flag = 0;
                }
            }
        }
    } else {
        flag = 0;
    }

    if(flag == 1) printf("YES");
    else printf("NO");

    return 0;
}

/**
 #include<stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    if(r == c) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(i == j || (i + j) == r - 1) {
                    if(arr[i][j] != 1) {
                        flag = 0;
                    }
                } else {
                    if(arr[i][j] != 0) {
                        flag = 0;
                    }
                }
            }
        }
    } else {
        flag = 0;
    }

    if(flag == 1) printf("YES");
    else printf("NO");

    return 0;
}

 */