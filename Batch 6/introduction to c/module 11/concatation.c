#include<stdio.h>
#include<string.h>
int main() {
    
    char str1[20] = "hello";
    char str2[20] = " world";

    // strcat(str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int length = len1 + len2;

    for(int i = len1, j = 0; i < length; i++, j++) {
        str1[i] = str2[j];
    }

    str1[length] = '\0';

    printf("%s", str1);

    return 0;
}