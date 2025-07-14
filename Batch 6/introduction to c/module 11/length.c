#include<stdio.h>
#include<string.h>


int main() {
    char str[20] = "abcd";

// without library function
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // with library function
    length = strlen(str);

    printf("%d", length);
 
    return 0;
}