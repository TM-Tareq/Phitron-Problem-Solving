#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // int count = 0;
    bool hasDuplicate;

    for(int i = 0; i < n; i++) {
        // if(a[i] == i) {
        //     count++;
        // }

        if(a[i] == a[i - 1]) {
            hasDuplicate = true;
            break;
        }
    }

    // if(count > 0) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }

    if(hasDuplicate) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}