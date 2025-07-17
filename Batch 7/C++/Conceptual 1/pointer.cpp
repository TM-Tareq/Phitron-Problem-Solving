#include<bits/stdc++.h>
using namespace std;
int main() {
    int a = 10;

    cout << "a er address "<< &a << endl;

    int * ptr = &a;

    cout << "Pointer e store ase " << ptr << endl;

    // deferencing
    *ptr = 100;

    cout << a << endl;

    return 0;
}