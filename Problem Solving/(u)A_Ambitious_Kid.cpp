#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sm_pos = INT_MIN;
    int sm_neg = INT_MAX;

    for(int i = 0; i < n - 1; i++) {
        if((arr[i + 1] < 0)) {
            if(arr[i] > arr[i + 1]) {
                sm_neg = arr[i + 1];
            }
        } else if(arr[i + 1] > 0) {
            sm_pos = arr[i + 1];
        }
    }

    // sm = abs(sm);

    cout << sm_pos << " " << sm_neg << endl;



    return 0;
}