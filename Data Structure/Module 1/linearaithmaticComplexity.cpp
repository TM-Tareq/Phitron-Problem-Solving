#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        // Complexity O(logN)
        for(int i = 1; i <= n; i*=2) {
            cout << i << endl;
        }
    }

    return 0;
}

// O(N log(N))