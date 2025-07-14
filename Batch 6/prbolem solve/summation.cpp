#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    long long int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];
    }

    if(sum < 0) {
        sum *= (-1);
    }

    cout << sum;

    return 0;
}