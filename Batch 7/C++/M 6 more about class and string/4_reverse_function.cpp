#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}