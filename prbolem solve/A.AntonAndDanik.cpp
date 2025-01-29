#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    // string s;
    // for(auto it = )

    char s[n];

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') {
            count1 ++;
        } else if(s[i] == 'D') {
            count2++;
        }
    }

    if(count1 == count2) {
        cout << "Friendship";
    } else if(count1 > count2) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }

    return 0;
}