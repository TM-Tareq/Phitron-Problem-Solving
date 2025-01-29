#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        int count = 0;

        if(s.size() <= 10) {
            cout << s << endl;
        } else {
            // for(auto it = s.begin() + 1; it < s.end() - 1; it++) {
            for(int i = 1; i < s.size() - 1; i++) {
                count++;
            }
            cout << *s.begin() << count << *(s.end() - 1) << endl;
        }
    }

    return 0;
}