#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long int m, a, b, c;
        scanf("%lld%lld%lld%lld", &m, &a, &b, &c);

        if(m == 0) {
            printf("0\n");

            return 0;
        }

        long long int total = a * b * c;

        long long int missing_num;

        if(m / total == 0) {
            missing_num = m / total;
            printf("%d\n", missing_num);
        }
        else printf("-1\n");
    }

    return 0;
}

/**
 * #include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long int m, a, b, c;
        scanf("%lld%lld%lld%lld", &m, &a, &b, &c);

        long long int total = (long long)a * b * c;

        if (m == 0) {
            printf("0\n");
            continue;
        }
        if (total == 0) {
            printf("-1\n");
            continue;
        }

        if (m % total == 0) {
            long long int x = m / total;
            printf("%lld\n", x);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}

 */