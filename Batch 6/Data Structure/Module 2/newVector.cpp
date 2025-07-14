#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // for(int i =0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     a.push_back(x);
    // }

    // for(int i =0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     b.push_back(x);
    // }


    vector<int> c;

    for(int i = 0; i < n; i++) {
        c.push_back(b[i]);
    }

    for(int i = 0; i < n; i++) {
        c.push_back(a[i]);
    }

    // for(int i = 0; i < n; i++) {
    //     c.assign(i, a[i]);
    // }

    // c.assign(a);

    // concatenate a to b
    // b.insert(b.end(), a.begin(), a.end());
    // concatenate a to b
    // for(auto i : a) {
    //     b.push_back(i);
    // }

    // for(int i : b) {
    //     cout << i << " ";
    // }

    // for(int i =0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }

    return 0;
}