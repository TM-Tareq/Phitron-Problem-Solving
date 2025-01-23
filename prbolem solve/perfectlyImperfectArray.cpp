#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long int product = 1;

        for(int i = 0; i < n; i++) {
            product *= arr[i];
        }

        // cout << product << endl;

        int roundValue = round(sqrt(product));

        long long int result = roundValue * roundValue;

        if(result != product) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        
    }

    return 0;
}



// A subsequence is different from a subset:
// A subset doesn't care about order, but a subsequence does.


// https://codeforces.com/problemset/problem/1514/A