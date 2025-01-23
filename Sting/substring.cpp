#include<bits/stdc++.h>
using namespace std;



// total substring
void totalSubstring(string s) {
    string ss;

    // total substring
    for(int i = 0; i < s.size(); i++) {

        for(int j = 0; j < s.size() - i; j++) {
            // ss = s.substr(i, i + 1);
            ss = s.substr(i, j + 1);
            cout << ss << endl;
        }
    }
}

int main() {
    string s = "abcdef";

    totalSubstring(s);

    return 0;
}