#include<bits/stdc++.h>
using namespace std;
int main() {

    // without size
    list <int> l;
    cout << l.size() << endl;

    // with size
    list <int> l2(10);
    cout << l2.size() << endl;

    // size with value
    list<int> l3(10, 3);
    cout << *l3.begin() << endl;

    for(auto it = l3.begin(); it != l3.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for(int val : l3) {
        cout << val << " ";
    }
    cout << endl;

    // keeping list into another list
    list<int> l5 = {1, 2, 3};
    list<int> l6(l5);

    for(int val : l6) {
        cout <<  val << " ";
    }
    cout << endl;

    // Keeping arrray value into a list
    int a[3] = {10, 20, 30};
    list<int> l7(a, a + 3);

    for(int val : l7) {
        cout << val << " ";
    }
    cout << endl;

    // Keeping vector into a list
    vector<int> v = {100, 200, 300};
    list<int> l8(v.begin(), v.end());

    for(int val : l8) {
        cout << val << " ";
    }
    cout << endl;

    // using clear function
    l8.clear();
    for(int val : l8) {
        cout << val;
    }
    cout <<"size " << l8.size();
    cout << endl;
    l8.resize(5);
    l8.resize(5, 100);

    return 0;
}