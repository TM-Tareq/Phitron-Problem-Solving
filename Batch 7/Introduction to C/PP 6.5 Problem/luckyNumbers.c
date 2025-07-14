#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int divisors = n / 10;
    int reminder = n % 10;

    if(reminder == 0 || divisors == 0) printf("YES");
    else {
        if(divisors % reminder == 0) printf("YES");
        else if(reminder % divisors == 0) printf("YES");
        else printf("NO");
    }

    return 0;
}