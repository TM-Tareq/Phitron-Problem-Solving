//

#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check all possible combinations of operations
    if ((a + b) * c == d ||
        (a - b) * c == d ||
        (a * b) + c == d ||
        (a * b) - c == d ||
        (a + c) * b == d ||
        (a - c) * b == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
