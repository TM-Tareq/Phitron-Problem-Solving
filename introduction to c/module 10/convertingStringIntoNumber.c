#include<stdio.h>
int main() {

    char str[5] = "5";

    printf("%d", str[0]); // output will be ASCII value

    printf("%d", str[0] - '0');

    char str2[20];

    int n;
    scanf("%d", &n)

    scanf("%d", &str2);

    int num = 0;
    for(int i = 0; i < n; i++) {

        int digit = str2[i] - '0';

        num = num * 10 + digit;
    }

    printf("%d\n", num); 
    

    return 0;
}