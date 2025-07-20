#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        int cnt = 0;

        for(int j = 1; j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                cnt++;
            }
        }

        if(cnt == 3) cout << "YES" << endl;
        else cout << "NO" << endl;

        cnt = 0;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/230/B