#include<stdio.h>
int main() {
    int testCase;
    scanf("%d", &testCase);

    while(testCase--) {
        char str[50];
        int cnt_a = 0, cnt_b = 0;

        for(int i = 0; i < 50; i++) {
            scanf("%s", str);
        }
        for(int i = 0; i < 50; i++) {
            if(str[i] == 97) cnt_a++;
            else cnt_b++;
        }
        for(int i = 0; i < 50; i++) {
            if(cnt_a % 2 == 0) cnt_a++;
            else cnt_b++;
        }
    }

    return 0;
}

// https://codeforces.com/gym/611797/problem/J