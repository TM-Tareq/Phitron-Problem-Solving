/* Approach to solve this code
1. Input n numbers
2. Check Odd/ Even, negative/ Positive
3. Count
 */

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            // even
            evenCount++;
        }
        else
        {
            // odd
            oddCount++;
        }

        if (x > 0)
        {
            // positive
            positiveCount++;
        }
        else
        {
            // negative
            negativeCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}