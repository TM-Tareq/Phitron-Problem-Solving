#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double d = 23.23758;

    cout << fixed << setprecision(2) << d << endl;

    return 0;
}