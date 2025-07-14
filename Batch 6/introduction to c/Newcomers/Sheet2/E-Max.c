#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    int max = INT_MIN;

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= N; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }

    printf("%d", max);

    return 0;
}