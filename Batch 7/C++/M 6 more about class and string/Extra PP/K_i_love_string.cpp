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

        if(slen == tlen) {
            for(int i = 0; i < s.size(); i++) {
                for(int j = 0; j < t.size(); j++) {
                    s.push_back(t[j]);
                }
            }
        } else {

        }

        cout << s << " " << t << endl;
    }

    return 0;
}