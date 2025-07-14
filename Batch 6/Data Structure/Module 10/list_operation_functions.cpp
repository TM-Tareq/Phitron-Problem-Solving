#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> l = {10, 20, 30, 50, 20, 30, 50, 60, 70, 60};

    // For erase function I've to tell
    // the index. But in remove function
    // only need the value

    l.remove(60);
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
    
    l.sort();
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    l.sort(greater<int>());
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    l.unique();
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}