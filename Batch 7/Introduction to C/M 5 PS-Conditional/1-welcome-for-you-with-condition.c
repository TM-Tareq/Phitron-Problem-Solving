#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);

    int val = x / 1000;

    if(val % 2 == 0) printf("EVEN");
    else printf("ODD");

    return 0;
}

// divide any number by 1 & 0 is equal to how many numbers we want to delete
// if we use / --then we find the 1st, 2nd... so on position
// if we use % --then we find out the last in 1st, last in 2nd & so on