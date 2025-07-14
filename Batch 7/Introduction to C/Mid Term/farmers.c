#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int m1, m2, d;
        scanf("%d%d%d", &m1, &m2, &d);

        int total_workers = m1 + m2;

        int days = (m1 * d) / total_workers;

        int remaining_days = d - days;

        printf("%d\n", remaining_days);
    }

    return 0;
}