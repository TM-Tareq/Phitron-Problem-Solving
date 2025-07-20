#include<bits/stdc++.h>
using namespace std;
int main() {
    double r;
    cin >> r;

    double pi = acos(-1);

    double area = pi * r * r; 
    double circumference = 2 * pi * r;

    cout << fixed << setprecision(6);
    cout << area << " " << circumference << endl;

    return 0;
}