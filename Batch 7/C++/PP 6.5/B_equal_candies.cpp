#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int minVal = *min_element(arr.begin(), arr.end());

        // cout << minVal << endl;

        int i = 0, min_indies = 0;

        vector<int> diff(n, 0);

        while(i < arr.size()) {
            min_indies += (arr[i] - minVal);
            i++;
        }

        cout << min_indies << endl;
    }

    return 0;
}