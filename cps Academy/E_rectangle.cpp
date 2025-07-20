#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int area;
    int perimeter;

    area = a * b;
    perimeter = 2 * (a + b);

    cout << area << " " << perimeter << endl;

    return 0;
}