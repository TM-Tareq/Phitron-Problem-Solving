#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char str[101];
        scanf("%s", str);

        int len = strlen(str);

        int count = 0;

        if(len <= 10) printf("%s\n", str);
        else {
            for(int i = 1; i < len - 1; i++) {
                count++;
            }
            printf("%c%d%c\n", str[0], count, str[len-1]);
        }
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F