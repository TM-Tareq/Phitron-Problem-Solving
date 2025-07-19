#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int d, r;
    float f;

    d = a / b;
    r = a % b;
    f = (float)a / b;

    cout << fixed << setprecision(5);
    cout << d << " " << r << " " << f;

    return 0;
}