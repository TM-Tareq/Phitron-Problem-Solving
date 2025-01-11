#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++) {
        int n;
        cin >> n;

        int count = 0;

        if(n >= 2 && n <= 100) {
            for(int j = 1; j < n; j++) {

                // Time complexity o(n2)
                // for(int k = 1; i < n; k++) {
                //     if((j + k) == n) {
                //         count++;
                //     }
                // }

                // Time complexity o(n)
                int k = n - j;
                if(k > 0) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/2044/A