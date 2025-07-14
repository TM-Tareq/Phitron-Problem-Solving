#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);

    char nextChar;

    if (C == 'z')
    {
        nextChar = 'a';
        printf("%c", nextChar);
    }
    else
    {
        nextChar = C + 1;
        printf("%c", nextChar);
    }
}