#include<stdio.h>
#include<string.h>

int main() {
    char arr[1001];
    scanf("%s", arr);

    // int len = strlen(arr);
    // // int terminate = len / 2;

    // for(int i = 0; i < terminate; i++) {
    //     if(arr[i] != arr[len - i]) {
    //         printf("NO");
    //         return 0;
    //     }
    // }
    // printf("YES");

    int l = 0, r = strlen(arr) - 1;

    int pallindrome = 1;

    while(l < r) {
        if(arr[l] != arr[r]) {
            pallindrome = 0;
            break;
        }

        l++;
        r--;
    }

    if(pallindrome == 1) printf("YES");
    else printf("NO");

    return 0;
}