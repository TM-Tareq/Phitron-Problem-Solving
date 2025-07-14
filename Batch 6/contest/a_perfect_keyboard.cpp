#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin.ignore();
        getline(cin, s);

        bool flag = true;

        for(auto it = s.begin(); it != s.end(); it++) {
            if(*it == *(it + 1)) {
                return false;
            }
        }

        if(flag) {
            cout << "YES" << endl;
            cout << "abcdefghijklmnopqrstuvwxyz" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}