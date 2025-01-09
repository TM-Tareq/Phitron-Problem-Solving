#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0], max = A[0];
    int minPos = 0, maxPos = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            minPos = i;
        }

        if (A[i] > max)
        {
            max = A[i];
            maxPos = i;
        }
    }

    // printf("%d %d\n", min, max);
    // printf("%d %d", minPos, maxPos);

    // int temp = min;
    // printf("%d %d\n", temp, min);
    // min = max;
    // printf("%d", min);
    // max = temp;

    int temp = A[minPos];

    A[minPos] = A[maxPos];

    A[maxPos] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}