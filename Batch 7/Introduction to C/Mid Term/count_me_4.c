// #include<stdio.h>
// int main() {
//     char str[1000];
//     scanf("%s", str);

//     int arr[26];
//     for(int i = 1; i <= 26; i++) {
//         arr[i] = 96 + i;
//     }
//     for(int i = 1; i <= 26; i++) {
//         if(arr[i] == 'a' + i) arr[i]++;
//     }

//     for(int i = 1; i <= 26; i++) {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }





#include<stdio.h>
#include<string.h>

int main() {

    char str[10000];
    int freq[26] ={0};

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }

    
    return 0;
}