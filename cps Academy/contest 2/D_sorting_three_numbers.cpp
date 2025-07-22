#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    sort(arr, arr + 3);

    for(int i = 0; i < 3; i++) {
        cout << arr[i];
        if(i < 2) cout << " ";
    }

    cout << endl;
    

    return 0;
}