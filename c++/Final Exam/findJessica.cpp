#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Read the entire input string

    string word;
    bool found = false;
    stringstream ss(s); // Use stringstream to split the string into words

    while (ss >> word) {
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}