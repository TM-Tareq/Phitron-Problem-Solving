#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char s1[1000];
    char s2[1000];
    char s3[1000];

    char minString[1000], maxString[1000];

    scanf("%s %s %s", S1, S2, S3);

    strcpy(minString, s1);
    strcpy(maxString, s1);

    if (strcmp(s2, minString) < 0) {
        strcpy(minString, s2);
    }
    if (strcmp(s2, maxString) > 0) {
        strcpy(maxString, s2);
    }

    if (strcmp(s3, minString) < 0) {
        strcpy(minString, s3);
    }
    if (strcmp(s3, maxString) > 0) {
        strcpy(maxString, s3);
    }

    printf("%s\n", minString);
    printf("%s\n", maxString);
    return 0;
}
