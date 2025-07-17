#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;  // Generally: 10^6 - 10^7

    s.clear();

    cout << s.size() << endl;

    cout << "Gello" << endl;

    // s.resize();

    return 0;
}