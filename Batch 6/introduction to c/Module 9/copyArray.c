#include<stdio.h>

int a[10000], b[10000];
int main() {

    int length1 = 0, length2 = 0;

    scanf("%d", &length1);

    for(int i = 0; i < length1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before Copy\n");

    for(int i = 0; i < length1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++) {
        printf("%d ", b[i]);
    }


    printf("\n\n");

    // copying start
    for(int i = 0; i < length1; i++) {
        b[i] = a[i];
    }

    length2 = length1;

    printf("After Copy\n");

    a[2] = 100;

    for(int i = 0; i < length1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}