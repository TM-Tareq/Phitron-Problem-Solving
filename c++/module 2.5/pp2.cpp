#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n, m;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    // if(m >= n) {
        for(int i = 0; i < n; i++) {
            b[i] = a[i];
        }
    // }

    for(int i = n; i < m; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }

    return 0;
}