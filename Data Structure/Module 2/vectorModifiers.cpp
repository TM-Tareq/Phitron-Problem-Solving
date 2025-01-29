#include<bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v = {1, 2, 3, 5, 7};
    vector<int> v1;

    // vector assigning
    v1 = v;

    // for(int i = 0; i < v1.size(); i++) {
    //     cout << v1[i] << " ";
    // }

    for(int x: v1) {
        cout << x << " ";
    }

    v.push_back(10);
    for(int x: v) {
        cout << x << " ";
    }
    v.pop_back();
    for(int x: v) {
        cout << x << " ";
    }

    v.resize(20);

    // v.insert(postion, value);
    v.insert(v.begin() + 2, 10);
    // v.insert(v.begin() + 2, v.begin(), v1);

    return 0;
}