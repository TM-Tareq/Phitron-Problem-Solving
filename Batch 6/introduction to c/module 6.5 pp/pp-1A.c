#include <stdio.h>
int main()
{
    float X, P;

    scanf("%f%f", &X, &P);

    float originalPrice = ((P * 100) / (100 - X));

    printf("%.2f", originalPrice);

    return 0;
}