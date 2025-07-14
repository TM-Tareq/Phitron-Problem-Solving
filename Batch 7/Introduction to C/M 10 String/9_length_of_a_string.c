#include<stdio.h>
#include<string.h>

int main() {
    char s[101];
    scanf("%s", s);

    // manually string length
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    // by using library function
    int sz = strlen(s);
    printf("%d\n", sz);

    printf("%d", count);

    return 0;
}