// #include<stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);

//     if(N >= 365) {
//         if(N == 365) {
//             printf("1 years\n0 months\n0 days");
//         } else if(N > 365) {
//             int years = N / 365;
//             printf("%d years\n", years);
//             int days = N % 365;
//             int months = days / 30;
//             printf("%d months\n", months);
//             days = (days - (months * 30));
//             printf("%d days\n", days);
//         }
//     } else {
//         int days = N % 365;
//         int months = days / 30;
//         printf("0 years\n");
//         printf("%d months\n", months);
//         days = (days - (months * 30));
//         printf("%d days\n", days);
//     }
// }

#include <stdio.h>

int main() {
	int X, Y, Z;
	scanf("%d%d%d", &X, &Y, &Z);

    int c = Y * Z;

    if(X > c) {
        printf("%d", X - c);
    } else {
        printf("-1");
    }

    return 0;
}