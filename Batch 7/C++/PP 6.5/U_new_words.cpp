#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    int cnt = 0;

    for(char c : str) {
        c = tolower(c);
    }

    cout << str << endl;

    return 0;
}