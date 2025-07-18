#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cnt = 0;
        
        for(int i = 0; i + k <= n;) {
            // if(arr[i] == 1) continue;
            bool base = true;
            // else {
                for(int j = 0; j < k; j++) {
                    // while(arr[0] == 0) {
                    //     base = true;
                    // }
                    if(arr[i + j] == 1) {
                        base = false;
                        break;
                    }
                }
                if(base) {
                    cnt++;
                    i += k + 1;
                } else {
                    i++;
                }
            // }
            // if((i + 1) % k == 0) i++;
        }
        cout << cnt << endl;
    }

    return 0;
}