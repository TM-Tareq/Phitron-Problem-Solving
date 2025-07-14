#include<bits/stdc++.h>
using namespace std;
int main() {
    
    list<int> l = {10, 20, 30};
    list<int> l2;
    // l2 = l;
    l2.assign(l.begin(), l.end());
    for(int val : l2) {
        cout << val << " ";
    }
    cout << endl;

    l.push_back(50);
    l.push_front(100);

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_back();
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // insert at any position using - insert- method

    // inserting a value
    l.insert(next(l.begin(), 2), 500);

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // inserting a vector
    vector<int> v2 = {1, 2, 3};
    l.insert(next(l.begin(), 2), v2.begin(), v2.end());

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Accessing any position
    next(l.begin(), 2);

    l.erase(next(l.begin(), 2));
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 2), next(l.begin(), 5));
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // replacing element
    replace(l.begin(), l.end(), 20, 100);
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 200);
    if(it == l.end()) {
        cout << "Not Found" << endl;
    } else {
        cout << "Found" << endl;
    }
    

    return 0;
}