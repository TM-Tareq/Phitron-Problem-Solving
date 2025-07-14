#include<stdio.h>
int main() {

    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        
        char s[15];
        scanf("%s", s);

        int count = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';

            for(int i = 0; i < n; i++) {
                if(s[i] == '1') count++;
            }

            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';

        }

        printf("%d\n", count);
    }


    return 0;
}

// https://codeforces.com/problemset/problem/2106/A


