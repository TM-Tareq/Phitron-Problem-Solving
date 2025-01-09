#include<stdio.h>
#include<string.h>


int main() {
    int a[10];
    int b[10] = "abcdef";

    // strcpy(destination, source);

    int length = strlen(b);

    for(int i = 0; i < length; i++) { // b[i] != '\0'
        a[i] = b[i];
    }

    a[length] = '\0'; 


    printf("%s %s", a, b);

    return 0;
}