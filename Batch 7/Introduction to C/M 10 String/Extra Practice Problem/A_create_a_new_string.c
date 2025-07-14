#include<stdio.h>
#include<string.h>

int main() {
    char s[10001];
    char t[10001];
    scanf("%s", s);
    scanf("%s", t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    s[len_s] = ' ';

    for(int i = len_s + 1, j = 0; t[j] != '\0'; i++, j++) {
        s[i] = t[j];
    }


    printf("%d %d\n", len_s, len_t);
    printf("%s", s);

    // printf("%d", len_s);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A