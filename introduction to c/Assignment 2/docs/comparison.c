#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    if (A > B)
    {
        printf("Right");
    } else  if(A == B) {
        printf("Right");
    }
    else if (A > B)
    {
        printf("Wrong");
    }

    return 0;
}