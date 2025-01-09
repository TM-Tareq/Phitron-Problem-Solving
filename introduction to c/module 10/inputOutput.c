#include<stdio.h>
int main() {
    // char str[10] = "abcd";
    char str[10];


// For taking inputs

    // scanf("%s", str);
    // scanf("%[^\n]s", str); // for taking a full line with space
    fgets(str,sizeof(str), stdin);



// For taking outputs
    // printf("%s", str);
    fputs(str);

    return 0;
}