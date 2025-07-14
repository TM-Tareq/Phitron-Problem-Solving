#include <stdio.h>
int main()
{
    int t, a, b, c;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);

        int min = b - a;

        for (c = a; c <= b; c++)
        {
            int value = (c - a) + (b - c);
            if (value < min)
            {

                min = value;
            }
        }
        printf("%d\n", min);
    }

    return 0;
}