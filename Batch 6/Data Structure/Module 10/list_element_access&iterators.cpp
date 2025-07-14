#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> l = {10, 20, 30, 50, 60, 70};
    cout << l.back() << endl;
    cout << l.front() << endl;
    // for accessing any position -- returning a pointer
    cout << *next(l.begin(), 3) << endl;

    cout << *l.begin() << endl;
    // cout << *l.end() -- Not possible
    return 0;
}