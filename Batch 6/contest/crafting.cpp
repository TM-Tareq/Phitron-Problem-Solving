#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int n; //number of materials
        cin >> n;

        long long int b[n], a[n];
        long long int dif = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
            if(a[i] > b[i]) {
                dif += a[i] - b[i];
            } else {
                dif += b[i] - a[i];
            }
        }

        if(a[1] > b[1]) {
            if(dif == (a[1] - b[1]) * n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        } else {
            if(dif == (b[1] - a[1]) * n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        }
    }

    return 0;
}