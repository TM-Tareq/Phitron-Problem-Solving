#include<bits/stdc++.h>
using namespace std;

int* getArray(int n) {
    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}
int main() {
    
    int n;
    cin >> n;

    int* x = getArray(n);

    for(int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    return 0;
}