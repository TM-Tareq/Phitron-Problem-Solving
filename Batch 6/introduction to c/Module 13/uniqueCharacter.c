#include<stdio.h>
#include<string.h>

int main() {
    char str[10] = "apple";

    int freq[26] = {0};

    int len = strlen(str);

    for(int i =0; i < len; i++) {
        char ch = str[i];

        int index = ch - 'a';

        freq[index] = 1;
    }

    int count = 0;
 
    for(int i = 0; i < 26; i++) {
        // which word is unique on the whole alphabet
        // printf("%c %d\n", i + 'a', freq[i]);

        // only which are the unique
        printf("%c\n", i + 'a');

        count += f[i];
    }

    // number of distinct of unique word
    printf("%d", count);

    return 0;
}