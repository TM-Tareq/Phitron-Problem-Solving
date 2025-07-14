#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    if (r == c) {    // square matrix

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i == j) {
                    // we are now at diagonal
                } else {
                    // we are now at outside diagonal
                    if(arr[i][j] != 0) {
                        flag = 0;
                        printf("This is not diagonal matrix");
                    }
                }
            }
        }
        if(flag == 1) printf("This is a primary diagonal matrix");
    } else {
        // not square matrix
        printf("This is not a primary diagonal matrix");
    }

    return 0;
}