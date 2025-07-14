#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int rowNum;
        cin >> rowNum;

        string s;

        string target = "#";

        for(int i = 0; i < rowNum; i++) {
            for(int j = 0; j <= 3; j++) {
                cin >> s;
            }
        }
        for(int i = 0; i < rowNum; i++) {
            for(int j = 0; j <= 3; j++) {
                if(s.find(target)) {
                    cout << j + 1;
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}

// https://codeforces.com/problemset/problem/2009/B