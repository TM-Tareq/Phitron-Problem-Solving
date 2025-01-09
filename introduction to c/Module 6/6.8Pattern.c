#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // #include <stdio.h>
    // int main()
    // {
    //     int n;

    //     scanf("%d", &n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         int c = 1;
    //         for (int j = 0; j <= i; j++)
    //         {
    //             printf("%d ", c);
    //             c++;
    //         }
    //         printf("\n");
    //     }
    // }

    for (int i = 1; i >= n; i++)
    {
        for (int j = i; j >= 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}