#include<stdio.h>
#include<string.h>

int main() {
    char str1[11];
    char str2[11];
    scanf("%s%s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("%d %d\n", len1, len2);

    char strCon[22];

    for(int i = 0; i <len1; i++) {
        strCon[i] = str1[i];
    }
    int j = strlen(str1);

    for(int i = 0; i <= len2; i++, j++) {
        strCon[j] = str2[i];
    }

    printf("%s\n", strCon);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s %s", str1, str2);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D