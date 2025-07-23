#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int n;
        string str;
        cin >> n >> str;

        int freq[26] = {0};

        int cnt = 0;

        for(char ch : str) {
            freq[ch - 'A']++;

            if(freq[ch - 'A'] == 1) cnt += 2;
            else cnt ++;
        }

        cout << cnt << endl;
    }

    return 0;
}

// https://codeforces.com/contest/1703/problem/B