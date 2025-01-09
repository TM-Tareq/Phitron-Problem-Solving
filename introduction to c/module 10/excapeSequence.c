#include<stdio.h>
int main() {

    // char str[] = "Bangladesh is a "beautiful" country";

// escape sequence for using special character
    char str[] = "Bangladesh is a \"beautiful\" country";

    puts(str);

    char str[] = "Bangladesh is a beautiful cou\\nntry";

    puts(str);

    return 0;
}