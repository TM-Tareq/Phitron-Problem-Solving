/**
 * a -> 97
 * A -> 65
 * Difference = 32
 */

#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);

    if (X >= 'a' && X <= 'z')
    {
        // lowercase
        X -= 32;
    }
    else
    {
        // uppercase
        X += 32;
    }

    printf("%c", X);

    return 0;
}