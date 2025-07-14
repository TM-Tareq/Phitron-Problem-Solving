#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n, m;
    cin >> n >> m;

    vector<int>a(n);
    vector<int>b(m);

    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    // Output the final array A
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}