#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        string s, t;
        cin >> s >> t;

        int slen = s.size();
        int tlen = t.size();

        int size = s.size() + t.size();

        string str;
        int flag1 = 1, flag2 = 1;

            for(int i = 0; i < size; i++) {
                if(s.size() != i && flag1) {
                    cout << s[i];
                } else {
                    flag1 = 0;
                }
                if(t.size() != i && flag2) {
                    cout << t[i];
                } else {
                    flag2 = 0;
                }
            }
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K