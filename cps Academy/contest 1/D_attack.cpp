#include<bits/stdc++.h>
using namespace std;
int main() {
    // A - x * B <= 0
    // x * B >= A
    // x >= A / B

    long long a, b;
    cin >> a >> b;

    long long x = (a + b - 1) / b;

    // int cnt = 0;

    // while(x <= 0) {
    //     x = a / b;
    //     if(x > 0) cnt++;
    //     ceil(x);
    // }

    cout << x << endl;

    return 0;
}