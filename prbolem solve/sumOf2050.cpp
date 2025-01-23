#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int testCase;
    cin >> testCase;

    while(testCase --) {
        long long int n;
        cin >> n;

        if(n % 2050 != 0) {
            cout << "-1" << endl;
        } else {
            for(int i = 0; i < n; i++) {
                long long int value = 2050 * pow(10, i);

                int count = 0;

                if(value == n) {
                    count++;
                    cout << count << endl;
                } if(n > value) {
                    count++;
                    long long int num = n - value;
                    if(num % value == 0) {
                        count++;
                        cout << count << endl;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    return 0;
}


// https://codeforces.com/contest/1517/problem/A