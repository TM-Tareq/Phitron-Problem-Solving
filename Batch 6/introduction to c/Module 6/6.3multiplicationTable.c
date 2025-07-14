#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d X %2d = %2d\n", j, i, j * i);
        }
    }
    printf("\n\n");

    return 0;
}