#include <stdio.h>
int main()
{
    int N;
    int c = 0;
    int d = 0;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 0)
            c++;
        else
            d++;
    }
    printf("%d\n%d", c, d);
}