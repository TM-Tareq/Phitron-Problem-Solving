#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int d, r;
    double f;

    d = a / b;
    r = a % b;
    f = (double)a / b;

    cout << fixed << setprecision(5);
    cout << d << " " << r << " " << f;

    return 0;
}