#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char str[51], str2[51];
        scanf("%s%s",str, str);
        printf("%s %s", str, str2);
    }

    return 0;
}