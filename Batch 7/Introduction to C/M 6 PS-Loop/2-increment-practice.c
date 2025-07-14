#include<stdio.h>
int main() {
    int x = 10;
    int y = x++; // first y = 10,then x = 11
    int z = ++y; // z = 11;
    printf("%d %d", z++, z); // 11 12

    return 0;
}

// #include<stdio.h>
// int main() {
//     int x = 10;
//     ++x;  // 11
//     printf("%d", ++x); // 12

//     return 0;
// }