#include <stdio.h>
int main()
{
    for (int i = 100; i <= 300; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("%d is the number\n", i);
            continue;
        }
        else
        {
            printf("%d is not the number");
        }
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", j);

        printf("Line 1\n");
        printf("Line 2\n");

        if (j == 5)
        {
            break;
        }

        printf("Line 3\n");
        printf("Line 4\n");
    }

    printf("Outside loop");

    return 0;
}