#include <stdio.h>
int main()
{
    int A, B;
    int arr[1000];
    scanf("%d%d", &A, &B);

    for (int a = A; a <= B; a++)
    {
        for (int i = 0; a != 0; i++)
        {
            int reminder = a % 10;
            int division = a / 10;
            a = division;

            printf("%d\n", reminder);

            arr[i] = reminder;
        }

        int arraySize = sizeof(arr) / sizeof(arr[0]);

        for (int j = 0; j < arraySize; j++)
        {
            if (arr[j] == 4 && arr[j] == 7)
            {
                printf("%d", arr[j]);
            }
            else
            {
                continue;
            }
        }
        arraySize = 0;
        int arr[] = 0;
    }
}