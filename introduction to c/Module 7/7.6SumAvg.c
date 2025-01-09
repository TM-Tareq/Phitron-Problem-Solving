#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Give the value of the array: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("%d\n", sum);

    double avg = (double)sum / n;

    printf("%lf\n", avg);

    return 0;
}