#include <stdio.h>
int main()
{
    int t, a, b, c;

    printf("T:\n");
    scanf("%d", &t);
    if (1 <= t && t <= 55)
    {
        for (int i = 1; i <= t; i++)
        {
            scanf("%d%d", &a, &b);

            if (1 <= a && a <= b && b <= 10)
            {
                scanf("%d", &c);

                if (a <= c && c <= b)
                {
                    printf("%d\n", (c - a) + (b - c));
                }
            }
        }
    }

    return 0;
}