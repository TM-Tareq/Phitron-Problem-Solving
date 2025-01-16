#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int n;
        cin >> n;

        string s;
        cin.ignore();
        getline(cin, s);

        string t = "";

        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                // t[i] += '1';
                t = '1';
            } else {
                // t[i] += '0';
                t = '0';
            }
        }

        cout << t << endl;
    }

    return 0;
}


// https://www.codechef.com/START169D/problems/P2169
