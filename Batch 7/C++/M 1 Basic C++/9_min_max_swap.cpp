#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << endl;
    cout << min({10, 20, 3, 5, 7, 39}) << endl;
    cout << max(a, b) << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}