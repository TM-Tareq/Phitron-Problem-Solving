#include<bits/stdc++.h>
using namespace std;
int main() {
    
    // Access the i-th element
    // v[i], v.at(i); 

    vector<int> v = {1, 3, 5, 7, 9};

    cout  << v[3] << endl;
    cout  << v.at(3) << endl;

    // access the last element
    // v.back(), v[v.size() - 1]
    cout << v.back() << endl;
    cout << v[v.size() - 1] << endl;

    // access the front value using front function
    // v.front(), v[0];
    cout << v.front() << endl;
    cout << v[0] << endl;

    return 0;
}