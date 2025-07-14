#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "Hello World ";
    string s2 = "Hi";

    s += s2;
    cout << s << endl;

    s.append(s2);
    cout << s << endl;

    // push can only single character. Multiple character cannot push
    s.push_back('A'); // s += 'A'
    cout << s << endl;

    s += 'A';
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    // s.assign("Gello");
    // cout << s << endl;

    // // from index 3 remove 2 character.Then rest of the character still remain
    // s.erase(3, 2); // like: s.resize(3);
    // cout << s << endl;

    s.replace(3, 2, "HO");
    cout << s << endl;

    s.insert(5, "Tareq");
    cout << s << endl;

    return 0;
}