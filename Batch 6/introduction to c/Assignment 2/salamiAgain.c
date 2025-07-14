// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int a[N];

//     int maximum = INT_MIN;

//     int result;

//     for (int i = 1; i <= N; i++)
//     {
//         scanf("%d", a[i]);
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         if (a[i] >= maximum)
//         {
//             maximum = a[i];
//         }
//     }
//     for (int i = 0; i <= N; i++)
//     {
//         result = maximum - a[i];

//         printf("%d", result);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int d = max;
    int re;
    for (int i = 0; i < N; i++)
    {
        re = d - a[i];
        printf("%d ", re);
    }
}