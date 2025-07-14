#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, sum;
        cin >> n >> sum;

        int *arr = new int[n];

        int flag = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int freq[n] = {0};

        for(int i = 0; i < n - 1; i++) {

            for(int j = 0; j < n; j++) {
                freq[j] = arr[i] + arr[j];
            }

            int freq2[n] = {0};

            for(int k = 0; k < n; k++) {

                freq2[k] = freq[i] + arr[k];

                if(sum == freq2[i]) {
                    flag = 1;
                }
            }
        }

        if(flag) cout << "YES";
        else cout << "NO";

    }

    return 0;
}