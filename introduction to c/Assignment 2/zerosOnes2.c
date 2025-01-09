#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if (i == X - 1)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
            }
            else
            {
                a[i] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", a[i]);
    }
}