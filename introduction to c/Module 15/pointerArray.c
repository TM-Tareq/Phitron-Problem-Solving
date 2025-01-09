#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 5, 6};

    int *p = arr;

    printf("%d\n\n%d", &arr[0], p);

    printf("\n\n%d", (p + 1));

    return 0;
}