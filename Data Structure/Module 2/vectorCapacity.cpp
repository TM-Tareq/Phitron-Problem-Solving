#include<bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;

    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    // capacity function a jokhon capacity cross kore feli tokhon capacity take block kore dey
    // 1 2 4 8 16...

    v.resize(5);
    cout << "resize decrease check:" << v.size() << endl;
    v.resize(7, 100);
    cout << "resize increase check:" << v.size() << endl;

    v.clear();
    cout << "after use clear function check the size: " << v.size() << endl;

    // capacity function a jokhon capacity cross kore feli tokhon capacity take block kore dey
    // 1 2 4 8 16...

    // v.size(): Returns the size of the vector. 

    // v.clear() : Clears the vector elements. Do not delete the memory, only clear the value.

    // v.empty(): Return true/false if the vector is empty or not.





    return 0;
}