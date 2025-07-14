#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    // complexity O(sqrt(N))
    for(int i = 1; i<= sqrt(n); i++) {
        if(n % i == 0) {
            cout << i << " " << n / i << " ";
        }
    }

    // complexity O(sqrt(N))
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cout << i << " " << n / i << " ";
        }
    }

    return 0;
}

// complexity O(sqrt(N))