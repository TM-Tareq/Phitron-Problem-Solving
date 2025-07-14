#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    // sort(arr, arr + 5, greater<int>()); // descending 

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}