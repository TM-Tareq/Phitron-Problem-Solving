// Reverse & Palindrome

#include<stdio.h>
#include<string.h>

int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);

    char str2[20];

    strcpy(str2, str); // comparing two string

    int length = strlen(str);

// string reversing
    for(int i = 0, j = length - 1; i <= j; i++) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    strcmp(str, str2);

    printf("%s", str);

    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[20] = "abcdef";

//     int length = strlen(str);

//     for(int i = 0, j = length - 1; i <= j; i++, j--) {
//         char temp = str[i];

//         str[i] = str[j];

//         str[j] = temp;
//     }

//     printf("%s", str);

//     return 0;
// }