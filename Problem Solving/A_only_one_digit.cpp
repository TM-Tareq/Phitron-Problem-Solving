#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;

        int lowest = INT_MAX;

        while(x != 0) {
            int mod = x % 10;

            if(mod < lowest) lowest = mod;

            x = x / 10;
        }

        cout << lowest << endl;
    }

    return 0;
}